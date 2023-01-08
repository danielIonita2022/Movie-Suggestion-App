#pragma once
#include <QMainWindow>
#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QScrollArea>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include "User.h"
#include "Storages.h"

class User_Page_GUI : public QMainWindow
{
    //Q_OBJECT

public:

	QPushButton* backToHomePage;
    QWidget* centralwidget;
    QGridLayout* gridLayout;
    QScrollArea* scrollArea;
    QWidget* scrollAreaWidgetContents;
    QGridLayout* gridLayout_2;
    QCheckBox* checkBox_6;
    QPushButton* pushButton;
    QLabel* label_6;
    QCheckBox* checkBox_5;
    QCheckBox* checkBox_7;
    QCheckBox* checkBox;
    QCheckBox* checkBox_2;
    QPushButton* pushButton_3;
    QCheckBox* checkBox_8;
    QCheckBox* checkBox_9;
    QCheckBox* checkBox_4;
    QHBoxLayout* horizontalLayout_7;
    QLabel* label_8;
    QCheckBox* checkBox_12;
    QCheckBox* checkBox_13;
    QHBoxLayout* horizontalLayout_6;
    QLabel* label_7;
    QLabel* lineEdit_7;
    QLabel* label_11;
    QLabel* lineEdit_8;
    QLabel* label_9;
    QCheckBox* checkBox_10;
    QVBoxLayout* verticalLayout;
    QHBoxLayout* horizontalLayout;
    QLabel* label;
    QLabel* lineEdit;
    QHBoxLayout* horizontalLayout_2;
    QLabel* label_2;
    QLabel* lineEdit_2;
    QHBoxLayout* horizontalLayout_3;
    QLabel* label_3;
    QLabel* lineEdit_3;
    QHBoxLayout* horizontalLayout_4;
    QLabel* label_4;
    QLabel* lineEdit_4;
    QHBoxLayout* horizontalLayout_5;
    QLabel* label_5;
    QLabel* lineEdit_5;
    QCheckBox* checkBox_11;
    QCheckBox* checkBox_3;
    QPushButton* pushButton_2;
    QMenuBar* menubar;

    void setupUi();
    void retranslateUi();

    void showDetails();
    void onBackToMenuClicked();

    User_Page_GUI(QWidget* parent = nullptr);
    ~User_Page_GUI();
private:

};