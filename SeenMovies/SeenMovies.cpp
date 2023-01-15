#include "SeenMovies.h"

SeenMovies::SeenMovies(const User&& user) : m_currentUser(user)
{
    setupUi();
    addSeenMovies();
}

void SeenMovies::setupUi()
{
    if (objectName().isEmpty())
        setObjectName("Seen_mov_ser_page_GUIClass");
    resize(1144, 531);
    centralWidget = new QWidget();
    centralWidget->setObjectName("centralwidget");
    gridLayout = new QGridLayout(centralWidget);
    gridLayout->setSpacing(6);
    gridLayout->setContentsMargins(11, 11, 11, 11);
    gridLayout->setObjectName("gridLayout");
    scrollArea = new QScrollArea();
    scrollArea->setObjectName("scrollArea");
    scrollArea->setWidgetResizable(true);
    scrollAreaWidgetContents = new QWidget();
    scrollAreaWidgetContents->setObjectName("scrollAreaWidgetContents");
    scrollAreaWidgetContents->setGeometry(QRect(0, 0, 1124, 511));
    Title_text = new QLabel(scrollAreaWidgetContents);
    Title_text->setObjectName("Title_text");
    Title_text->setGeometry(QRect(310, 10, 471, 16));
    QFont font;
    font.setFamilies({ QString::fromUtf8("Arial") });
    font.setPointSize(12);
    Title_text->setFont(font);
    Movie15 = new QLabel(scrollAreaWidgetContents);
    Movie15->setObjectName("Movie15");
    Movie15->setGeometry(QRect(740, 430, 311, 51));
    QFont font1;
    font1.setFamilies({ QString::fromUtf8("Cambria") });
    font1.setPointSize(10);
    Movie15->setFont(font1);
    Movie13 = new QLabel(scrollAreaWidgetContents);
    Movie13->setObjectName("Movie13");
    Movie13->setGeometry(QRect(740, 250, 311, 51));
    Movie13->setFont(font1);
    Movie9 = new QLabel(scrollAreaWidgetContents);
    Movie9->setObjectName("Movie9");
    Movie9->setGeometry(QRect(370, 340, 311, 51));
    Movie9->setFont(font1);
    Movie11 = new QLabel(scrollAreaWidgetContents);
    Movie11->setObjectName("Movie11");
    Movie11->setGeometry(QRect(740, 70, 311, 51));
    Movie11->setFont(font1);
    Movie5 = new QLabel(scrollAreaWidgetContents);
    Movie5->setObjectName("Movie5");
    Movie5->setGeometry(QRect(0, 430, 311, 51));
    Movie5->setFont(font1);
    Movie1 = new QLabel(scrollAreaWidgetContents);
    Movie1->setObjectName("Movie1");
    Movie1->setGeometry(QRect(0, 70, 311, 51));
    Movie1->setFont(font1);
    Movie12 = new QLabel(scrollAreaWidgetContents);
    Movie12->setObjectName("Movie12");
    Movie12->setGeometry(QRect(740, 160, 311, 51));
    Movie12->setFont(font1);
    Movie8 = new QLabel(scrollAreaWidgetContents);
    Movie8->setObjectName("Movie8");
    Movie8->setGeometry(QRect(370, 250, 311, 51));
    Movie8->setFont(font1);
    Movie7 = new QLabel(scrollAreaWidgetContents);
    Movie7->setObjectName("Movie7");
    Movie7->setGeometry(QRect(370, 160, 311, 51));
    Movie7->setFont(font1);
    Movie6 = new QLabel(scrollAreaWidgetContents);
    Movie6->setObjectName("Movie6");
    Movie6->setGeometry(QRect(370, 70, 311, 51));
    Movie6->setFont(font1);
    Movie4 = new QLabel(scrollAreaWidgetContents);
    Movie4->setObjectName("Movie4");
    Movie4->setGeometry(QRect(0, 340, 311, 51));
    Movie4->setFont(font1);
    Movie10 = new QLabel(scrollAreaWidgetContents);
    Movie10->setObjectName("Movie10");
    Movie10->setGeometry(QRect(370, 430, 311, 51));
    Movie10->setFont(font1);
    Movie3 = new QLabel(scrollAreaWidgetContents);
    Movie3->setObjectName("Movie3");
    Movie3->setGeometry(QRect(0, 250, 311, 51));
    Movie3->setFont(font1);
    Movie14 = new QLabel(scrollAreaWidgetContents);
    Movie14->setObjectName("Movie14");
    Movie14->setGeometry(QRect(740, 340, 311, 51));
    Movie14->setFont(font1);
    Movie2 = new QLabel(scrollAreaWidgetContents);
    Movie2->setObjectName("Movie2");
    Movie2->setGeometry(QRect(0, 160, 311, 51));
    Movie2->setFont(font1);
    Movie4_like = new QLabel(scrollAreaWidgetContents);
    Movie4_like->setObjectName("Movie4_like");
    Movie4_like->setGeometry(QRect(310, 340, 51, 51));
    Movie4_like->setFont(font1);
    Movie4_like->setLayoutDirection(Qt::LeftToRight);
    Movie4_like->setAlignment(Qt::AlignRight | Qt::AlignTrailing | Qt::AlignVCenter);
    Movie1_like = new QLabel(scrollAreaWidgetContents);
    Movie1_like->setObjectName("Movie1_like");
    Movie1_like->setGeometry(QRect(310, 70, 51, 51));
    Movie1_like->setFont(font1);
    Movie1_like->setLayoutDirection(Qt::LeftToRight);
    Movie1_like->setAlignment(Qt::AlignRight | Qt::AlignTrailing | Qt::AlignVCenter);
    Movie5_like = new QLabel(scrollAreaWidgetContents);
    Movie5_like->setObjectName("Movie5_like");
    Movie5_like->setGeometry(QRect(310, 430, 51, 51));
    Movie5_like->setFont(font1);
    Movie5_like->setLayoutDirection(Qt::LeftToRight);
    Movie5_like->setAlignment(Qt::AlignRight | Qt::AlignTrailing | Qt::AlignVCenter);
    Movie2_like = new QLabel(scrollAreaWidgetContents);
    Movie2_like->setObjectName("Movie2_like");
    Movie2_like->setGeometry(QRect(310, 160, 51, 51));
    Movie2_like->setFont(font1);
    Movie2_like->setLayoutDirection(Qt::LeftToRight);
    Movie2_like->setAlignment(Qt::AlignRight | Qt::AlignTrailing | Qt::AlignVCenter);
    Movie3_like = new QLabel(scrollAreaWidgetContents);
    Movie3_like->setObjectName("Movie3_like");
    Movie3_like->setGeometry(QRect(310, 250, 51, 51));
    Movie3_like->setFont(font1);
    Movie3_like->setLayoutDirection(Qt::LeftToRight);
    Movie3_like->setAlignment(Qt::AlignRight | Qt::AlignTrailing | Qt::AlignVCenter);
    Movie9_like = new QLabel(scrollAreaWidgetContents);
    Movie9_like->setObjectName("Movie9_like");
    Movie9_like->setGeometry(QRect(680, 340, 51, 51));
    Movie9_like->setFont(font1);
    Movie9_like->setLayoutDirection(Qt::LeftToRight);
    Movie9_like->setAlignment(Qt::AlignRight | Qt::AlignTrailing | Qt::AlignVCenter);
    Movie6_like = new QLabel(scrollAreaWidgetContents);
    Movie6_like->setObjectName("Movie6_like");
    Movie6_like->setGeometry(QRect(680, 70, 51, 51));
    Movie6_like->setFont(font1);
    Movie6_like->setLayoutDirection(Qt::LeftToRight);
    Movie6_like->setAlignment(Qt::AlignRight | Qt::AlignTrailing | Qt::AlignVCenter);
    Movie7_like = new QLabel(scrollAreaWidgetContents);
    Movie7_like->setObjectName("Movie7_like");
    Movie7_like->setGeometry(QRect(680, 160, 51, 51));
    Movie7_like->setFont(font1);
    Movie7_like->setLayoutDirection(Qt::LeftToRight);
    Movie7_like->setAlignment(Qt::AlignRight | Qt::AlignTrailing | Qt::AlignVCenter);
    Movie10_like = new QLabel(scrollAreaWidgetContents);
    Movie10_like->setObjectName("Movie10_like");
    Movie10_like->setGeometry(QRect(680, 430, 51, 51));
    Movie10_like->setFont(font1);
    Movie10_like->setLayoutDirection(Qt::LeftToRight);
    Movie10_like->setAlignment(Qt::AlignRight | Qt::AlignTrailing | Qt::AlignVCenter);
    Movie8_like = new QLabel(scrollAreaWidgetContents);
    Movie8_like->setObjectName("Movie8_like");
    Movie8_like->setGeometry(QRect(680, 250, 51, 51));
    Movie8_like->setFont(font1);
    Movie8_like->setLayoutDirection(Qt::LeftToRight);
    Movie8_like->setAlignment(Qt::AlignRight | Qt::AlignTrailing | Qt::AlignVCenter);
    Movie15_like = new QLabel(scrollAreaWidgetContents);
    Movie15_like->setObjectName("Movie15_like");
    Movie15_like->setGeometry(QRect(1050, 430, 51, 51));
    Movie15_like->setFont(font1);
    Movie15_like->setLayoutDirection(Qt::LeftToRight);
    Movie15_like->setAlignment(Qt::AlignRight | Qt::AlignTrailing | Qt::AlignVCenter);
    Movie11_like = new QLabel(scrollAreaWidgetContents);
    Movie11_like->setObjectName("Movie11_like");
    Movie11_like->setGeometry(QRect(1050, 70, 51, 51));
    Movie11_like->setFont(font1);
    Movie11_like->setLayoutDirection(Qt::LeftToRight);
    Movie11_like->setAlignment(Qt::AlignRight | Qt::AlignTrailing | Qt::AlignVCenter);
    Movie12_like = new QLabel(scrollAreaWidgetContents);
    Movie12_like->setObjectName("Movie12_like");
    Movie12_like->setGeometry(QRect(1050, 160, 51, 51));
    Movie12_like->setFont(font1);
    Movie12_like->setLayoutDirection(Qt::LeftToRight);
    Movie12_like->setAlignment(Qt::AlignRight | Qt::AlignTrailing | Qt::AlignVCenter);
    Movie14_like = new QLabel(scrollAreaWidgetContents);
    Movie14_like->setObjectName("Movie14_like");
    Movie14_like->setGeometry(QRect(1050, 340, 51, 51));
    Movie14_like->setFont(font1);
    Movie14_like->setLayoutDirection(Qt::LeftToRight);
    Movie14_like->setAlignment(Qt::AlignRight | Qt::AlignTrailing | Qt::AlignVCenter);
    Movie13_like = new QLabel(scrollAreaWidgetContents);
    Movie13_like->setObjectName("Movie13_like");
    Movie13_like->setGeometry(QRect(1050, 250, 51, 51));
    Movie13_like->setFont(font1);
    Movie13_like->setLayoutDirection(Qt::LeftToRight);
    Movie13_like->setAlignment(Qt::AlignRight | Qt::AlignTrailing | Qt::AlignVCenter);
    BackToUserPage = new QPushButton(scrollAreaWidgetContents);
    BackToUserPage->setObjectName("BackToUserPage");
    BackToUserPage->setGeometry(QRect(900, 10, 161, 31));
    font1.setPointSize(11);
    BackToUserPage->setFont(font1);
    scrollArea->setWidget(scrollAreaWidgetContents);

    gridLayout->addWidget(scrollArea, 0, 0, 1, 1);
    setCentralWidget(centralWidget);

    retranslateUi();

    QMetaObject::connectSlotsByName(this);
}

void SeenMovies::retranslateUi()
{
    setWindowTitle(QCoreApplication::translate("Seen_mov_ser_page_GUIClass", "Your Seen Movies", nullptr));
    Title_text->setText(QCoreApplication::translate("Seen_mov_ser_page_GUIClass", "These are your (last 15) seen movies and series", nullptr));
    Movie15->setText(QString());
    Movie13->setText(QString());
    Movie9->setText(QString());
    Movie11->setText(QString());
    Movie5->setText(QString());
    Movie1->setText(QString());
    Movie12->setText(QString());
    Movie8->setText(QString());
    Movie7->setText(QString());
    Movie6->setText(QString());
    Movie4->setText(QString());
    Movie10->setText(QString());
    Movie3->setText(QString());
    Movie14->setText(QString());
    Movie2->setText(QString());
    Movie4_like->setText(QString());
    Movie1_like->setText(QString());
    Movie5_like->setText(QString());
    Movie2_like->setText(QString());
    Movie3_like->setText(QString());
    Movie9_like->setText(QString());
    Movie6_like->setText(QString());
    Movie7_like->setText(QString());
    Movie10_like->setText(QString());
    Movie8_like->setText(QString());
    Movie15_like->setText(QString());
    Movie11_like->setText(QString());
    Movie12_like->setText(QString());
    Movie14_like->setText(QString());
    Movie13_like->setText(QString());
	BackToUserPage->setText(QCoreApplication::translate("Seen_mov_ser_page_GUIClass", "Back to User Page", nullptr));
}

bool SeenMovies::likedOrDisliked(const Seen& movie)
{
    if (movie.m_like)
        return true;
    return false;
}

void SeenMovies::addSeenMovies()
{
    Storages::DB storage = Storages::getStorage();
    std::vector<Seen> movies = storage.get_all<Seen>(where(like(&Seen::m_userName,
        m_currentUser.GetUsername())));
    std::reverse(movies.begin(), movies.end());
    QString title, likeOrDislike;
    uint16_t size = movies.size();
    if (size > 15)
        size = 15;
    switch (size)
    {
    case 15:
    {   
        title = QString(movies[14].m_movieTitle.c_str());
        Movie15->setText(title);
        if (likedOrDisliked(movies[14]))
            Movie15_like->setText("Liked");
        else Movie15_like->setText("Disliked");
        [[fallthrough]];
    }
    case 14:
    {
        title = QString(movies[13].m_movieTitle.c_str());
        Movie14->setText(title);
        if (likedOrDisliked(movies[13]))
            Movie14_like->setText("Liked");
        else Movie14_like->setText("Disliked");
        [[fallthrough]];
    }
    case 13:
    {
        title = QString(movies[12].m_movieTitle.c_str());
        Movie13->setText(title);
        if (likedOrDisliked(movies[12]))
            Movie13_like->setText("Liked");
        else Movie13_like->setText("Disliked");
        [[fallthrough]];
    }
    case 12:
    {
        title = QString(movies[11].m_movieTitle.c_str());
        Movie12->setText(title);
        if (likedOrDisliked(movies[11]))
            Movie12_like->setText("Liked");
        else Movie12_like->setText("Disliked");
        [[fallthrough]];
    }
    case 11:
    {
        title = QString(movies[10].m_movieTitle.c_str());
        Movie11->setText(title);
        if (likedOrDisliked(movies[10]))
            Movie11_like->setText("Liked");
        else Movie11_like->setText("Disliked");
        [[fallthrough]];
    }
    case 10:
    {
        title = QString(movies[9].m_movieTitle.c_str());
        Movie10->setText(title);
        if (likedOrDisliked(movies[9]))
            Movie10_like->setText("Liked");
        else Movie10_like->setText("Disliked");
        [[fallthrough]];
    }
    case 9:
    {
        title = QString(movies[8].m_movieTitle.c_str());
        Movie9->setText(title);
        if (likedOrDisliked(movies[8]))
            Movie9_like->setText("Liked");
        else Movie9_like->setText("Disliked");
        [[fallthrough]];
    }
    case 8:
    {
        title = QString(movies[7].m_movieTitle.c_str());
        Movie8->setText(title);
        if (likedOrDisliked(movies[7]))
            Movie8_like->setText("Liked");
        else Movie8_like->setText("Disliked");
        [[fallthrough]];
    }
    case 7:
    {
        title = QString(movies[6].m_movieTitle.c_str());
        Movie7->setText(title);
        if (likedOrDisliked(movies[6]))
            Movie7_like->setText("Liked");
        else Movie7_like->setText("Disliked");
        [[fallthrough]];
    }
    case 6:
    {
        title = QString(movies[5].m_movieTitle.c_str());
        Movie6->setText(title);
        if (likedOrDisliked(movies[5]))
            Movie6_like->setText("Liked");
        else Movie6_like->setText("Disliked");
        [[fallthrough]];
    }
    case 5:
    {
        title = QString(movies[4].m_movieTitle.c_str());
        Movie5->setText(title);
        if (likedOrDisliked(movies[4]))
            Movie5_like->setText("Liked");
        else Movie5_like->setText("Disliked");
        [[fallthrough]];
    }
    case 4:
    {
        title = QString(movies[3].m_movieTitle.c_str());
        Movie4->setText(title);
        if (likedOrDisliked(movies[3]))
            Movie4_like->setText("Liked");
        else Movie4_like->setText("Disliked");
        [[fallthrough]];
    }
    case 3:
    {
        title = QString(movies[2].m_movieTitle.c_str());
        Movie3->setText(title);
        if (likedOrDisliked(movies[2]))
            Movie3_like->setText("Liked");
        else Movie3_like->setText("Disliked");
        [[fallthrough]];
    }
    case 2:
    {
        title = QString(movies[1].m_movieTitle.c_str());
        Movie2->setText(title);
        if (likedOrDisliked(movies[1]))
            Movie2_like->setText("Liked");
        else Movie2_like->setText("Disliked");
        [[fallthrough]];
    }
    case 1:
    {
        title = QString(movies[0].m_movieTitle.c_str());
        Movie1->setText(title);
        if (likedOrDisliked(movies[0]))
            Movie1_like->setText("Liked");
        else Movie1_like->setText("Disliked");
    }
    }
}
