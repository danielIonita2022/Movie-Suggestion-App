#include "SearchPage.h"

SearchPage::SearchPage(User* currentUser)
{
    m_currentUser = std::make_unique<User>(*currentUser);
    setupUi();
    connect(searchButton, &QPushButton::clicked, this, &SearchPage::onSearchButtonClicked);
}

void SearchPage::setupUi()
{
    window = new QWidget;
    window->setWindowTitle("Search");
    window->setObjectName("Search");

    resize(732, 466);
    setMinimumSize(QSize(444, 321));
    setMaximumSize(QSize(1332, 963));
    setMouseTracking(true);
	
	label = new QLabel;
	label->setText("Search for a movie by name:");
    
    lineEdit = new QLineEdit;
    searchButton = new QPushButton("Search");
    searchButton->setCursor(QCursor(Qt::PointingHandCursor));
    
    layout = new QVBoxLayout;
	layout->addWidget(label);
    layout->addWidget(lineEdit);
    layout->addWidget(searchButton);
    
    window->setLayout(layout);
    window->setVisible(true);
    setCentralWidget(window);
    QMetaObject::connectSlotsByName(this);
}

void SearchPage::onSearchButtonClicked()
{
	QString qSearch = lineEdit->text();
	if (qSearch.isEmpty())
	{
		QMessageBox::warning(this, "Search", "Please enter a search term");
		return;
	}
	std::string search = qSearch.toStdString();
	std::vector<Movie> allMovies = getMovies(search);
	Movie_Page_GUI* moviePage = new Movie_Page_GUI();
	moviePage->showDetails(allMovies[0].m_title);
	moviePage->show();
}

int SearchPage::countWordsRegex(const std::string& name)
{
	std::regex regex("(\\w+)|(:)");
	auto wordsBegin = std::sregex_iterator(name.begin(), name.end(), regex);
	auto wordsEnd = std::sregex_iterator();
	return std::distance(wordsBegin, wordsEnd);
}

std::string::iterator SearchPage::findPosOfLastWord(std::string& name)
{
	for (std::string::iterator pos = name.end() - 1; pos != name.begin(); --pos)
	{
		if (!isalnum(*pos))
			return pos;
	}
}

void SearchPage::deleteLastWord(std::string& name)
{
	name.erase(findPosOfLastWord(name), name.end());
}

std::vector<Movie> SearchPage::getMovies(const std::string& name)
{
	std::ofstream out("file.txt");
	auto table = Storages::getInstance().getMovieStorage();
	std::vector<Movie> allMovies;
	std::string incompleteName = name;
	allMovies = table.get_all<Movie>(sqlite_orm::where
	(sqlite_orm::like((&Movie::m_title), name)));

	int nrWords = countWordsRegex(name);
	if (nrWords > 1)
	{
		for (int count = 1; count < nrWords; ++count)
		{
			deleteLastWord(incompleteName);
			if (incompleteName.empty())
			{
				break;
			}
			std::vector <Movie> movie = table.get_all<Movie>(sqlite_orm::where
			(sqlite_orm::like((&Movie::m_title), incompleteName)));
			if (!movie.empty())
			{
				allMovies.push_back(movie[0]);
			}
		}
	}
	if (allMovies.empty())
	{
		QMessageBox::warning(this, "Search failed!", "The search query returned no results!");
		return allMovies;
	}
	return allMovies;
}