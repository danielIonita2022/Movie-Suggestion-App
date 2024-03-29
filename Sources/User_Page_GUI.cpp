#include "User_Page_GUI.h"

User_Page_GUI::User_Page_GUI(const User&& user, QWidget* parent) : m_currentUser(user)
{
    setupUi();
    showDetails();
	connect(saveButton, &QPushButton::clicked, this, &User_Page_GUI::onSaveButtonClicked);
	connect(seenMovieButton, &QPushButton::clicked, this, &User_Page_GUI::onSeenButtonClicked);
	connect(wishMovieButton, &QPushButton::clicked, this, &User_Page_GUI::onWishButtonClicked);
}

void User_Page_GUI::setupUi()
{
    if (objectName().isEmpty())
        setObjectName("MainWindow");
    resize(833, 586);
    centralwidget = new QWidget();
    centralwidget->setObjectName("centralwidget");
    gridLayout = new QGridLayout(centralwidget);
    gridLayout->setObjectName("gridLayout");
    scrollArea = new QScrollArea(centralwidget);
    scrollArea->setObjectName("scrollArea");
    scrollArea->setWidgetResizable(true);
    scrollAreaWidgetContents = new QWidget();
    scrollAreaWidgetContents->setObjectName("scrollAreaWidgetContents");
    scrollAreaWidgetContents->setGeometry(QRect(0, 0, 813, 540));
    gridLayout_2 = new QGridLayout(scrollAreaWidgetContents);
    gridLayout_2->setObjectName("gridLayout_2");
    checkBox_6 = new QCheckBox(scrollAreaWidgetContents);
    checkBox_6->setObjectName("checkBox_6");
    QFont font;
    font.setFamilies({ QString::fromUtf8("Cambria") });
    font.setPointSize(11);
    checkBox_6->setFont(font);

    gridLayout_2->addWidget(checkBox_6, 3, 1, 1, 1);

    saveButton = new QPushButton(scrollAreaWidgetContents);
    saveButton->setObjectName("saveButton");
    QSizePolicy sizePolicy(QSizePolicy::Minimum, QSizePolicy::Fixed);
    sizePolicy.setHorizontalStretch(0);
    sizePolicy.setVerticalStretch(0);
    sizePolicy.setHeightForWidth(saveButton->sizePolicy().hasHeightForWidth());
    saveButton->setSizePolicy(sizePolicy);
    saveButton->setMinimumSize(QSize(0, 0));
    saveButton->setSizeIncrement(QSize(0, 0));
    QFont font1;
    font1.setFamilies({ QString::fromUtf8("Cambria") });
    font1.setPointSize(11);
    font1.setKerning(true);
    font1.setStyleStrategy(QFont::PreferDefault);
    saveButton->setFont(font1);
    saveButton->setCursor(QCursor(Qt::PointingHandCursor));
    saveButton->setLayoutDirection(Qt::LeftToRight);
    saveButton->setAutoFillBackground(false);
    saveButton->setAutoRepeatDelay(300);
    saveButton->setAutoDefault(true);
    saveButton->setFlat(false);

    gridLayout_2->addWidget(saveButton, 6, 2, 1, 1, Qt::AlignHCenter | Qt::AlignVCenter);

    label_6 = new QLabel(scrollAreaWidgetContents);
    label_6->setObjectName("label_6");
    QSizePolicy sizePolicy1(QSizePolicy::Fixed, QSizePolicy::Fixed);
    sizePolicy1.setHorizontalStretch(0);
    sizePolicy1.setVerticalStretch(0);
    sizePolicy1.setHeightForWidth(label_6->sizePolicy().hasHeightForWidth());
    label_6->setSizePolicy(sizePolicy1);
    label_6->setFont(font);
    label_6->setMargin(2);

    gridLayout_2->addWidget(label_6, 1, 0, 1, 1);

    checkBox_5 = new QCheckBox(scrollAreaWidgetContents);
    checkBox_5->setObjectName("checkBox_5");
    checkBox_5->setFont(font);

    gridLayout_2->addWidget(checkBox_5, 2, 3, 1, 1);

    checkBox_7 = new QCheckBox(scrollAreaWidgetContents);
    checkBox_7->setObjectName("checkBox_7");
    checkBox_7->setFont(font);

    gridLayout_2->addWidget(checkBox_7, 3, 2, 1, 1);

    checkBox = new QCheckBox(scrollAreaWidgetContents);
    checkBox->setObjectName("checkBox");
    checkBox->setFont(font);

    gridLayout_2->addWidget(checkBox, 2, 0, 1, 1);

    checkBox_2 = new QCheckBox(scrollAreaWidgetContents);
    checkBox_2->setObjectName("checkBox_2");
    checkBox_2->setFont(font);

    gridLayout_2->addWidget(checkBox_2, 2, 1, 1, 1);

    wishMovieButton = new QPushButton(scrollAreaWidgetContents);
    wishMovieButton->setObjectName("wishMovieButton");
    wishMovieButton->setFont(font);
    wishMovieButton->setCursor(QCursor(Qt::PointingHandCursor));

    gridLayout_2->addWidget(wishMovieButton, 9, 2, 1, 1, Qt::AlignHCenter | Qt::AlignVCenter);

    backToHomePage = new QPushButton(scrollAreaWidgetContents);
    backToHomePage->setObjectName("backToMenu");
    backToHomePage->setFont(font);
    backToHomePage->setCursor(QCursor(Qt::PointingHandCursor));

    gridLayout_2->addWidget(backToHomePage, 9, 2, 3, 1, Qt::AlignHCenter | Qt::AlignVCenter);

    checkBox_8 = new QCheckBox(scrollAreaWidgetContents);
    checkBox_8->setObjectName("checkBox_8");
    checkBox_8->setFont(font);

    gridLayout_2->addWidget(checkBox_8, 2, 5, 1, 1);

    checkBox_9 = new QCheckBox(scrollAreaWidgetContents);
    checkBox_9->setObjectName("checkBox_9");
    checkBox_9->setFont(font);

    gridLayout_2->addWidget(checkBox_9, 3, 3, 1, 1);

    checkBox_4 = new QCheckBox(scrollAreaWidgetContents);
    checkBox_4->setObjectName("checkBox_4");
    checkBox_4->setFont(font);

    gridLayout_2->addWidget(checkBox_4, 3, 0, 1, 1);

    horizontalLayout_7 = new QHBoxLayout();
    horizontalLayout_7->setObjectName("horizontalLayout_7");
    horizontalLayout_7->setContentsMargins(-1, -1, 400, -1);
    label_8 = new QLabel(scrollAreaWidgetContents);
    label_8->setObjectName("label_8");
    QSizePolicy sizePolicy2(QSizePolicy::Preferred, QSizePolicy::Preferred);
    sizePolicy2.setHorizontalStretch(0);
    sizePolicy2.setVerticalStretch(0);
    sizePolicy2.setHeightForWidth(label_8->sizePolicy().hasHeightForWidth());
    label_8->setSizePolicy(sizePolicy2);
    label_8->setFont(font);
    label_8->setMargin(2);

    horizontalLayout_7->addWidget(label_8);

    checkBox_12 = new QCheckBox(scrollAreaWidgetContents);
    checkBox_12->setObjectName("checkBox_12");
    checkBox_12->setFont(font);

    horizontalLayout_7->addWidget(checkBox_12);

    checkBox_13 = new QCheckBox(scrollAreaWidgetContents);
    checkBox_13->setObjectName("checkBox_13");
    checkBox_13->setFont(font);

    horizontalLayout_7->addWidget(checkBox_13);


    gridLayout_2->addLayout(horizontalLayout_7, 5, 0, 1, 4);

    horizontalLayout_6 = new QHBoxLayout();
    horizontalLayout_6->setObjectName("horizontalLayout_6");
    horizontalLayout_6->setContentsMargins(-1, -1, 400, -1);
    label_7 = new QLabel(scrollAreaWidgetContents);
    label_7->setObjectName("label_7");
    label_7->setFont(font);

    horizontalLayout_6->addWidget(label_7);

    lineEdit_7 = new QLabel(scrollAreaWidgetContents);
    lineEdit_7->setObjectName("lineEdit_7");

    horizontalLayout_6->addWidget(lineEdit_7);

    label_11 = new QLabel(scrollAreaWidgetContents);
    label_11->setObjectName("label_11");
    label_11->setFont(font);

    horizontalLayout_6->addWidget(label_11);

    lineEdit_8 = new QLabel(scrollAreaWidgetContents);
    lineEdit_8->setObjectName("lineEdit_8");

    horizontalLayout_6->addWidget(lineEdit_8);


    gridLayout_2->addLayout(horizontalLayout_6, 4, 0, 1, 6);

    label_9 = new QLabel(scrollAreaWidgetContents);
    label_9->setObjectName("label_9");
    label_9->setFont(font);

    gridLayout_2->addWidget(label_9, 7, 0, 1, 1);

    checkBox_10 = new QCheckBox(scrollAreaWidgetContents);
    checkBox_10->setObjectName("checkBox_10");
    checkBox_10->setFont(font);

    gridLayout_2->addWidget(checkBox_10, 3, 4, 1, 1);

    verticalLayout = new QVBoxLayout();
    verticalLayout->setSpacing(12);
    verticalLayout->setObjectName("verticalLayout");
    horizontalLayout = new QHBoxLayout();
    horizontalLayout->setSpacing(85);
    horizontalLayout->setObjectName("horizontalLayout");
    horizontalLayout->setContentsMargins(-1, -1, 400, -1);
    label = new QLabel(scrollAreaWidgetContents);
    label->setObjectName("label");
    label->setFont(font);

    horizontalLayout->addWidget(label);

    lineEdit = new QLabel(scrollAreaWidgetContents);
    lineEdit->setObjectName("lineEdit");

    horizontalLayout->addWidget(lineEdit);


    verticalLayout->addLayout(horizontalLayout);

    horizontalLayout_2 = new QHBoxLayout();
    horizontalLayout_2->setSpacing(80);
    horizontalLayout_2->setObjectName("horizontalLayout_2");
    horizontalLayout_2->setContentsMargins(-1, -1, 400, -1);
    label_2 = new QLabel(scrollAreaWidgetContents);
    label_2->setObjectName("label_2");
    label_2->setFont(font);

    horizontalLayout_2->addWidget(label_2);

    lineEdit_2 = new QLabel(scrollAreaWidgetContents);
    lineEdit_2->setObjectName("lineEdit_2");

    horizontalLayout_2->addWidget(lineEdit_2);


    verticalLayout->addLayout(horizontalLayout_2);

    horizontalLayout_3 = new QHBoxLayout();
    horizontalLayout_3->setSpacing(84);
    horizontalLayout_3->setObjectName("horizontalLayout_3");
    horizontalLayout_3->setContentsMargins(-1, -1, 400, -1);
    label_3 = new QLabel(scrollAreaWidgetContents);
    label_3->setObjectName("label_3");
    label_3->setFont(font);

    horizontalLayout_3->addWidget(label_3);

    lineEdit_3 = new QLabel(scrollAreaWidgetContents);
    lineEdit_3->setObjectName("lineEdit_3");

    horizontalLayout_3->addWidget(lineEdit_3);


    verticalLayout->addLayout(horizontalLayout_3);

    horizontalLayout_4 = new QHBoxLayout();
    horizontalLayout_4->setSpacing(57);
    horizontalLayout_4->setObjectName("horizontalLayout_4");
    horizontalLayout_4->setContentsMargins(-1, -1, 400, -1);
    label_4 = new QLabel(scrollAreaWidgetContents);
    label_4->setObjectName("label_4");
    label_4->setFont(font);

    horizontalLayout_4->addWidget(label_4);

    lineEdit_4 = new QLabel(scrollAreaWidgetContents);
    lineEdit_4->setObjectName("lineEdit_4");

    horizontalLayout_4->addWidget(lineEdit_4);


    verticalLayout->addLayout(horizontalLayout_4);

    horizontalLayout_5 = new QHBoxLayout();
    horizontalLayout_5->setObjectName("horizontalLayout_5");
    horizontalLayout_5->setContentsMargins(-1, -1, 400, -1);
    label_5 = new QLabel(scrollAreaWidgetContents);
    label_5->setObjectName("label_5");
    label_5->setFont(font);

    horizontalLayout_5->addWidget(label_5);

    lineEdit_5 = new QLabel(scrollAreaWidgetContents);
    lineEdit_5->setObjectName("lineEdit_5");
    lineEdit_5->setEnabled(true);
    QSizePolicy sizePolicy3(QSizePolicy::Expanding, QSizePolicy::Fixed);
    sizePolicy3.setHorizontalStretch(0);
    sizePolicy3.setVerticalStretch(0);
    sizePolicy3.setHeightForWidth(lineEdit_5->sizePolicy().hasHeightForWidth());
    lineEdit_5->setSizePolicy(sizePolicy3);
    lineEdit_5->setSizeIncrement(QSize(0, 0));

    horizontalLayout_5->addWidget(lineEdit_5);


    verticalLayout->addLayout(horizontalLayout_5);


    gridLayout_2->addLayout(verticalLayout, 0, 0, 1, 5);

    checkBox_11 = new QCheckBox(scrollAreaWidgetContents);
    checkBox_11->setObjectName("checkBox_11");
    checkBox_11->setFont(font);

    gridLayout_2->addWidget(checkBox_11, 2, 4, 1, 1);

    checkBox_3 = new QCheckBox(scrollAreaWidgetContents);
    checkBox_3->setObjectName("checkBox_3");
    checkBox_3->setFont(font);

    gridLayout_2->addWidget(checkBox_3, 2, 2, 1, 1);

    seenMovieButton = new QPushButton(scrollAreaWidgetContents);
    seenMovieButton->setObjectName("seenMovieButton");
    seenMovieButton->setFont(font);
    seenMovieButton->setCursor(QCursor(Qt::PointingHandCursor));

    gridLayout_2->addWidget(seenMovieButton, 7, 2, 1, 1);

    scrollArea->setWidget(scrollAreaWidgetContents);

    gridLayout->addWidget(scrollArea, 0, 1, 1, 1);

    setCentralWidget(centralwidget);
    menubar = new QMenuBar();
    menubar->setObjectName("menubar");
    menubar->setGeometry(QRect(0, 0, 833, 26));
    setMenuBar(menubar);

    retranslateUi();

    saveButton->setDefault(false);


    QMetaObject::connectSlotsByName(this);
}

void User_Page_GUI::retranslateUi()
{
    setWindowTitle(QCoreApplication::translate("MainWindow", "Your Profile", nullptr));
    checkBox_6->setText(QCoreApplication::translate("MainWindow", "fantasy", nullptr));
    saveButton->setText(QCoreApplication::translate("MainWindow", "Save changes", nullptr));
    label_6->setText(QCoreApplication::translate("MainWindow", "Favorite genres:", nullptr));
    checkBox_5->setText(QCoreApplication::translate("MainWindow", "thriller", nullptr));
    checkBox_7->setText(QCoreApplication::translate("MainWindow", "animation", nullptr));
    checkBox->setText(QCoreApplication::translate("MainWindow", "drama", nullptr));
    checkBox_2->setText(QCoreApplication::translate("MainWindow", "action", nullptr));
    wishMovieButton->setText(QCoreApplication::translate("MainWindow", "Wishlist", nullptr));
    checkBox_8->setText(QCoreApplication::translate("MainWindow", "horror", nullptr));
    checkBox_9->setText(QCoreApplication::translate("MainWindow", "romance", nullptr));
    checkBox_4->setText(QCoreApplication::translate("MainWindow", "comedy", nullptr));
    label_8->setText(QCoreApplication::translate("MainWindow", "You like:", nullptr));
    checkBox_12->setText(QCoreApplication::translate("MainWindow", "movies", nullptr));
    checkBox_13->setText(QCoreApplication::translate("MainWindow", "tv-shows", nullptr));
    label_7->setText(QCoreApplication::translate("MainWindow", "Release date preference:", nullptr));
    lineEdit_7->setText(QString());
    label_11->setText(QCoreApplication::translate("MainWindow", "-", nullptr));
    lineEdit_8->setText(QString());
    label_9->setText(QString());
    checkBox_10->setText(QCoreApplication::translate("MainWindow", "mistery", nullptr));
    label->setText(QCoreApplication::translate("MainWindow", "Username:", nullptr));
    label_2->setText(QCoreApplication::translate("MainWindow", "First Name:", nullptr));
    label_3->setText(QCoreApplication::translate("MainWindow", "Last Name:", nullptr));
    label_4->setText(QCoreApplication::translate("MainWindow", "Favorite Movie:", nullptr));
    label_5->setText(QCoreApplication::translate("MainWindow", "Favorite Actor/Actress:", nullptr));
    checkBox_11->setText(QCoreApplication::translate("MainWindow", "adventure", nullptr));
    checkBox_3->setText(QCoreApplication::translate("MainWindow", "SF", nullptr));
    seenMovieButton->setText(QCoreApplication::translate("MainWindow", "Seen movies or TV-shows", nullptr));
    backToHomePage->setText(QCoreApplication::translate("MainWindow", "Back to home page", nullptr));
}

void User_Page_GUI::onSaveButtonClicked()
{
    m_currentUser.SetDrama(checkBox->isChecked());
	m_currentUser.SetAction(checkBox_2->isChecked());
	m_currentUser.SetComedy(checkBox_4->isChecked());
	m_currentUser.SetThriller(checkBox_5->isChecked());
	m_currentUser.SetFantasy(checkBox_6->isChecked());
	m_currentUser.SetAnimation(checkBox_7->isChecked());
	m_currentUser.SetHorror(checkBox_8->isChecked());
	m_currentUser.SetRomance(checkBox_9->isChecked());
	m_currentUser.SetMistery(checkBox_10->isChecked());
	m_currentUser.SetAdventure(checkBox_11->isChecked());
	m_currentUser.SetSF(checkBox_3->isChecked());
    if (checkBox_12->isChecked() && checkBox_13->isChecked())
    {
        m_currentUser.SetMovieSeries(2);
    }
    else if (checkBox_13->isChecked())
    {
        m_currentUser.SetMovieSeries(1);
    }
	else m_currentUser.SetMovieSeries(0);
    
	Storages::InsertUser(m_currentUser);
	QMessageBox::information(this, "Success", "Changes saved!");
}

void User_Page_GUI::onSeenButtonClicked()
{
    hide();
    m_seenMovies = new SeenMovies(std::move(m_currentUser));
    m_seenMovies->show();
    connect(m_seenMovies->BackToUserPage, &QPushButton::clicked, this, &User_Page_GUI::onBackToUserClickedSeen);
}

void User_Page_GUI::onWishButtonClicked()
{
    hide();
    m_wishlistPage = new WishlistPage(std::move(m_currentUser));
    m_wishlistPage->show();
    connect(m_wishlistPage->BackToUserPage, &QPushButton::clicked, this, &User_Page_GUI::onBackToUserClickedWish);
}

void User_Page_GUI::onBackToUserClickedSeen()
{
    m_seenMovies->hide();
    show();
}

void User_Page_GUI::onBackToUserClickedWish()
{
    m_wishlistPage->hide();
    show();
}

void User_Page_GUI::showDetails()
{
    auto table = Storages::getStorage();
	std::unique_ptr<User> user = std::make_unique<User>
        (table.get<User>(m_currentUser.GetUsername()));
    if (user != nullptr)
    {
        lineEdit->setText(QString::fromStdString(user->GetUsername()));
        lineEdit_2->setText(QString::fromStdString(user->GetFirstName()));
        lineEdit_3->setText(QString::fromStdString(user->GetLastName()));
        lineEdit_4->setText(QString::fromStdString(user->GetFavMovie()));
        lineEdit_5->setText(QString::fromStdString(user->GetFavActor()));
        if (!user->GetYear1() && !user->GetYear2())
        {
            lineEdit_7->setText(QString::fromStdString("N/A"));
            lineEdit_8->setText(QString::fromStdString("N/A"));
        }
        else
        {
            lineEdit_7->setText(QString::number(user->GetYear1()));
            lineEdit_8->setText(QString::number(user->GetYear2()));
        }
        if (user->GetYear1() == 0)
            lineEdit_7->setText("");
        if (user->GetYear2() == 0)
            lineEdit_8->setText("");
        if (user->GetDrama())
            checkBox->setChecked(true);
        if (user->GetAction())
            checkBox_2->setChecked(true);
        if (user->GetSF())
            checkBox_3->setChecked(true);
        if (user->GetComedy())
            checkBox_4->setChecked(true);
        if (user->GetThriller())
            checkBox_5->setChecked(true);
        if (user->GetFantasy())
            checkBox_6->setChecked(true);
        if (user->GetAnimation())
            checkBox_7->setChecked(true);
        if (user->GetHorror())
            checkBox_8->setChecked(true);
        if (user->GetRomance())
            checkBox_9->setChecked(true);
        if (user->GetMistery())
            checkBox_10->setChecked(true);
        if (user->GetMovieSeries() == 0)
        {
            checkBox_12->setChecked(true);
        }
        if (user->GetMovieSeries() == 1)
        {
            checkBox_13->setChecked(true);
        }
        if (user->GetMovieSeries() == 2)
        {
            checkBox_12->setChecked(true);
            checkBox_13->setChecked(true);
        }
    }
}
User_Page_GUI::~User_Page_GUI()
{}
