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
#include <QMessageBox>
#include "User.h"
#include "Storages.h"
#include "SeenMovies.h"
#include "WishlistPage.h"

class User_Page_GUI : public QMainWindow
{
    //Q_OBJECT

public:

    QPushButton* backToHomePage;
    QPushButton* saveButton;
    QPushButton* seenMovieButton;
    QPushButton* wishMovieButton;
    QWidget* centralwidget;
    QGridLayout* gridLayout;
    QScrollArea* scrollArea;
    QWidget* scrollAreaWidgetContents;
    QGridLayout* gridLayout_2;
    QCheckBox* checkBox_6;
    QLabel* label_6;
    QCheckBox* checkBox_5;
    QCheckBox* checkBox_7;
    QCheckBox* checkBox;
    QCheckBox* checkBox_2;
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
    QMenuBar* menubar;

    void setupUi();
    void retranslateUi();

    void showDetails();
    void onSaveButtonClicked();
    void onSeenButtonClicked();
    void onWishButtonClicked();
    void onBackToUserClickedSeen();
    void onBackToUserClickedWish();

    User_Page_GUI(const User&& user, QWidget* parent = nullptr);
    ~User_Page_GUI();
    
private:
    User m_currentUser;
    SeenMovies* m_seenMovies;
    WishlistPage* m_wishlistPage;
};