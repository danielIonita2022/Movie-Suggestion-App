#pragma once
#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QScrollArea>
#include <QtWidgets/QWidget>
#include <QMainWindow>
#include "Storages.h"
#include <QtWidgets>

class SeenMovies : public QMainWindow
{
public:
    QGridLayout* gridLayout;
    QScrollArea* scrollArea;
    QWidget* centralWidget;
    QWidget* scrollAreaWidgetContents;
    QLabel* Title_text;
    QLabel* Movie15;
    QLabel* Movie13;
    QLabel* Movie9;
    QLabel* Movie11;
    QLabel* Movie5;
    QLabel* Movie1;
    QLabel* Movie12;
    QLabel* Movie8;
    QLabel* Movie7;
    QLabel* Movie6;
    QLabel* Movie4;
    QLabel* Movie10;
    QLabel* Movie3;
    QLabel* Movie14;
    QLabel* Movie2;
    QLabel* Movie4_like;
    QLabel* Movie1_like;
    QLabel* Movie5_like;
    QLabel* Movie2_like;
    QLabel* Movie3_like;
    QLabel* Movie9_like;
    QLabel* Movie6_like;
    QLabel* Movie7_like;
    QLabel* Movie10_like;
    QLabel* Movie8_like;
    QLabel* Movie15_like;
    QLabel* Movie11_like;
    QLabel* Movie12_like;
    QLabel* Movie14_like;
    QLabel* Movie13_like;
    QPushButton* BackToUserPage;

    SeenMovies(const User&& user);
    bool likedOrDisliked(const Seen& movie);
    void setupUi();
    void retranslateUi();
    void addSeenMovies();

private:
    User m_currentUser;
};

