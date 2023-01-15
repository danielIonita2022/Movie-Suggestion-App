#include "Movie_Page_GUI.h"

Movie_Page_GUI::Movie_Page_GUI(const User&& user, const Movie& movie)
    : m_currentUser(user), m_movie(movie)
{
	setupUi();
    showDetails();
    if (!alreadySeen())
    {
		Like_button->setEnabled(false);
		Dislike_button->setEnabled(false);
    }
	connect(Add_to_wishlist, &QPushButton::clicked, this, &Movie_Page_GUI::onAddToWishlistClicked);
	connect(Add_to_seen, &QPushButton::clicked, this, &Movie_Page_GUI::onAddToSeenClicked);
	connect(Like_button, &QPushButton::clicked, this, &Movie_Page_GUI::onLikeClicked);
	connect(Dislike_button, &QPushButton::clicked, this, &Movie_Page_GUI::onDislikeClicked);
	connect(Get_sim_mov_ser, &QPushButton::clicked, this, &Movie_Page_GUI::onGetSimilarMoviesClicked);
}

void Movie_Page_GUI::setupUi()
{
    if (objectName().isEmpty())
        setObjectName("Movie");
    resize(942, 587);
    centralwidget = new QWidget();
    centralwidget->setObjectName("centralwidget");
    scrollArea = new QScrollArea(centralwidget);
    scrollArea->setObjectName("scrollArea");
    scrollArea->setGeometry(QRect(0, 0, 942, 588));
    scrollArea->setWidgetResizable(true);
    scrollAreaWidgetContents = new QWidget();
    scrollAreaWidgetContents->setObjectName("scrollAreaWidgetContents");
    scrollAreaWidgetContents->setGeometry(QRect(0, 0, 940, 586));
    Movie_Title = new QLabel(scrollAreaWidgetContents);
    Movie_Title->setObjectName("Movie_Title");
    Movie_Title->setGeometry(QRect(260, 10, 381, 61));
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
    Director_text = new QLabel(scrollAreaWidgetContents);
    Director_text->setObjectName("Director_text");
    Director_text->setGeometry(QRect(30, 340, 61, 41));
    Director_text->setFont(font1);
    Back_to_homepage = new QPushButton(scrollAreaWidgetContents);
    Back_to_homepage->setObjectName("Back_to_homepage");
    Back_to_homepage->setGeometry(QRect(10, 10, 131, 31));
    Back_to_homepage->setFont(font1);
    Get_sim_mov_ser = new QPushButton(scrollAreaWidgetContents);
    Get_sim_mov_ser->setObjectName("Get_sim_mov_ser");
    Get_sim_mov_ser->setGeometry(QRect(470, 540, 171, 31));
    Get_sim_mov_ser->setFont(font1);
    scrollArea->setWidget(scrollAreaWidgetContents);
    setCentralWidget(centralwidget);

    retranslateUi();

    QMetaObject::connectSlotsByName(this);
}

void Movie_Page_GUI::retranslateUi()
{
    setWindowTitle(QCoreApplication::translate("Movie", "Movie Page", nullptr));
    Movie_Title->setText(QString());
    Movie_Description->setText(QString());
    Movie_director->setText(QString());
    Movie_Cast->setText(QString());
    Cast_text->setText(QCoreApplication::translate("Movie", "Cast:", nullptr));
    Country_text->setText(QCoreApplication::translate("Movie", "Country:", nullptr));
    Movie_Country->setText(QString());
    Date_added_text->setText(QCoreApplication::translate("Movie", "Date added:", nullptr));
    Movie_date_added->setText(QString());
    Release_year_text->setText(QCoreApplication::translate("Movie", "Release year:", nullptr));
    Movie_release_year->setText(QString());
    Duration_text->setText(QCoreApplication::translate("Movie", "Duration:", nullptr));
    Type_text->setText(QCoreApplication::translate("Movie", "Type:", nullptr));
    Movie_type->setText(QString());
    Movie_duration->setText(QString());
    Genres_text->setText(QCoreApplication::translate("Movie", "Genres:", nullptr));
    Movie_genres->setText(QString());
    Rating_text->setText(QCoreApplication::translate("Movie", "Rating:", nullptr));
    Movie_rating->setText(QString());
    Add_to_wishlist->setText(QCoreApplication::translate("Movie", "Add to Wishlist", nullptr));
    Add_to_seen->setText(QCoreApplication::translate("Movie", "Mark as seen", nullptr));
    Like_button->setText(QCoreApplication::translate("Movie", "Like", nullptr));
    Dislike_button->setText(QCoreApplication::translate("Movie", "Dislike", nullptr));
    Director_text->setText(QCoreApplication::translate("Movie", "Director:", nullptr));
    Back_to_homepage->setText(QCoreApplication::translate("Movie", "Back to homepage", nullptr));
    Get_sim_mov_ser->setText(QCoreApplication::translate("Movie", "Get similar movies/series", nullptr));
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

void Movie_Page_GUI::onGetSimilarMoviesClicked()
{
	m_similarMovies = new SimilarMovies(m_movie);
    m_similarMovies->show();
    hide();
	connect(m_similarMovies->BackToMoviePage, &QPushButton::clicked, this, &Movie_Page_GUI::onBackToMoviePage);
}

void Movie_Page_GUI::onBackToMoviePage()
{
    m_similarMovies->hide();
    show();
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

void Movie_Page_GUI::showDetails()
{
    auto table = Storages::getStorage();
    Movie movie = table.get_all<Movie>(sqlite_orm::where
    (sqlite_orm::like((&Movie::m_title), m_movie.m_title)))[0];
    
    m_movie = movie;
    
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

Movie_Page_GUI::~Movie_Page_GUI()
{}
