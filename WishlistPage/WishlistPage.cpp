#include "WishlistPage.h"

WishlistPage::WishlistPage(const User&& user) : m_currentUser(user)
{
	setupUi();
    addWishlistMovies();
}

void WishlistPage::setupUi()
{
    if (objectName().isEmpty())
        setObjectName("Wishlist_page_GUIClass");
    resize(981, 510);
    centralWidget = new QWidget();
    centralWidget->setObjectName("centralwidget");
    scrollArea = new QScrollArea(centralWidget);
    scrollArea->setObjectName("scrollArea");
    scrollArea->setGeometry(QRect(10, -10, 971, 521));
    scrollArea->setWidgetResizable(true);
    scrollAreaWidgetContents = new QWidget();
    scrollAreaWidgetContents->setObjectName("scrollAreaWidgetContents");
    scrollAreaWidgetContents->setGeometry(QRect(0, 0, 969, 519));
    Movie1 = new QLabel(scrollAreaWidgetContents);
    Movie1->setObjectName("Movie1");
    Movie1->setGeometry(QRect(0, 100, 311, 51));
    QFont font;
    font.setFamilies({ QString::fromUtf8("Cambria") });
    font.setPointSize(10);
    Movie1->setFont(font);
    Movie2 = new QLabel(scrollAreaWidgetContents);
    Movie2->setObjectName("Movie2");
    Movie2->setGeometry(QRect(0, 190, 311, 51));
    Movie2->setFont(font);
    Movie3 = new QLabel(scrollAreaWidgetContents);
    Movie3->setObjectName("Movie3");
    Movie3->setGeometry(QRect(0, 280, 311, 51));
    Movie3->setFont(font);
    Movie4 = new QLabel(scrollAreaWidgetContents);
    Movie4->setObjectName("Movie4");
    Movie4->setGeometry(QRect(0, 370, 311, 51));
    Movie4->setFont(font);
    Movie5 = new QLabel(scrollAreaWidgetContents);
    Movie5->setObjectName("Movie5");
    Movie5->setGeometry(QRect(0, 460, 311, 51));
    Movie5->setFont(font);
    Movie6 = new QLabel(scrollAreaWidgetContents);
    Movie6->setObjectName("Movie6");
    Movie6->setGeometry(QRect(320, 100, 311, 51));
    Movie6->setFont(font);
    Movie7 = new QLabel(scrollAreaWidgetContents);
    Movie7->setObjectName("Movie7");
    Movie7->setGeometry(QRect(320, 190, 311, 51));
    Movie7->setFont(font);
    Movie8 = new QLabel(scrollAreaWidgetContents);
    Movie8->setObjectName("Movie8");
    Movie8->setGeometry(QRect(320, 280, 311, 51));
    Movie8->setFont(font);
    Movie9 = new QLabel(scrollAreaWidgetContents);
    Movie9->setObjectName("Movie9");
    Movie9->setGeometry(QRect(320, 370, 311, 51));
    Movie9->setFont(font);
    Movie10 = new QLabel(scrollAreaWidgetContents);
    Movie10->setObjectName("Movie10");
    Movie10->setGeometry(QRect(320, 460, 311, 51));
    Movie10->setFont(font);
    Movie14 = new QLabel(scrollAreaWidgetContents);
    Movie14->setObjectName("Movie14");
    Movie14->setGeometry(QRect(640, 370, 311, 51));
    Movie14->setFont(font);
    Movie13 = new QLabel(scrollAreaWidgetContents);
    Movie13->setObjectName("Movie13");
    Movie13->setGeometry(QRect(640, 280, 311, 51));
    Movie13->setFont(font);
    Movie12 = new QLabel(scrollAreaWidgetContents);
    Movie12->setObjectName("Movie12");
    Movie12->setGeometry(QRect(640, 190, 311, 51));
    Movie12->setFont(font);
    Movie11 = new QLabel(scrollAreaWidgetContents);
    Movie11->setObjectName("Movie11");
    Movie11->setGeometry(QRect(640, 100, 311, 51));
    Movie11->setFont(font);
    Movie15 = new QLabel(scrollAreaWidgetContents);
    Movie15->setObjectName("Movie15");
    Movie15->setGeometry(QRect(640, 460, 311, 51));
    Movie15->setFont(font);
    Title_text = new QLabel(scrollAreaWidgetContents);
    Title_text->setObjectName("Title_text");
    Title_text->setGeometry(QRect(330, 30, 291, 16));
    QFont font1;
    font1.setFamilies({ QString::fromUtf8("Arial") });
    font1.setPointSize(12);
    Title_text->setFont(font1);
    BackToUserPage = new QPushButton(scrollAreaWidgetContents);
    BackToUserPage->setObjectName("BackToUserPage");
    BackToUserPage->setGeometry(QRect(800, 20, 161, 31));
    font1.setPointSize(11);
    BackToUserPage->setFont(font1);
    scrollArea->setWidget(scrollAreaWidgetContents);
    setCentralWidget(centralWidget);

    retranslateUi();

    QMetaObject::connectSlotsByName(this);
}

void WishlistPage::retranslateUi()
{
    setWindowTitle(QCoreApplication::translate("Wishlist_page_GUIClass", "Your Wishlist Page", nullptr));
    Movie1->setText(QString());
    Movie2->setText(QString());
    Movie3->setText(QString());
    Movie4->setText(QString());
    Movie5->setText(QString());
    Movie6->setText(QString());
    Movie7->setText(QString());
    Movie8->setText(QString());
    Movie9->setText(QString());
    Movie10->setText(QString());
    Movie14->setText(QString());
    Movie13->setText(QString());
    Movie12->setText(QString());
    Movie11->setText(QString());
    Movie15->setText(QString());
    Title_text->setText(QCoreApplication::translate("Wishlist_page_GUIClass", "This is your Wishlist", nullptr));
	BackToUserPage->setText(QCoreApplication::translate("Wishlist_page_GUIClass", "Back to User Page", nullptr));
}

void WishlistPage::addWishlistMovies()
{
    Storages::DB storage = Storages::getStorage();
    std::vector<Wishlist> movies = storage.get_all<Wishlist>(where(like
    (&Wishlist::m_userName, m_currentUser.GetUsername())));
    std::reverse(movies.begin(), movies.end());
    QString title;
    uint16_t size = movies.size();
    if (size > 15)
        size = 15;
    switch (size)
    {
    case 15:
    {
        title = QString(movies[14].m_movieTitle.c_str());
        Movie15->setText(title);
        [[fallthrough]];
    }
    case 14:
    {
        title = QString(movies[13].m_movieTitle.c_str());
        Movie14->setText(title);
        [[fallthrough]];
    }
    case 13:
    {
        title = QString(movies[12].m_movieTitle.c_str());
        Movie13->setText(title);
        [[fallthrough]];
    }
    case 12:
    {
        title = QString(movies[11].m_movieTitle.c_str());
        Movie12->setText(title);
        [[fallthrough]];
    }
    case 11:
    {
        title = QString(movies[10].m_movieTitle.c_str());
        Movie11->setText(title);
        [[fallthrough]];
    }
    case 10:
    {
        title = QString(movies[9].m_movieTitle.c_str());
        Movie10->setText(title);
        [[fallthrough]];
    }
    case 9:
    {
        title = QString(movies[8].m_movieTitle.c_str());
        Movie9->setText(title);
        [[fallthrough]];
    }
    case 8:
    {
        title = QString(movies[7].m_movieTitle.c_str());
        Movie8->setText(title);
        [[fallthrough]];
    }
    case 7:
    {
        title = QString(movies[6].m_movieTitle.c_str());
        Movie7->setText(title);
        [[fallthrough]];
    }
    case 6:
    {
        title = QString(movies[5].m_movieTitle.c_str());
        Movie6->setText(title);
        [[fallthrough]];
    }
    case 5:
    {
        title = QString(movies[4].m_movieTitle.c_str());
        Movie5->setText(title);
        [[fallthrough]];
    }
    case 4:
    {
        title = QString(movies[3].m_movieTitle.c_str());
        Movie4->setText(title);
        [[fallthrough]];
    }
    case 3:
    {
        title = QString(movies[2].m_movieTitle.c_str());
        Movie3->setText(title);
        [[fallthrough]];
    }
    case 2:
    {
        title = QString(movies[1].m_movieTitle.c_str());
        Movie2->setText(title);
        [[fallthrough]];
    }
    case 1:
    {
        title = QString(movies[0].m_movieTitle.c_str());
        Movie1->setText(title);
    }
    }
}

