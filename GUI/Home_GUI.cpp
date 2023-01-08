#include "Home_GUI.h"

Home_GUI::Home_GUI()
{
    //m_currentUser = std::make_unique<User>(*currentUser);
	setupUi(this);
    connect(searchButton, &QPushButton::clicked, this, &Home_GUI::onSearchButtonClicked);
}

void Home_GUI::setupUi(QMainWindow* Home_GUIClass)
{
    if (Home_GUIClass->objectName().isEmpty())
        Home_GUIClass->setObjectName("Home_GUIClass");
    Home_GUIClass->resize(695, 532);
    Home_GUIClass->setStyleSheet(QString::fromUtf8(""));
    actionHome = new QAction(Home_GUIClass);
    actionHome->setObjectName("actionHome");
    actionMy_Profile = new QAction(Home_GUIClass);
    actionMy_Profile->setObjectName("actionMy_Profile");
	connect(actionMy_Profile, &QAction::triggered, this, &Home_GUI::openUserPage);
    
    actionSign_Out = new QAction(Home_GUIClass);
    actionSign_Out->setObjectName("actionSign_Out");
	connect(actionSign_Out, &QAction::triggered, this, &Home_GUI::openLogin);
        
    centralWidget = new QWidget(Home_GUIClass);
    centralWidget->setObjectName("centralWidget");
    gridLayout = new QGridLayout(centralWidget);
    gridLayout->setSpacing(6);
    gridLayout->setContentsMargins(11, 11, 11, 11);
    gridLayout->setObjectName("gridLayout");
    groupBox = new QGroupBox(centralWidget);
    groupBox->setObjectName("groupBox");
    groupBox->setStyleSheet(QString::fromUtf8("background-image: url(:/Login_GUI/background_image.jpg)"));

    gridLayout->addWidget(groupBox, 2, 0, 1, 1);

    splitter = new QSplitter(centralWidget);
    splitter->setObjectName("splitter");
    splitter->setOrientation(Qt::Horizontal);
    insert_searched_movie = new QLineEdit(splitter);
    insert_searched_movie->setObjectName("insert_searched_movie");
    QFont font;
    font.setFamilies({ QString::fromUtf8("Cambria") });
    font.setPointSize(11);
    insert_searched_movie->setFont(font);
    insert_searched_movie->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255)"));
    splitter->addWidget(insert_searched_movie);
    searchButton = new QPushButton(splitter);
    searchButton->setObjectName("pushButton");
    
    QSizePolicy sizePolicy(QSizePolicy::Minimum, QSizePolicy::Minimum);
    sizePolicy.setHorizontalStretch(0);
    sizePolicy.setVerticalStretch(0);
    sizePolicy.setHeightForWidth(searchButton->sizePolicy().hasHeightForWidth());
    searchButton->setSizePolicy(sizePolicy);
    searchButton->setMaximumSize(QSize(32, 32));
    searchButton->setStyleSheet(QString::fromUtf8("background image url(:/Login_GUI/search_icon.png)"));
    QIcon icon;
    icon.addFile(QString::fromUtf8(":/Login_GUI/search_icon.png"), QSize(), QIcon::Normal, QIcon::Off);
    searchButton->setIcon(icon);
    searchButton->setIconSize(QSize(32, 32));
    splitter->addWidget(searchButton);

    gridLayout->addWidget(splitter, 1, 0, 1, 1);

    Home_GUIClass->setCentralWidget(centralWidget);
    menuBar = new QMenuBar(Home_GUIClass);
    menuBar->setObjectName("menuBar");
    menuBar->setGeometry(QRect(0, 0, 695, 26));
    menu = new QMenu(menuBar);
    menu->setObjectName("menu");
    Home_GUIClass->setMenuBar(menuBar);

    menuBar->addAction(menu->menuAction());
    menu->addAction(actionHome);
    menu->addAction(actionMy_Profile);
    menu->addAction(actionSign_Out);

    retranslateUi(Home_GUIClass);

    QMetaObject::connectSlotsByName(Home_GUIClass);
}

void Home_GUI::retranslateUi(QMainWindow* Home_GUIClass)
{
    Home_GUIClass->setWindowTitle(QCoreApplication::translate("Home_GUIClass", "Home", nullptr));
    actionHome->setText(QCoreApplication::translate("Home_GUIClass", "Home", nullptr));
    actionMy_Profile->setText(QCoreApplication::translate("Home_GUIClass", "My Profile", nullptr));
    actionSign_Out->setText(QCoreApplication::translate("Home_GUIClass", "Sign Out", nullptr));
    groupBox->setTitle(QCoreApplication::translate("Home_GUIClass", "GroupBox", nullptr));
    searchButton->setText(QString());
    menu->setTitle(QCoreApplication::translate("Home_GUIClass", "|||", nullptr));
}

void Home_GUI::openUserPage()
{
    this->hide();
	m_userPage = new User_Page_GUI();
    m_userPage->show();
    connect(m_userPage->backToHomePage, &QPushButton::clicked, this, &Home_GUI::onBackToMenuClickedUser);
}

void Home_GUI::onBackToMenuClickedUser()
{
    m_userPage->close();
    this->show();
}

void Home_GUI::openLogin()
{
    this->close();
	Login_GUI* login = new Login_GUI();
	login->show();
}

void Home_GUI::onSearchButtonClicked()
{
    QString qSearch = insert_searched_movie->text();
    if (qSearch.isEmpty())
    {
        QMessageBox::warning(this, "Search", "Please enter a search term");
        return;
    }
    std::string search = qSearch.toStdString();
    std::vector<Movie> allMovies = getMovies(search);
    this->close();
    m_moviePage = new Movie_Page_GUI();
    m_moviePage->showDetails(allMovies[0].m_title);
    m_moviePage->show();
	connect(m_moviePage->Back_to_homepage, &QPushButton::clicked, this, &Home_GUI::onBackToMenuClickedMovie);
}

void Home_GUI::onBackToMenuClickedMovie()
{
	m_moviePage->close();
	this->show();
}

int Home_GUI::countWordsRegex(const std::string& name)
{
    std::regex regex("(\\w+)|(:)");
    auto wordsBegin = std::sregex_iterator(name.begin(), name.end(), regex);
    auto wordsEnd = std::sregex_iterator();
    return std::distance(wordsBegin, wordsEnd);
}

std::string::iterator Home_GUI::findPosOfLastWord(std::string& name)
{
    for (std::string::iterator pos = name.end() - 1; pos != name.begin(); --pos)
    {
        if (!isalnum(*pos))
            return pos;
    }
}

void Home_GUI::deleteLastWord(std::string& name)
{
    name.erase(findPosOfLastWord(name), name.end());
}

std::vector<Movie> Home_GUI::getMovies(const std::string& name)
{
    std::ofstream out("file.txt");
    auto table = Storages::getStorage();
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

Home_GUI::~Home_GUI()
{}
