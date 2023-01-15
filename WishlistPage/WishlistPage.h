#pragma once
#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QScrollArea>
#include <QtWidgets/QWidget>
#include <QMainWindow>
#include "Storages.h"
#include <QtWidgets>

class WishlistPage : public QMainWindow
{
public:
    QScrollArea* scrollArea;
    QWidget* scrollAreaWidgetContents;
    QWidget* centralWidget;
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
    QLabel* Movie14;
    QLabel* Movie13;
    QLabel* Movie12;
    QLabel* Movie11;
    QLabel* Movie15;
    QLabel* Title_text;
	QPushButton* BackToUserPage;

	WishlistPage(const User&& user);
    void setupUi();
    void retranslateUi();
	void addWishlistMovies();

private:
	User m_currentUser;
};

