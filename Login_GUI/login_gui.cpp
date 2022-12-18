#include "login_gui.h"
#include "register_gui.h"
#include <QMessageBox>

Login_GUI::Login_GUI()
{
    setupUi();
    connect(pushButton_login, &QPushButton::clicked, this, &Login_GUI::login);
    connect(pushButton_signup, &QPushButton::clicked, this, &Login_GUI::signup);
}

void Login_GUI::setupUi()
{
    if (objectName().isEmpty())
        setObjectName("Login_GUI");
    resize(732, 466);
    setMinimumSize(QSize(444, 321));
    setMaximumSize(QSize(1332, 963));
    setMouseTracking(false);
    centralWidget = new QWidget(this);
    centralWidget->setObjectName("centralWidget");
    groupBox = new QGroupBox(centralWidget);
    groupBox->setObjectName("groupBox");
    groupBox->setGeometry(QRect(40, 40, 621, 321));
    groupBox->setMinimumSize(QSize(444, 321));
    groupBox->setMaximumSize(QSize(1332, 963));
    pushButton_login = new QPushButton(groupBox);
    pushButton_login->setObjectName("pushButton_login");
    pushButton_login->setGeometry(QRect(250, 210, 91, 31));
    QFont font;
    font.setFamilies({ QString::fromUtf8("Cambria") });
    font.setPointSize(12);
    pushButton_login->setFont(font);
    pushButton_login->setCursor(QCursor(Qt::PointingHandCursor));
    layoutWidget = new QWidget(groupBox);
    layoutWidget->setObjectName("layoutWidget");
    layoutWidget->setGeometry(QRect(170, 90, 251, 91));
    verticalLayout = new QVBoxLayout(layoutWidget);
    verticalLayout->setSpacing(6);
    verticalLayout->setContentsMargins(11, 11, 11, 11);
    verticalLayout->setObjectName("verticalLayout");
    verticalLayout->setContentsMargins(0, 0, 0, 0);
    horizontalLayout = new QHBoxLayout();
    horizontalLayout->setSpacing(6);
    horizontalLayout->setObjectName("horizontalLayout");
    label_username = new QLabel(layoutWidget);
    label_username->setObjectName("label_username");
    label_username->setFont(font);

    horizontalLayout->addWidget(label_username);

    lineEdit_insert_user = new QLineEdit(layoutWidget);
    lineEdit_insert_user->setObjectName("lineEdit_insert_user");

    horizontalLayout->addWidget(lineEdit_insert_user);


    verticalLayout->addLayout(horizontalLayout);

    horizontalLayout_2 = new QHBoxLayout();
    horizontalLayout_2->setSpacing(6);
    horizontalLayout_2->setObjectName("horizontalLayout_2");
    label_password = new QLabel(layoutWidget);
    label_password->setObjectName("label_password");
    label_password->setFont(font);

    horizontalLayout_2->addWidget(label_password);

    lineEdit_insert_password = new QLineEdit(layoutWidget);
    lineEdit_insert_password->setObjectName("lineEdit_insert_password");
    lineEdit_insert_password->setEchoMode(QLineEdit::Password);

    horizontalLayout_2->addWidget(lineEdit_insert_password);


    verticalLayout->addLayout(horizontalLayout_2);

    layoutWidget1 = new QWidget(groupBox);
    layoutWidget1->setObjectName("layoutWidget1");
    layoutWidget1->setGeometry(QRect(190, 280, 211, 26));
    horizontalLayout_3 = new QHBoxLayout(layoutWidget1);
    horizontalLayout_3->setSpacing(6);
    horizontalLayout_3->setContentsMargins(11, 11, 11, 11);
    horizontalLayout_3->setObjectName("horizontalLayout_3");
    horizontalLayout_3->setContentsMargins(0, 0, 0, 0);
    label_signup = new QLabel(layoutWidget1);
    label_signup->setObjectName("label_signup");
    QFont font1;
    font1.setFamilies({ QString::fromUtf8("Cambria") });
    font1.setPointSize(10);
    label_signup->setFont(font1);

    horizontalLayout_3->addWidget(label_signup);

    pushButton_signup = new QPushButton(layoutWidget1);
    pushButton_signup->setObjectName("pushButton_signup");
    pushButton_signup->setFont(font1);
    pushButton_signup->setCursor(QCursor(Qt::PointingHandCursor));

    horizontalLayout_3->addWidget(pushButton_signup);

    label = new QLabel(groupBox);
    label->setObjectName("label");
    label->setGeometry(QRect(110, 10, 401, 31));
    QFont font2;
    font2.setFamilies({ QString::fromUtf8("Terminal") });
    font2.setPointSize(14);
    font2.setBold(true);
    label->setFont(font2);
    setCentralWidget(centralWidget);
    menuBar = new QMenuBar(this);
    menuBar->setObjectName("menuBar");
    menuBar->setGeometry(QRect(0, 0, 732, 26));
    setMenuBar(menuBar);
    mainToolBar = new QToolBar(this);
    mainToolBar->setObjectName("mainToolBar");
    addToolBar(Qt::TopToolBarArea, mainToolBar);
    statusBar = new QStatusBar(this);
    statusBar->setObjectName("statusBar");
    setStatusBar(statusBar);

    retranslateUi();

    QMetaObject::connectSlotsByName(this);
}
void Login_GUI::retranslateUi()
{
    setWindowTitle(QCoreApplication::translate("Login_GUI", "Login_GUI", nullptr));
    groupBox->setTitle(QString());
    pushButton_login->setText(QCoreApplication::translate("Login_GUI", "Log In", nullptr));
    label_username->setText(QCoreApplication::translate("Login_GUI", "Username", nullptr));
    label_password->setText(QCoreApplication::translate("Login_GUI", "Password ", nullptr));
    label_signup->setText(QCoreApplication::translate("Login_GUI", "Don't have an account?", nullptr));
    pushButton_signup->setText(QCoreApplication::translate("Login_GUI", "Sign Up", nullptr));
    label->setText(QCoreApplication::translate("Login_GUI", "Welcome to our Movie Suggestion App!", nullptr));
}

std::unique_ptr<User> Login_GUI::login()
{
    QString qUsername = lineEdit_insert_user->text();
    QString qPassword = lineEdit_insert_password->text();

    std::string username = qUsername.toStdString();
    std::string password = qPassword.toStdString();

    std::unique_ptr<User> currentUser = nullptr;

    StorageUsers storage = Storages::getInstance().getUserStorage();
    if (storage.get_pointer<User>(username) != nullptr)
    {
        User&& ref = storage.get<User>(username);
        currentUser.reset(&ref);
        if (currentUser->GetPassword() == password)
            QMessageBox::information(this, "Login Successful", "Welcome, " + qUsername + "!");
        else
        {
            QMessageBox::warning(this, "Login Failed!", "Invalid password. Please try again");
            currentUser.release();
        }
    }
    else
    {
        QMessageBox::warning(this, "Login Failed!", "Please enter a valid user!");
    }
    return currentUser;
}
void Login_GUI::signup()
{
    hide();
    pushButton_signup->setEnabled(false);
    pushButton_login->setEnabled(false);
    Register_GUI* registerWindow = new Register_GUI;
    registerWindow->show();
}
Login_GUI::~Login_GUI()
{
}
