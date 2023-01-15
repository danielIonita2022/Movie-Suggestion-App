#pragma once
#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QScrollArea>
#include <QtWidgets/QWidget>
#include "Storages.h"
#include "Recommended.h"

class Recommended_GUI : public QMainWindow
{
public:
    QAction* actionHome;
    QAction* actionMy_profile;
    QAction* actionView_recommendations;
    QAction* actionSign_out;
    QWidget* centralWidget;
    QGridLayout* gridLayout;
    QScrollArea* scrollArea;
    QWidget* scrollAreaWidgetContents;
    QLabel* Movie1;
    QLabel* Movie2;
    QLabel* Movie3;
    QLabel* Movie4;
    QLabel* Movie5;
    QLabel* Movie6;
    QLabel* Movie7;
    QLabel* Movie8;
    QLabel* Movie9;
    QLabel* Movie10;
    QLabel* Title_text;
    QPushButton* Back_to_homepage;

    Recommended_GUI(const User&& user);
    void setupUi();
    void retranslateUi();
    void setTitle(QLabel* Movie, const std::string& title);
    void addRecommendations();
    void printWishlistRecs(const std::array<std::string, 5>& titles);
    void printSeenRecs(const std::array<std::string, 5>& titles);

private:
    User m_currentUser;
};

