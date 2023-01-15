#include "Movie_Page_GUI.h"

Movie_Page_GUI::Movie_Page_GUI()
{
    setupUi();
}

void Movie_Page_GUI::setupUi()
{
    if (objectName().isEmpty())
        setObjectName("Form");
    resize(960, 606);
    gridLayout = new QGridLayout(this);
    gridLayout->setObjectName("gridLayout");
    scrollArea = new QScrollArea(this);
    scrollArea->setObjectName("scrollArea");
    scrollArea->setWidgetResizable(true);
    scrollAreaWidgetContents = new QWidget();
    scrollAreaWidgetContents->setObjectName("scrollAreaWidgetContents");
    scrollAreaWidgetContents->setGeometry(QRect(0, 0, 940, 586));
    Movie_Title = new QLabel(scrollAreaWidgetContents);
    Movie_Title->setObjectName("Movie_Title");
    Movie_Title->setGeometry(QRect(280, 10, 381, 61));
    QFont font;
    font.setFamilies({ QString::fromUtf8("Terminal") });
    font.setPointSize(14);
    font.setBold(true);
    Movie_Title->setFont(font);
    Movie_Description = new QLabel(scrollAreaWidgetContents);
    Movie_Description->setObjectName("Movie_Description");
    Movie_Description->setGeometry(QRect(30, 90, 881, 181));
    QFont font1;
    font1.setFamilies({ QString::fromUtf8("Cambria") });
    font1.setPointSize(11);
    Movie_Description->setFont(font1);
    Movie_director = new QLabel(scrollAreaWidgetContents);
    Movie_director->setObjectName("Movie_director");
    Movie_director->setGeometry(QRect(90, 340, 821, 41));
    Movie_director->setFont(font1);
    Movie_Cast = new QLabel(scrollAreaWidgetContents);
    Movie_Cast->setObjectName("Movie_Cast");
    Movie_Cast->setGeometry(QRect(60, 380, 861, 41));
    Movie_Cast->setFont(font1);
    Cast_text = new QLabel(scrollAreaWidgetContents);
    Cast_text->setObjectName("Cast_text");
    Cast_text->setGeometry(QRect(30, 380, 61, 41));
    Cast_text->setFont(font1);
    Country_text = new QLabel(scrollAreaWidgetContents);
    Country_text->setObjectName("Country_text");
    Country_text->setGeometry(QRect(30, 420, 61, 41));
    Country_text->setFont(font1);
    Movie_Country = new QLabel(scrollAreaWidgetContents);
    Movie_Country->setObjectName("Movie_Country");
    Movie_Country->setGeometry(QRect(90, 420, 141, 41));
    Movie_Country->setFont(font1);
    Date_added_text = new QLabel(scrollAreaWidgetContents);
    Date_added_text->setObjectName("Date_added_text");
    Date_added_text->setGeometry(QRect(300, 420, 81, 41));
    Date_added_text->setFont(font1);
    Movie_date_added = new QLabel(scrollAreaWidgetContents);
    Movie_date_added->setObjectName("Movie_date_added");
    Movie_date_added->setGeometry(QRect(380, 420, 211, 41));
    Movie_date_added->setFont(font1);
    Release_year_text = new QLabel(scrollAreaWidgetContents);
    Release_year_text->setObjectName("Release_year_text");
    Release_year_text->setGeometry(QRect(650, 420, 91, 41));
    Release_year_text->setFont(font1);
    Movie_release_year = new QLabel(scrollAreaWidgetContents);
    Movie_release_year->setObjectName("Movie_release_year");
    Movie_release_year->setGeometry(QRect(740, 420, 201, 41));
    Movie_release_year->setFont(font1);
    Duration_text = new QLabel(scrollAreaWidgetContents);
    Duration_text->setObjectName("Duration_text");
    Duration_text->setGeometry(QRect(300, 300, 61, 41));
    Duration_text->setFont(font1);
    Type_text = new QLabel(scrollAreaWidgetContents);
    Type_text->setObjectName("Type_text");
    Type_text->setGeometry(QRect(30, 300, 61, 41));
    Type_text->setFont(font1);
    Movie_type = new QLabel(scrollAreaWidgetContents);
    Movie_type->setObjectName("Movie_type");
    Movie_type->setGeometry(QRect(90, 300, 161, 41));
    Movie_type->setFont(font1);
    Movie_duration = new QLabel(scrollAreaWidgetContents);
    Movie_duration->setObjectName("Movie_duration");
    Movie_duration->setGeometry(QRect(360, 300, 261, 41));
    Movie_duration->setFont(font1);
    Genres_text = new QLabel(scrollAreaWidgetContents);
    Genres_text->setObjectName("Genres_text");
    Genres_text->setGeometry(QRect(30, 470, 61, 41));
    Genres_text->setFont(font1);
    Movie_genres = new QLabel(scrollAreaWidgetContents);
    Movie_genres->setObjectName("Movie_genres");
    Movie_genres->setGeometry(QRect(90, 470, 821, 41));
    Movie_genres->setFont(font1);
    Rating_text = new QLabel(scrollAreaWidgetContents);
    Rating_text->setObjectName("Rating_text");
    Rating_text->setGeometry(QRect(650, 300, 61, 41));
    Rating_text->setFont(font1);
    Movie_rating = new QLabel(scrollAreaWidgetContents);
    Movie_rating->setObjectName("Movie_rating");
    Movie_rating->setGeometry(QRect(710, 300, 111, 41));
    Movie_rating->setFont(font1);
    Add_to_wishlist = new QPushButton(scrollAreaWidgetContents);
    Add_to_wishlist->setObjectName("Add_to_wishlist");
    Add_to_wishlist->setGeometry(QRect(110, 540, 121, 31));
    Add_to_wishlist->setFont(font1);
    Add_to_seen = new QPushButton(scrollAreaWidgetContents);
    Add_to_seen->setObjectName("Add_to_seen");
    Add_to_seen->setGeometry(QRect(280, 540, 131, 31));
    Add_to_seen->setFont(font1);
    Like_button = new QPushButton(scrollAreaWidgetContents);
    Like_button->setObjectName("Like_button");
    Like_button->setGeometry(QRect(710, 540, 51, 24));
    Like_button->setFont(font1);
    Dislike_button = new QPushButton(scrollAreaWidgetContents);
    Dislike_button->setObjectName("Dislike_button");
    Dislike_button->setGeometry(QRect(790, 540, 61, 24));
    Dislike_button->setFont(font1);
	Back_to_homepage = new QPushButton(scrollAreaWidgetContents);
	Back_to_homepage->setObjectName("Back_to_homepage");
	Back_to_homepage->setGeometry(QRect(10, 10, 140, 30));
	Back_to_homepage->setFont(font1);
    Director_text = new QLabel(scrollAreaWidgetContents);
    Director_text->setObjectName("Director_text");
    Director_text->setGeometry(QRect(30, 340, 61, 41));
    Director_text->setFont(font1);
    scrollArea->setWidget(scrollAreaWidgetContents);

    gridLayout->addWidget(scrollArea, 0, 0, 1, 1);


    retranslateUi();

    QMetaObject::connectSlotsByName(this);
}

void Movie_Page_GUI::retranslateUi()
{
    setWindowTitle(QCoreApplication::translate("Form", "Form", nullptr));
    Movie_Title->setText(QString());
    Movie_Description->setText(QString());
    Movie_director->setText(QString());
    Movie_Cast->setText(QString());
    Cast_text->setText(QCoreApplication::translate("Form", "Cast:", nullptr));
    Country_text->setText(QCoreApplication::translate("Form", "Country:", nullptr));
    Movie_Country->setText(QString());
    Date_added_text->setText(QCoreApplication::translate("Form", "Date added:", nullptr));
    Movie_date_added->setText(QString());
    Release_year_text->setText(QCoreApplication::translate("Form", "Release year:", nullptr));
    Movie_release_year->setText(QString());
    Duration_text->setText(QCoreApplication::translate("Form", "Duration:", nullptr));
    Type_text->setText(QCoreApplication::translate("Form", "Type:", nullptr));
    Movie_type->setText(QString());
    Movie_duration->setText(QString());
    Genres_text->setText(QCoreApplication::translate("Form", "Genres:", nullptr));
    Movie_genres->setText(QString());
    Rating_text->setText(QCoreApplication::translate("Form", "Rating:", nullptr));
    Movie_rating->setText(QString());
    Add_to_wishlist->setText(QCoreApplication::translate("Form", "Add to Wishlist", nullptr));
    Add_to_seen->setText(QCoreApplication::translate("Form", "Mark as seen", nullptr));
    Like_button->setText(QCoreApplication::translate("Form", "Like", nullptr));
    Dislike_button->setText(QCoreApplication::translate("Form", "Dislike", nullptr));
	Back_to_homepage->setText(QCoreApplication::translate("Form", "Back to home page", nullptr));
    Director_text->setText(QCoreApplication::translate("Form", "Director:", nullptr));
}

void Movie_Page_GUI::showDetails(std::string title)
{
    auto table = Storages::getInstance().getMovieStorage();
    auto allMovies = table.get_all<Movie>(sqlite_orm::where
    (sqlite_orm::like((&Movie::m_title), title)));

    for (auto& movie : allMovies)
    {
        Movie_Title->setText(QString::fromStdString(movie.m_title));
        if (movie.m_description != "")
        {
            Movie_Description->setWordWrap(true);
            Movie_Description->setText(QString::fromStdString(movie.m_description));
        }
        else
        {
            Movie_Description->setText("No description available");
        }
        if (movie.m_director != "")
        {
            Movie_director->setWordWrap(true);
            Movie_director->setText(QString::fromStdString(movie.m_director));
        }
        else
        {
            Movie_director->setText("N/A");
        }
        if (movie.m_cast != "")
        {
            Movie_Cast->setWordWrap(true);
            Movie_Cast->setText(QString::fromStdString(movie.m_cast));
        }
        else
        {
            Movie_Cast->setText("N/A");
        }
        if (movie.m_country != "")
        {
            Movie_Country->setWordWrap(true);
            Movie_Country->setText(QString::fromStdString(movie.m_country));
        }
        else
        {
            Movie_Country->setText("N/A");
        }
        if (movie.m_dateAdded != "")
        {
            Movie_date_added->setWordWrap(true);
            Movie_date_added->setText(QString::fromStdString(movie.m_dateAdded));
        }
        else
        {
            Movie_date_added->setText("N/A");
        }
        if (movie.m_releaseYear != 0)
        {
            Movie_release_year->setWordWrap(true);
            Movie_release_year->setText(QString::number(movie.m_releaseYear));
        }
        else
        {
            Movie_release_year->setText("N/A");
        }
        if (movie.m_duration != "")
        {
            Movie_duration->setWordWrap(true);
            Movie_duration->setText(QString::fromStdString(movie.m_duration));
        }
        else
        {
            Movie_duration->setText("N/A");
        }
        if (movie.m_type != "")
        {
            Movie_type->setWordWrap(true);
            Movie_type->setText(QString::fromStdString(movie.m_type));
        }
        else
        {
            Movie_type->setText("N/A");
        }
        if (movie.m_listedIn != "")
        {
            Movie_genres->setWordWrap(true);
            Movie_genres->setText(QString::fromStdString(movie.m_listedIn));
        }
        else
        {
            Movie_genres->setText("N/A");
        }
        if (movie.m_rating != "")
        {
            Movie_rating->setWordWrap(true);
            Movie_rating->setText(QString::fromStdString(movie.m_rating));
        }
        else
        {
            Movie_rating->setText("N/A");
        }
    }
}

bool Movie_Page_GUI::alreadySeen()
{
    Storages storage;
    Storages::DB db = storage.getStorage();
    auto entries = db.get_all<Seen>(where(like((&Seen::m_userName), m_currentUser.GetUsername()) &&
        (like((&Seen::m_movieTitle), m_movie.m_title))));
    if (entries.size() != 0)
    {
        return true;
    }
    return false;
}

bool Movie_Page_GUI::alreadyWishlisted()
{
    Storages storage;
    Storages::DB db = storage.getStorage();
    auto entries = db.get_all<Wishlist>(where(like((&Wishlist::m_userName), m_currentUser.GetUsername()) &&
        (like((&Wishlist::m_movieTitle), m_movie.m_title))));
    if (entries.size() != 0)
    {
        return true;
    }
    return false;
}

void Movie_Page_GUI::onAddToSeenClicked() 
{
    if (alreadySeen())
    {
        QMessageBox::warning(this, "Error", "You have already seen this movie!");
        return;
    }
    else
    {
        Storages storage;
        if (alreadyWishlisted())
        {
			storage.DeleteWishlist(m_currentUser.GetUsername(), m_movie.m_title);
        }
        Seen newSeen(m_currentUser.GetUsername(), m_movie.m_title, true);
        storage.InsertSeen(newSeen);
        Like_button->setEnabled(true);
        Dislike_button->setEnabled(true);
        QMessageBox::information(this, "Success", "Movie added to seen list!");
    }
}

void Movie_Page_GUI::onAddToWishlistClicked()
{
    if (alreadySeen())
    {
        QMessageBox::warning(this, "Error", "You have already seen this movie!");
        return;
    }
    else if (alreadyWishlisted())
    {
        QMessageBox::warning(this, "Error", "You have already wishlisted this movie!!");
        return;
    }
    else
    {
        Wishlist newWishlist(m_currentUser.GetUsername(), m_movie.m_title);
        Storages storage;
        storage.InsertWishlist(newWishlist);
        QMessageBox::information(this, "Success", "Movie added to wishlist!");
    }
}

Seen Movie_Page_GUI::findSeenMovie(const Storages& storage)
{
	auto entries = storage.getStorage().get_all<Seen>(where(like((&Seen::m_userName), m_currentUser.GetUsername()) &&
		(like((&Seen::m_movieTitle), m_movie.m_title))));
    return entries[0];
}

void Movie_Page_GUI::onLikeClicked()
{
    Storages storage;
    Seen updatedSeen = findSeenMovie(storage);
    updatedSeen.m_like = true;
	storage.UpdateSeen(updatedSeen);
	QMessageBox::information(this, "Success", "Movie liked!");
}

void Movie_Page_GUI::onDislikeClicked()
{
    Storages storage;
	Seen updatedSeen = findSeenMovie(storage);
	updatedSeen.m_like = false;
    storage.UpdateSeen(updatedSeen);
    QMessageBox::information(this, "Success", "Movie disliked!");
}

Movie_Page_GUI::~Movie_Page_GUI()
{}
