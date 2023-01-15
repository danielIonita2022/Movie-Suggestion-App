#pragma once

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QScrollArea>
#include <QtWidgets/QWidget>
#include <QtWidgets/QGridLayout>
#include <QtWidgets>
#include <iostream>
#include <fstream>
#include <string>
#include "Storages.h"
#include "SimilarMovies.h"

class Movie_Page_GUI : public QMainWindow
{
        
public:
    QGridLayout* gridLayout;
    QScrollArea* scrollArea;
    QWidget* centralwidget;
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
    QLabel* Director_text;
    QPushButton* Back_to_homepage;
    QPushButton* Get_sim_mov_ser;

    void setupUi();
    void retranslateUi();
    bool alreadySeen();
    bool alreadyWishlisted();
	void onAddToWishlistClicked();
	void onAddToSeenClicked();
    void onGetSimilarMoviesClicked();
    Seen findSeenMovie(const Storages& storage);
    void onLikeClicked();
	void onDislikeClicked();
    void onBackToMoviePage();
    void showDetails();

    Movie_Page_GUI(const User&& user, const Movie& movie);
    ~Movie_Page_GUI();
    
private:
    User m_currentUser;
	Movie m_movie;
	SimilarMovies* m_similarMovies;
};

