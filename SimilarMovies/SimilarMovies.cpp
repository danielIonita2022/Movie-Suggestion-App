#include "SimilarMovies.h"

SimilarMovies::SimilarMovies(const Movie& movie) : m_movie(movie)
{
    setupUi();
    ShowSimilar();
}

void SimilarMovies::setupUi()
{
    if (objectName().isEmpty())
        setObjectName("Get_sim_mov_ser_page_GUIClass");
    resize(717, 504);
    centralWidget = new QWidget();
    centralWidget->setObjectName("centralwidget");
    scrollArea = new QScrollArea(centralWidget);
    scrollArea->setObjectName("scrollArea");
    scrollArea->setGeometry(QRect(0, 0, 713, 502));
    scrollArea->setWidgetResizable(true);
    scrollAreaWidgetContents = new QWidget();
    scrollAreaWidgetContents->setObjectName("scrollAreaWidgetContents");
    scrollAreaWidgetContents->setGeometry(QRect(0, 0, 711, 500));
    Movie1 = new QLabel(scrollAreaWidgetContents);
    Movie1->setObjectName("Movie1");
    Movie1->setGeometry(QRect(40, 60, 311, 51));
    QFont font;
    font.setFamilies({ QString::fromUtf8("Cambria") });
    font.setPointSize(10);
    Movie1->setFont(font);
    Movie2 = new QLabel(scrollAreaWidgetContents);
    Movie2->setObjectName("Movie2");
    Movie2->setGeometry(QRect(40, 150, 311, 51));
    Movie2->setFont(font);
    Movie3 = new QLabel(scrollAreaWidgetContents);
    Movie3->setObjectName("Movie3");
    Movie3->setGeometry(QRect(40, 240, 311, 51));
    Movie3->setFont(font);
    Movie4 = new QLabel(scrollAreaWidgetContents);
    Movie4->setObjectName("Movie4");
    Movie4->setGeometry(QRect(40, 330, 311, 51));
    Movie4->setFont(font);
    Movie5 = new QLabel(scrollAreaWidgetContents);
    Movie5->setObjectName("Movie5");
    Movie5->setGeometry(QRect(40, 420, 311, 51));
    Movie5->setFont(font);
    Movie6 = new QLabel(scrollAreaWidgetContents);
    Movie6->setObjectName("Movie6");
    Movie6->setGeometry(QRect(370, 60, 311, 51));
    Movie6->setFont(font);
    Movie7 = new QLabel(scrollAreaWidgetContents);
    Movie7->setObjectName("Movie7");
    Movie7->setGeometry(QRect(370, 150, 311, 51));
    Movie7->setFont(font);
    Movie8 = new QLabel(scrollAreaWidgetContents);
    Movie8->setObjectName("Movie8");
    Movie8->setGeometry(QRect(370, 240, 311, 51));
    Movie8->setFont(font);
    Movie9 = new QLabel(scrollAreaWidgetContents);
    Movie9->setObjectName("Movie9");
    Movie9->setGeometry(QRect(370, 330, 311, 51));
    Movie9->setFont(font);
    Movie10 = new QLabel(scrollAreaWidgetContents);
    Movie10->setObjectName("Movie10");
    Movie10->setGeometry(QRect(370, 420, 311, 51));
    Movie10->setFont(font);
    Title_text = new QLabel(scrollAreaWidgetContents);
    Title_text->setObjectName("Title_text");
    Title_text->setGeometry(QRect(30, 10, 651, 31));
    QFont font1;
    font1.setFamilies({ QString::fromUtf8("Arial") });
    font1.setPointSize(11);
    Title_text->setFont(font1);
    scrollArea->setWidget(scrollAreaWidgetContents);
	BackToMoviePage = new QPushButton(scrollAreaWidgetContents);
	BackToMoviePage->setObjectName("BackToMoviePage");
    BackToMoviePage->setGeometry(QRect(500, 10, 161, 31));
    BackToMoviePage->setFont(font1);
    setCentralWidget(centralWidget);

    retranslateUi();

    QMetaObject::connectSlotsByName(this);
}

void SimilarMovies::retranslateUi()
{
    setWindowTitle(QCoreApplication::translate("Get_sim_mov_ser_page_GUIClass", "Similar Movies", nullptr));
    Movie1->setText(QCoreApplication::translate("Get_sim_mov_ser_page_GUIClass", "", nullptr));
    Movie2->setText(QCoreApplication::translate("Get_sim_mov_ser_page_GUIClass", "", nullptr));
    Movie3->setText(QCoreApplication::translate("Get_sim_mov_ser_page_GUIClass", "", nullptr));
    Movie4->setText(QCoreApplication::translate("Get_sim_mov_ser_page_GUIClass", "", nullptr));
    Movie5->setText(QCoreApplication::translate("Get_sim_mov_ser_page_GUIClass", "", nullptr));
    Movie6->setText(QCoreApplication::translate("Get_sim_mov_ser_page_GUIClass", "", nullptr));
    Movie7->setText(QCoreApplication::translate("Get_sim_mov_ser_page_GUIClass", "", nullptr));
    Movie8->setText(QCoreApplication::translate("Get_sim_mov_ser_page_GUIClass", "", nullptr));
    Movie9->setText(QCoreApplication::translate("Get_sim_mov_ser_page_GUIClass", "", nullptr));
    Movie10->setText(QCoreApplication::translate("Get_sim_mov_ser_page_GUIClass", "", nullptr));
    Title_text->setText(QCoreApplication::translate("Get_sim_mov_ser_page_GUIClass", "Here are 10 movies/series similar with the previous one :)", nullptr));
    BackToMoviePage->setText(QCoreApplication::translate("Get_sim_mov_ser_page_GUIClass", "Back to Movie Page", nullptr));
}

void SimilarMovies::ShowSimilar()
{
    Storages::DB table = Storages::getStorage();
    std::vector<Movie> allMovies;
    allMovies = table.get_all<Movie>(sqlite_orm::where
    (sqlite_orm::like((&Movie::m_type), m_movie.m_type)));
	QString movie1 = QString::fromStdString(allMovies[0].m_title);
	Movie1->setText(movie1);
	Movie2->setText(allMovies[1].m_title.c_str());
	Movie3->setText(allMovies[2].m_title.c_str());
	Movie4->setText(allMovies[3].m_title.c_str());
	Movie5->setText(allMovies[4].m_title.c_str());
	Movie6->setText(allMovies[5].m_title.c_str());
	Movie7->setText(allMovies[6].m_title.c_str());
	Movie8->setText(allMovies[7].m_title.c_str());
	Movie9->setText(allMovies[8].m_title.c_str());
	Movie10->setText(allMovies[9].m_title.c_str());
}

