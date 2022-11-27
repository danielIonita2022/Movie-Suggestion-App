/********************************************************************************
** Form generated from reading UI file 'Login_GUI.ui'
**
** Created by: Qt User Interface Compiler version 6.4.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LOGIN_GUI_H
#define UI_LOGIN_GUI_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Login_GUIClass
{
public:
    QWidget *centralWidget;
    QGroupBox *groupBox;
    QPushButton *pushButton_login;
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QLabel *label_username;
    QLineEdit *lineEdit_insert_user;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_password;
    QLineEdit *lineEdit_insert_password;
    QWidget *layoutWidget1;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_signup;
    QPushButton *pushButton_signup;
    QLabel *label;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *Login_GUIClass)
    {
        if (Login_GUIClass->objectName().isEmpty())
            Login_GUIClass->setObjectName("Login_GUIClass");
        Login_GUIClass->resize(732, 466);
        Login_GUIClass->setMinimumSize(QSize(444, 321));
        Login_GUIClass->setMaximumSize(QSize(1332, 963));
        Login_GUIClass->setMouseTracking(false);
        centralWidget = new QWidget(Login_GUIClass);
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
        font.setFamilies({QString::fromUtf8("Cambria")});
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
        font1.setFamilies({QString::fromUtf8("Cambria")});
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
        font2.setFamilies({QString::fromUtf8("Terminal")});
        font2.setPointSize(14);
        font2.setBold(true);
        label->setFont(font2);
        Login_GUIClass->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(Login_GUIClass);
        menuBar->setObjectName("menuBar");
        menuBar->setGeometry(QRect(0, 0, 732, 26));
        Login_GUIClass->setMenuBar(menuBar);
        mainToolBar = new QToolBar(Login_GUIClass);
        mainToolBar->setObjectName("mainToolBar");
        Login_GUIClass->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(Login_GUIClass);
        statusBar->setObjectName("statusBar");
        Login_GUIClass->setStatusBar(statusBar);

        retranslateUi(Login_GUIClass);

        QMetaObject::connectSlotsByName(Login_GUIClass);
    } // setupUi

    void retranslateUi(QMainWindow *Login_GUIClass)
    {
        Login_GUIClass->setWindowTitle(QCoreApplication::translate("Login_GUIClass", "Login_GUI", nullptr));
        groupBox->setTitle(QString());
        pushButton_login->setText(QCoreApplication::translate("Login_GUIClass", "Log In", nullptr));
        label_username->setText(QCoreApplication::translate("Login_GUIClass", "Username", nullptr));
        label_password->setText(QCoreApplication::translate("Login_GUIClass", "Password ", nullptr));
        label_signup->setText(QCoreApplication::translate("Login_GUIClass", "Don't have an account?", nullptr));
        pushButton_signup->setText(QCoreApplication::translate("Login_GUIClass", "Sign Up", nullptr));
        label->setText(QCoreApplication::translate("Login_GUIClass", "Welcome to our Movie Suggestion App!", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Login_GUIClass: public Ui_Login_GUIClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LOGIN_GUI_H
