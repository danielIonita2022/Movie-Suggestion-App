#include "register_gui.h"
#include <fstream>
#include <QMessageBox>

Register_GUI::Register_GUI()
{
    setupUi();
    connect(pushButton, &QPushButton::clicked, this, &Register_GUI::addNewUserToDB);
}

void Register_GUI::setupUi()
{
    if (objectName().isEmpty())
        setObjectName("Register_GUI");
    setWindowModality(Qt::WindowModal);
    resize(940, 736);
    setMinimumSize(QSize(444, 321));
    setMaximumSize(QSize(1332, 963));
    scrollArea = new QScrollArea(this);
    scrollArea->setObjectName("scrollArea");
    scrollArea->setGeometry(QRect(80, 20, 781, 701));
    scrollArea->setWidgetResizable(true);
    scrollAreaWidgetContents = new QWidget();
    scrollAreaWidgetContents->setObjectName("scrollAreaWidgetContents");
    scrollAreaWidgetContents->setGeometry(QRect(0, 0, 779, 699));
    groupBox = new QGroupBox(scrollAreaWidgetContents);
    groupBox->setObjectName("groupBox");
    groupBox->setGeometry(QRect(0, 0, 761, 701));
    label_5 = new QLabel(groupBox);
    label_5->setObjectName("label_5");
    label_5->setGeometry(QRect(210, 180, 331, 41));
    QFont font;
    font.setFamilies({ QString::fromUtf8("Cambria") });
    font.setPointSize(11);
    label_5->setFont(font);
    label_6 = new QLabel(groupBox);
    label_6->setObjectName("label_6");
    label_6->setGeometry(QRect(210, 240, 211, 16));
    label_6->setFont(font);
    lineEdit_5 = new QLineEdit(groupBox);
    lineEdit_5->setObjectName("lineEdit_5");
    lineEdit_5->setGeometry(QRect(220, 270, 151, 20));
    label_7 = new QLabel(groupBox);
    label_7->setObjectName("label_7");
    label_7->setGeometry(QRect(210, 300, 251, 21));
    label_7->setFont(font);
    lineEdit_6 = new QLineEdit(groupBox);
    lineEdit_6->setObjectName("lineEdit_6");
    lineEdit_6->setGeometry(QRect(220, 330, 151, 21));
    label_8 = new QLabel(groupBox);
    label_8->setObjectName("label_8");
    label_8->setGeometry(QRect(210, 360, 271, 16));
    label_8->setFont(font);
    checkBoxDrama = new QCheckBox(groupBox);
    checkBoxDrama->setObjectName("checkBoxDrama");
    checkBoxDrama->setGeometry(QRect(220, 390, 75, 20));
    checkBoxDrama->setFont(font);
    checkBoxAction = new QCheckBox(groupBox);
    checkBoxAction->setObjectName("checkBoxAction");
    checkBoxAction->setGeometry(QRect(300, 390, 75, 20));
    checkBoxAction->setFont(font);
    checkBoxSF = new QCheckBox(groupBox);
    checkBoxSF->setObjectName("checkBoxSF");
    checkBoxSF->setGeometry(QRect(380, 390, 75, 20));
    checkBoxSF->setFont(font);
    checkBoxComedy = new QCheckBox(groupBox);
    checkBoxComedy->setObjectName("checkBoxComedy");
    checkBoxComedy->setGeometry(QRect(220, 420, 75, 20));
    checkBoxComedy->setFont(font);
    checkBoxThriller = new QCheckBox(groupBox);
    checkBoxThriller->setObjectName("checkBoxThriller");
    checkBoxThriller->setGeometry(QRect(450, 390, 75, 20));
    checkBoxThriller->setFont(font);
    checkBoxFantasy = new QCheckBox(groupBox);
    checkBoxFantasy->setObjectName("checkBoxFantasy");
    checkBoxFantasy->setGeometry(QRect(300, 420, 75, 20));
    checkBoxFantasy->setFont(font);
    checkBoxAnimation = new QCheckBox(groupBox);
    checkBoxAnimation->setObjectName("checkBoxAnimation");
    checkBoxAnimation->setGeometry(QRect(240, 450, 91, 20));
    checkBoxAnimation->setFont(font);
    checkBoxHorror = new QCheckBox(groupBox);
    checkBoxHorror->setObjectName("checkBoxHorror");
    checkBoxHorror->setGeometry(QRect(380, 420, 75, 20));
    checkBoxHorror->setFont(font);
    checkBoxRomance = new QCheckBox(groupBox);
    checkBoxRomance->setObjectName("checkBoxRomance");
    checkBoxRomance->setGeometry(QRect(340, 450, 75, 20));
    checkBoxRomance->setFont(font);
    checkBoxMistery = new QCheckBox(groupBox);
    checkBoxMistery->setObjectName("checkBoxMistery");
    checkBoxMistery->setGeometry(QRect(440, 450, 75, 20));
    checkBoxMistery->setFont(font);
    checkBoxAdventure = new QCheckBox(groupBox);
    checkBoxAdventure->setObjectName("checkBoxAdventure");
    checkBoxAdventure->setGeometry(QRect(450, 420, 101, 20));
    checkBoxAdventure->setFont(font);
    label_9 = new QLabel(groupBox);
    label_9->setObjectName("label_9");
    label_9->setGeometry(QRect(210, 490, 271, 16));
    label_9->setFont(font);
    label_10 = new QLabel(groupBox);
    label_10->setObjectName("label_10");
    label_10->setGeometry(QRect(210, 520, 421, 16));
    label_10->setFont(font);
    lineEdit_7 = new QLineEdit(groupBox);
    lineEdit_7->setObjectName("lineEdit_7");
    lineEdit_7->setGeometry(QRect(220, 550, 61, 21));
    lineEdit_8 = new QLineEdit(groupBox);
    lineEdit_8->setObjectName("lineEdit_8");
    lineEdit_8->setGeometry(QRect(300, 550, 61, 21));
    label_11 = new QLabel(groupBox);
    label_11->setObjectName("label_11");
    label_11->setGeometry(QRect(290, 550, 21, 16));
    label_11->setFont(font);
    label_12 = new QLabel(groupBox);
    label_12->setObjectName("label_12");
    label_12->setGeometry(QRect(210, 580, 381, 16));
    label_12->setFont(font);
    checkBox_12 = new QCheckBox(groupBox);
    checkBox_12->setObjectName("checkBox_12");
    checkBox_12->setGeometry(QRect(220, 610, 75, 20));
    checkBox_12->setFont(font);
    checkBox_13 = new QCheckBox(groupBox);
    checkBox_13->setObjectName("checkBox_13");
    checkBox_13->setGeometry(QRect(300, 610, 75, 20));
    checkBox_13->setFont(font);
    pushButton = new QPushButton(groupBox);
    pushButton->setObjectName("pushButton");
    pushButton->setGeometry(QRect(310, 650, 151, 24));
    pushButton->setFont(font);
    pushButton->setCursor(QCursor(Qt::PointingHandCursor));
    widget = new QWidget(groupBox);
    widget->setObjectName("widget");
    widget->setGeometry(QRect(230, 20, 275, 143));
    verticalLayout_3 = new QVBoxLayout(widget);
    verticalLayout_3->setObjectName("verticalLayout_3");
    verticalLayout_3->setContentsMargins(0, 0, 0, 0);
    verticalLayout_2 = new QVBoxLayout();
    verticalLayout_2->setSpacing(15);
    verticalLayout_2->setObjectName("verticalLayout_2");
    verticalLayout = new QVBoxLayout();
    verticalLayout->setSpacing(15);
    verticalLayout->setObjectName("verticalLayout");
    horizontalLayout = new QHBoxLayout();
    horizontalLayout->setObjectName("horizontalLayout");
    label = new QLabel(widget);
    label->setObjectName("label");
    label->setFont(font);

    horizontalLayout->addWidget(label);

    lineEdit = new QLineEdit(widget);
    lineEdit->setObjectName("lineEdit");
    QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Fixed);
    sizePolicy.setHorizontalStretch(12);
    sizePolicy.setVerticalStretch(0);
    sizePolicy.setHeightForWidth(lineEdit->sizePolicy().hasHeightForWidth());
    lineEdit->setSizePolicy(sizePolicy);

    horizontalLayout->addWidget(lineEdit);


    verticalLayout->addLayout(horizontalLayout);

    horizontalLayout_2 = new QHBoxLayout();
    horizontalLayout_2->setObjectName("horizontalLayout_2");
    label_2 = new QLabel(widget);
    label_2->setObjectName("label_2");
    label_2->setFont(font);

    horizontalLayout_2->addWidget(label_2);

    lineEdit_2 = new QLineEdit(widget);
    lineEdit_2->setObjectName("lineEdit_2");

    horizontalLayout_2->addWidget(lineEdit_2);


    verticalLayout->addLayout(horizontalLayout_2);


    verticalLayout_2->addLayout(verticalLayout);

    horizontalLayout_4 = new QHBoxLayout();
    horizontalLayout_4->setObjectName("horizontalLayout_4");
    label_4 = new QLabel(widget);
    label_4->setObjectName("label_4");
    label_4->setFont(font);

    horizontalLayout_4->addWidget(label_4);

    lineEdit_4 = new QLineEdit(widget);
    lineEdit_4->setObjectName("lineEdit_4");

    horizontalLayout_4->addWidget(lineEdit_4);


    verticalLayout_2->addLayout(horizontalLayout_4);

    horizontalLayout_3 = new QHBoxLayout();
    horizontalLayout_3->setObjectName("horizontalLayout_3");
    label_3 = new QLabel(widget);
    label_3->setObjectName("label_3");
    label_3->setFont(font);

    horizontalLayout_3->addWidget(label_3);

    lineEdit_3 = new QLineEdit(widget);
    lineEdit_3->setObjectName("lineEdit_3");
    lineEdit_3->setEchoMode(QLineEdit::Password);

    horizontalLayout_3->addWidget(lineEdit_3);


    verticalLayout_2->addLayout(horizontalLayout_3);


    verticalLayout_3->addLayout(verticalLayout_2);

    scrollArea->setWidget(scrollAreaWidgetContents);

    retranslateUi();

    QMetaObject::connectSlotsByName(this);
}
void Register_GUI::retranslateUi()
{
    setWindowTitle(QCoreApplication::translate("Register_GUI", "Register", nullptr));
    groupBox->setTitle(QString());
    label_5->setText(QCoreApplication::translate("Register_GUI", "To help us find the best recomandations for you\n"
        "              please answer the following quiestions:", nullptr));
    label_6->setText(QCoreApplication::translate("Register_GUI", "1. What is your favourite movie?", nullptr));
    label_7->setText(QCoreApplication::translate("Register_GUI", "2. Who is your favourite actor/actress?", nullptr));
    label_8->setText(QCoreApplication::translate("Register_GUI", "3. Which one of these do you prefer?", nullptr));
    checkBoxDrama->setText(QCoreApplication::translate("Register_GUI", "Drama", nullptr));
    checkBoxAction->setText(QCoreApplication::translate("Register_GUI", "Action", nullptr));
    checkBoxSF->setText(QCoreApplication::translate("Register_GUI", "SF", nullptr));
    checkBoxComedy->setText(QCoreApplication::translate("Register_GUI", "Comedy", nullptr));
    checkBoxThriller->setText(QCoreApplication::translate("Register_GUI", "Thriller", nullptr));
    checkBoxFantasy->setText(QCoreApplication::translate("Register_GUI", "Fantasy", nullptr));
    checkBoxAnimation->setText(QCoreApplication::translate("Register_GUI", "Animation", nullptr));
    checkBoxHorror->setText(QCoreApplication::translate("Register_GUI", "Horror", nullptr));
    checkBoxRomance->setText(QCoreApplication::translate("Register_GUI", "Romance", nullptr));
    checkBoxMistery->setText(QCoreApplication::translate("Register_GUI", "Mistery", nullptr));
    checkBoxAdventure->setText(QCoreApplication::translate("Register_GUI", "Adventure", nullptr));
    label_9->setText(QCoreApplication::translate("Register_GUI", "4. Does the release year matter to you?", nullptr));
    label_10->setText(QCoreApplication::translate("Register_GUI", "If it does, please introduce years between 1960 and 2022.", nullptr));
    lineEdit_7->setText(QString());
    lineEdit_8->setText(QString());
    label_11->setText(QCoreApplication::translate("Register_GUI", "-", nullptr));
    label_12->setText(QCoreApplication::translate("Register_GUI", "5. Which one do you prefer more? Movies or TV-Shows?", nullptr));
    checkBox_12->setText(QCoreApplication::translate("Register_GUI", "Movies", nullptr));
    checkBox_13->setText(QCoreApplication::translate("Register_GUI", "TV-Shows", nullptr));
    pushButton->setText(QCoreApplication::translate("Register_GUI", "Complete registration", nullptr));
    label->setText(QCoreApplication::translate("Register_GUI", "First Name", nullptr));
    lineEdit->setText(QString());
    label_2->setText(QCoreApplication::translate("Register_GUI", "Last Name ", nullptr));
    label_4->setText(QCoreApplication::translate("Register_GUI", "Username  ", nullptr));
    label_3->setText(QCoreApplication::translate("Register_GUI", "Password   ", nullptr));
}

void Register_GUI::addNewUserToDB()
{
    std::string firstName = lineEdit->text().toStdString();
    std::string lastName = lineEdit_2->text().toStdString();
    std::string userName = lineEdit_4->text().toStdString();
    std::string password = lineEdit_3->text().toStdString();
    std::string favMovie = lineEdit_5->text().toStdString();
    std::string favActor = lineEdit_6->text().toStdString();
    uint16_t beginYear = lineEdit_7->text().toInt();
    uint16_t endYear = lineEdit_8->text().toInt();

    if (firstName.empty() || lastName.empty() || userName.empty() ||
        password.empty())
    {
        QMessageBox::warning(this, "Registration failed!", "Please fill the required fields!");
        return;
    }
    

    bool drama = checkBoxDrama->isChecked();
    bool action = checkBoxAction->isChecked();
    bool sf = checkBoxSF->isChecked();
    bool thriller = checkBoxThriller->isChecked();
    bool comedy = checkBoxComedy->isChecked();
    bool fantasy = checkBoxFantasy->isChecked();
    bool horror = checkBoxHorror->isChecked();
    bool adventure = checkBoxAdventure->isChecked();
    bool animation = checkBoxAnimation->isChecked();
    bool romance = checkBoxRomance->isChecked();
    bool mistery = checkBoxMistery->isChecked();
    uint16_t movieOrTV;
    if (checkBox_12->isChecked() && !checkBox_13->isChecked())
        movieOrTV = 0;
    else if (!checkBox_12->isChecked() && checkBox_13->isChecked())
        movieOrTV = 1;
    else movieOrTV = 2;

    User newUser(firstName, lastName, userName, password, favMovie, favActor, drama, action, sf, comedy, thriller, fantasy, animation, horror,
        romance, mistery, adventure, beginYear, endYear, movieOrTV);
    newUser.UpdateDatabase();
}


Register_GUI::~Register_GUI()
{
}
