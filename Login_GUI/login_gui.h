#pragma once
#pragma warning(disable : 4996)
#include "LogIn.h"
#include "User.h"
#include "SearchPage.h"
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
#include "Storages.h"

class Login_GUI : public QMainWindow
{

    Q_OBJECT
public:
    QWidget* centralWidget;
    QGroupBox* groupBox;
    QPushButton* pushButton_login;
    QWidget* layoutWidget;
    QVBoxLayout* verticalLayout;
    QHBoxLayout* horizontalLayout;
    QLabel* label_username;
    QLineEdit* lineEdit_insert_user;
    QHBoxLayout* horizontalLayout_2;
    QLabel* label_password;
    QLineEdit* lineEdit_insert_password;
    QWidget* layoutWidget1;
    QHBoxLayout* horizontalLayout_3;
    QLabel* label_signup;
    QPushButton* pushButton_signup;
    QLabel* label;
    QMenuBar* menuBar;
    QToolBar* mainToolBar;
    QStatusBar* statusBar;

    Login_GUI();
    void login();
    void signup();
    void onWindowClosed();
    ~Login_GUI();

    void setupUi();
    void retranslateUi();
};