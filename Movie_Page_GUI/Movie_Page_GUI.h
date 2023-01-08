#pragma once

#include <QWidget>
#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QScrollArea>
#include <QtWidgets/QWidget>
#include "Storages.h"

class Movie_Page_GUI : public QWidget
{
    //Q_OBJECT
public:
    QGridLayout* gridLayout;
    QScrollArea* scrollArea;
    QWidget* scrollAreaWidgetContents;
    QLabel* Movie_Title;
    QLabel* Movie_Description;
    QLabel* Movie_director;
    QLabel* Movie_Cast;
    QLabel* Cast_text;
    QLabel* Country_text;
    QLabel* Movie_Country;
    QLabel* Date_added_text;
    QLabel* Movie_date_added;
    QLabel* Release_year_text;
    QLabel* Movie_release_year;
    QLabel* Duration_text;
    QLabel* Type_text;
    QLabel* Movie_type;
    QLabel* Movie_duration;
    QLabel* Genres_text;
    QLabel* Movie_genres;
    QLabel* Rating_text;
    QLabel* Movie_rating;
    QPushButton* Add_to_wishlist;
    QPushButton* Add_to_seen;
    QPushButton* Like_button;
    QPushButton* Dislike_button;
	QPushButton* Back_to_homepage;
    QLabel* Director_text;

    void setupUi();
    void retranslateUi();

    void showDetails(std::string title);

    Movie_Page_GUI();
    ~Movie_Page_GUI();
private:
};

