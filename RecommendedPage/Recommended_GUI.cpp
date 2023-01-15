#include "Recommended_GUI.h"

Recommended_GUI::Recommended_GUI(const User&& user)
{
	setupUi();
	addRecommendations();
}

void Recommended_GUI::setupUi()
{
    if (objectName().isEmpty())
        setObjectName("Recommendations_Page_GUIClass");
    resize(832, 481);
    actionHome = new QAction();
    actionHome->setObjectName("actionHome");
    actionMy_profile = new QAction();
    actionMy_profile->setObjectName("actionMy_profile");
    actionView_recommendations = new QAction();
    actionView_recommendations->setObjectName("actionView_recommendations");
    actionSign_out = new QAction();
    actionSign_out->setObjectName("actionSign_out");
    centralWidget = new QWidget();
    centralWidget->setObjectName("centralWidget");
    gridLayout = new QGridLayout(centralWidget);
    gridLayout->setSpacing(6);
    gridLayout->setContentsMargins(11, 11, 11, 11);
    gridLayout->setObjectName("gridLayout");
    scrollArea = new QScrollArea(centralWidget);
    scrollArea->setObjectName("scrollArea");
    scrollArea->setWidgetResizable(true);
    scrollAreaWidgetContents = new QWidget();
    scrollAreaWidgetContents->setObjectName("scrollAreaWidgetContents");
    scrollAreaWidgetContents->setGeometry(QRect(0, 0, 812, 461));
    Movie1 = new QLabel(scrollAreaWidgetContents);
    Movie1->setObjectName("Movie1");
    Movie1->setGeometry(QRect(20, 40, 311, 51));
    QFont font;
    font.setFamilies({ QString::fromUtf8("Cambria") });
    font.setPointSize(10);
    Movie1->setFont(font);
    Movie2 = new QLabel(scrollAreaWidgetContents);
    Movie2->setObjectName("Movie2");
    Movie2->setGeometry(QRect(20, 130, 311, 51));
    Movie2->setFont(font);
    Movie3 = new QLabel(scrollAreaWidgetContents);
    Movie3->setObjectName("Movie3");
    Movie3->setGeometry(QRect(20, 220, 311, 51));
    Movie3->setFont(font);
    Movie4 = new QLabel(scrollAreaWidgetContents);
    Movie4->setObjectName("Movie4");
    Movie4->setGeometry(QRect(20, 310, 311, 51));
    Movie4->setFont(font);
    Movie5 = new QLabel(scrollAreaWidgetContents);
    Movie5->setObjectName("Movie5");
    Movie5->setGeometry(QRect(20, 400, 311, 51));
    Movie5->setFont(font);
    Movie6 = new QLabel(scrollAreaWidgetContents);
    Movie6->setObjectName("Movie6");
    Movie6->setGeometry(QRect(490, 40, 311, 51));
    Movie6->setFont(font);
    Movie7 = new QLabel(scrollAreaWidgetContents);
    Movie7->setObjectName("Movie7");
    Movie7->setGeometry(QRect(490, 130, 311, 51));
    Movie7->setFont(font);
    Movie8 = new QLabel(scrollAreaWidgetContents);
    Movie8->setObjectName("Movie8");
    Movie8->setGeometry(QRect(490, 220, 311, 51));
    Movie8->setFont(font);
    Movie9 = new QLabel(scrollAreaWidgetContents);
    Movie9->setObjectName("Movie9");
    Movie9->setGeometry(QRect(490, 310, 311, 51));
    Movie9->setFont(font);
    Movie10 = new QLabel(scrollAreaWidgetContents);
    Movie10->setObjectName("Movie10");
    Movie10->setGeometry(QRect(490, 400, 311, 51));
    Movie10->setFont(font);
    Title_text = new QLabel(scrollAreaWidgetContents);
    Title_text->setObjectName("Title_text");
    Title_text->setGeometry(QRect(160, 0, 581, 31));
    QFont font1;
    font1.setFamilies({ QString::fromUtf8("Arial") });
    font1.setPointSize(12);
    Title_text->setFont(font1);
    Back_to_homepage = new QPushButton(scrollAreaWidgetContents);
    Back_to_homepage->setObjectName("Back_to_homepage");
    Back_to_homepage->setGeometry(QRect(0, 0, 131, 31));
    QFont font2;
    font2.setFamilies({ QString::fromUtf8("Cambria") });
    font2.setPointSize(11);
    Back_to_homepage->setFont(font2);
    scrollArea->setWidget(scrollAreaWidgetContents);

    gridLayout->addWidget(scrollArea, 0, 1, 1, 1);

    setCentralWidget(centralWidget);

    retranslateUi();

    QMetaObject::connectSlotsByName(this);
}

void Recommended_GUI::retranslateUi()
{
    setWindowTitle(QCoreApplication::translate("Recommendations_Page_GUIClass", "Recommendations Page", nullptr));
    actionHome->setText(QCoreApplication::translate("Recommendations_Page_GUIClass", "Home", nullptr));
    actionMy_profile->setText(QCoreApplication::translate("Recommendations_Page_GUIClass", "My Profile", nullptr));
    actionView_recommendations->setText(QCoreApplication::translate("Recommendations_Page_GUIClass", "View Recommendations", nullptr));
    actionSign_out->setText(QCoreApplication::translate("Recommendations_Page_GUIClass", "Sign Out", nullptr));
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
    Title_text->setText(QCoreApplication::translate("Recommendations_Page_GUIClass", "Here are 10 movies/series recommended for you :)", nullptr));
    Back_to_homepage->setText(QCoreApplication::translate("Recommendations_Page_GUIClass", "Back to homepage", nullptr));
}

void Recommended_GUI::addRecommendations()
{
    Recommended rec(m_currentUser);

    std::random_device rd;
    std::mt19937 eng(std::time(nullptr));

    Storages::DB table = Storages::getStorage();

    std::vector<Movie> recommendationsW = rec.recommendMovies(Wishlist());
    std::vector<Movie> recommendationsS = rec.recommendMovies(Seen());

    int number = 5;
    std::array<std::string, 5> titlesW = { "" };
    std::string recommendString;

    while (number != 0)
    {
        std::uniform_int_distribution <int> distr(0, recommendationsW.size() - 1);
        recommendString = recommendationsW[distr(eng)].m_title;
        if (rec.validation(recommendString, titlesW) == 1)
            titlesW[5 - number] = recommendString;
        number--;
    }
    printWishlistRecs(titlesW);

    number = 5;
    std::array<std::string, 5> titlesS = { "" };
    recommendString = "";
    while (number != 0)
    {
        std::uniform_int_distribution <int> distr(0, recommendationsS.size() - 1);
        recommendString = recommendationsS[distr(eng)].m_title;
        if (rec.validation(recommendString, titlesS) == 1)
            titlesS[5 - number] = recommendString;
        number--;
    }
    printSeenRecs(titlesS);
}

void Recommended_GUI::setTitle(QLabel* Movie, const std::string& title)
{
    QString qTitle = QString(title.c_str());
    Movie->setText(qTitle);
}

void Recommended_GUI::printWishlistRecs(const std::array<std::string, 5>& titles)
{
    setTitle(Movie1, titles[0]);
    setTitle(Movie2, titles[1]);
    setTitle(Movie3, titles[2]);
    setTitle(Movie4, titles[3]);
    setTitle(Movie5, titles[4]);
}

void Recommended_GUI::printSeenRecs(const std::array<std::string, 5>& titles)
{
    setTitle(Movie6, titles[0]);
    setTitle(Movie7, titles[1]);
    setTitle(Movie8, titles[2]);
    setTitle(Movie9, titles[3]);
    setTitle(Movie10, titles[4]);
}
