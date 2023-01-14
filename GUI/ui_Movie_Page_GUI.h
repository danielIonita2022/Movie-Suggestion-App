/********************************************************************************
** Form generated from reading UI file 'Movie_Page_GUI.ui'
**
** Created by: Qt User Interface Compiler version 6.4.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MOVIE_PAGE_GUI_H
#define UI_MOVIE_PAGE_GUI_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QScrollArea>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Movie
{
public:
    QAction *actionHome;
    QAction *actionMy_profile;
    QAction *actionSign_Out;
    QWidget *centralwidget;
    QScrollArea *scrollArea;
    QWidget *scrollAreaWidgetContents;
    QLabel *Movie_Title;
    QLabel *Movie_Description;
    QLabel *Movie_director;
    QLabel *Movie_Cast;
    QLabel *Cast_text;
    QLabel *Country_text;
    QLabel *Movie_Country;
    QLabel *Date_added_text;
    QLabel *Movie_date_added;
    QLabel *Release_year_text;
    QLabel *Movie_release_year;
    QLabel *Duration_text;
    QLabel *Type_text;
    QLabel *Movie_type;
    QLabel *Movie_duration;
    QLabel *Genres_text;
    QLabel *Movie_genres;
    QLabel *Rating_text;
    QLabel *Movie_rating;
    QPushButton *Add_to_wishlist;
    QPushButton *Add_to_seen;
    QPushButton *Like_button;
    QPushButton *Dislike_button;
    QLabel *Director_text;
    QPushButton *Back_to_homepage;
    QPushButton *Get_sim_mov_ser;

    void setupUi(QMainWindow *Movie)
    {
        if (Movie->objectName().isEmpty())
            Movie->setObjectName("Movie");
        Movie->resize(942, 587);
        actionHome = new QAction(Movie);
        actionHome->setObjectName("actionHome");
        actionMy_profile = new QAction(Movie);
        actionMy_profile->setObjectName("actionMy_profile");
        actionSign_Out = new QAction(Movie);
        actionSign_Out->setObjectName("actionSign_Out");
        centralwidget = new QWidget(Movie);
        centralwidget->setObjectName("centralwidget");
        scrollArea = new QScrollArea(centralwidget);
        scrollArea->setObjectName("scrollArea");
        scrollArea->setGeometry(QRect(0, 0, 942, 588));
        scrollArea->setWidgetResizable(true);
        scrollAreaWidgetContents = new QWidget();
        scrollAreaWidgetContents->setObjectName("scrollAreaWidgetContents");
        scrollAreaWidgetContents->setGeometry(QRect(0, 0, 940, 586));
        Movie_Title = new QLabel(scrollAreaWidgetContents);
        Movie_Title->setObjectName("Movie_Title");
        Movie_Title->setGeometry(QRect(260, 10, 381, 61));
        QFont font;
        font.setFamilies({QString::fromUtf8("Terminal")});
        font.setPointSize(14);
        font.setBold(true);
        Movie_Title->setFont(font);
        Movie_Description = new QLabel(scrollAreaWidgetContents);
        Movie_Description->setObjectName("Movie_Description");
        Movie_Description->setGeometry(QRect(30, 90, 881, 181));
        QFont font1;
        font1.setFamilies({QString::fromUtf8("Cambria")});
        font1.setPointSize(11);
        Movie_Description->setFont(font1);
        Movie_director = new QLabel(scrollAreaWidgetContents);
        Movie_director->setObjectName("Movie_director");
        Movie_director->setGeometry(QRect(90, 340, 821, 41));
        Movie_director->setFont(font1);
        Movie_Cast = new QLabel(scrollAreaWidgetContents);
        Movie_Cast->setObjectName("Movie_Cast");
        Movie_Cast->setGeometry(QRect(60, 380, 861, 41));
        Movie_Cast->setFont(font1);
        Cast_text = new QLabel(scrollAreaWidgetContents);
        Cast_text->setObjectName("Cast_text");
        Cast_text->setGeometry(QRect(30, 380, 61, 41));
        Cast_text->setFont(font1);
        Country_text = new QLabel(scrollAreaWidgetContents);
        Country_text->setObjectName("Country_text");
        Country_text->setGeometry(QRect(30, 420, 61, 41));
        Country_text->setFont(font1);
        Movie_Country = new QLabel(scrollAreaWidgetContents);
        Movie_Country->setObjectName("Movie_Country");
        Movie_Country->setGeometry(QRect(90, 420, 141, 41));
        Movie_Country->setFont(font1);
        Date_added_text = new QLabel(scrollAreaWidgetContents);
        Date_added_text->setObjectName("Date_added_text");
        Date_added_text->setGeometry(QRect(300, 420, 81, 41));
        Date_added_text->setFont(font1);
        Movie_date_added = new QLabel(scrollAreaWidgetContents);
        Movie_date_added->setObjectName("Movie_date_added");
        Movie_date_added->setGeometry(QRect(380, 420, 211, 41));
        Movie_date_added->setFont(font1);
        Release_year_text = new QLabel(scrollAreaWidgetContents);
        Release_year_text->setObjectName("Release_year_text");
        Release_year_text->setGeometry(QRect(650, 420, 91, 41));
        Release_year_text->setFont(font1);
        Movie_release_year = new QLabel(scrollAreaWidgetContents);
        Movie_release_year->setObjectName("Movie_release_year");
        Movie_release_year->setGeometry(QRect(740, 420, 201, 41));
        Movie_release_year->setFont(font1);
        Duration_text = new QLabel(scrollAreaWidgetContents);
        Duration_text->setObjectName("Duration_text");
        Duration_text->setGeometry(QRect(300, 300, 61, 41));
        Duration_text->setFont(font1);
        Type_text = new QLabel(scrollAreaWidgetContents);
        Type_text->setObjectName("Type_text");
        Type_text->setGeometry(QRect(30, 300, 61, 41));
        Type_text->setFont(font1);
        Movie_type = new QLabel(scrollAreaWidgetContents);
        Movie_type->setObjectName("Movie_type");
        Movie_type->setGeometry(QRect(90, 300, 161, 41));
        Movie_type->setFont(font1);
        Movie_duration = new QLabel(scrollAreaWidgetContents);
        Movie_duration->setObjectName("Movie_duration");
        Movie_duration->setGeometry(QRect(360, 300, 261, 41));
        Movie_duration->setFont(font1);
        Genres_text = new QLabel(scrollAreaWidgetContents);
        Genres_text->setObjectName("Genres_text");
        Genres_text->setGeometry(QRect(30, 470, 61, 41));
        Genres_text->setFont(font1);
        Movie_genres = new QLabel(scrollAreaWidgetContents);
        Movie_genres->setObjectName("Movie_genres");
        Movie_genres->setGeometry(QRect(90, 470, 821, 41));
        Movie_genres->setFont(font1);
        Rating_text = new QLabel(scrollAreaWidgetContents);
        Rating_text->setObjectName("Rating_text");
        Rating_text->setGeometry(QRect(650, 300, 61, 41));
        Rating_text->setFont(font1);
        Movie_rating = new QLabel(scrollAreaWidgetContents);
        Movie_rating->setObjectName("Movie_rating");
        Movie_rating->setGeometry(QRect(710, 300, 111, 41));
        Movie_rating->setFont(font1);
        Add_to_wishlist = new QPushButton(scrollAreaWidgetContents);
        Add_to_wishlist->setObjectName("Add_to_wishlist");
        Add_to_wishlist->setGeometry(QRect(110, 540, 121, 31));
        Add_to_wishlist->setFont(font1);
        Add_to_seen = new QPushButton(scrollAreaWidgetContents);
        Add_to_seen->setObjectName("Add_to_seen");
        Add_to_seen->setGeometry(QRect(280, 540, 131, 31));
        Add_to_seen->setFont(font1);
        Like_button = new QPushButton(scrollAreaWidgetContents);
        Like_button->setObjectName("Like_button");
        Like_button->setGeometry(QRect(710, 540, 51, 24));
        Like_button->setFont(font1);
        Dislike_button = new QPushButton(scrollAreaWidgetContents);
        Dislike_button->setObjectName("Dislike_button");
        Dislike_button->setGeometry(QRect(790, 540, 61, 24));
        Dislike_button->setFont(font1);
        Director_text = new QLabel(scrollAreaWidgetContents);
        Director_text->setObjectName("Director_text");
        Director_text->setGeometry(QRect(30, 340, 61, 41));
        Director_text->setFont(font1);
        Back_to_homepage = new QPushButton(scrollAreaWidgetContents);
        Back_to_homepage->setObjectName("Back_to_homepage");
        Back_to_homepage->setGeometry(QRect(10, 10, 131, 31));
        Back_to_homepage->setFont(font1);
        Get_sim_mov_ser = new QPushButton(scrollAreaWidgetContents);
        Get_sim_mov_ser->setObjectName("Get_sim_mov_ser");
        Get_sim_mov_ser->setGeometry(QRect(470, 540, 171, 31));
        Get_sim_mov_ser->setFont(font1);
        scrollArea->setWidget(scrollAreaWidgetContents);
        Movie->setCentralWidget(centralwidget);

        retranslateUi(Movie);

        QMetaObject::connectSlotsByName(Movie);
    } // setupUi

    void retranslateUi(QMainWindow *Movie)
    {
        Movie->setWindowTitle(QCoreApplication::translate("Movie", "MainWindow", nullptr));
        actionHome->setText(QCoreApplication::translate("Movie", "Home", nullptr));
        actionMy_profile->setText(QCoreApplication::translate("Movie", "My profile", nullptr));
        actionSign_Out->setText(QCoreApplication::translate("Movie", "Sign Out", nullptr));
        Movie_Title->setText(QString());
        Movie_Description->setText(QString());
        Movie_director->setText(QString());
        Movie_Cast->setText(QString());
        Cast_text->setText(QCoreApplication::translate("Movie", "Cast:", nullptr));
        Country_text->setText(QCoreApplication::translate("Movie", "Country:", nullptr));
        Movie_Country->setText(QString());
        Date_added_text->setText(QCoreApplication::translate("Movie", "Date added:", nullptr));
        Movie_date_added->setText(QString());
        Release_year_text->setText(QCoreApplication::translate("Movie", "Release year:", nullptr));
        Movie_release_year->setText(QString());
        Duration_text->setText(QCoreApplication::translate("Movie", "Duration:", nullptr));
        Type_text->setText(QCoreApplication::translate("Movie", "Type:", nullptr));
        Movie_type->setText(QString());
        Movie_duration->setText(QString());
        Genres_text->setText(QCoreApplication::translate("Movie", "Genres:", nullptr));
        Movie_genres->setText(QString());
        Rating_text->setText(QCoreApplication::translate("Movie", "Rating:", nullptr));
        Movie_rating->setText(QString());
        Add_to_wishlist->setText(QCoreApplication::translate("Movie", "Add to Wishlist", nullptr));
        Add_to_seen->setText(QCoreApplication::translate("Movie", "Mark as seen", nullptr));
        Like_button->setText(QCoreApplication::translate("Movie", "Like", nullptr));
        Dislike_button->setText(QCoreApplication::translate("Movie", "Dislike", nullptr));
        Director_text->setText(QCoreApplication::translate("Movie", "Director:", nullptr));
        Back_to_homepage->setText(QCoreApplication::translate("Movie", "Back to homepage", nullptr));
        Get_sim_mov_ser->setText(QCoreApplication::translate("Movie", "Get similar movies/series", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Movie: public Ui_Movie {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MOVIE_PAGE_GUI_H
