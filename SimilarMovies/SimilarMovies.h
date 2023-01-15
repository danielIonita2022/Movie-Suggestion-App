#pragma once
#include <QtCore/QVariant>
#include <QtCore>
#include <QtGui>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QScrollArea>
#include <QtWidgets/QWidget>
#include <QMainWindow>
#include "Storages.h"
#include <QtWidgets>

class SimilarMovies : public QMainWindow
{
public:
	QWidget* centralWidget;
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
    QPushButton* BackToMoviePage;

	SimilarMovies(const Movie& movie);
    void setupUi();
    void retranslateUi();
    void ShowSimilar();
    
private:
    Movie m_movie;
};