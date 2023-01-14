/********************************************************************************
** Form generated from reading UI file 'Wishlist_page_GUI.ui'
**
** Created by: Qt User Interface Compiler version 6.4.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WISHLIST_PAGE_GUI_H
#define UI_WISHLIST_PAGE_GUI_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QScrollArea>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Wishlist_page_GUIClass
{
public:
    QScrollArea *scrollArea;
    QWidget *scrollAreaWidgetContents;
    QLabel *Movie1;
    QLabel *Movie2;
    QLabel *Movie3;
    QLabel *Movie4;
    QLabel *Movie5;
    QLabel *Movie6;
    QLabel *Movie7;
    QLabel *Movie8;
    QLabel *Movie9;
    QLabel *Movie10;
    QLabel *Movie14;
    QLabel *Movie13;
    QLabel *Movie12;
    QLabel *Movie11;
    QLabel *Movie15;
    QLabel *Title_text;

    void setupUi(QWidget *Wishlist_page_GUIClass)
    {
        if (Wishlist_page_GUIClass->objectName().isEmpty())
            Wishlist_page_GUIClass->setObjectName("Wishlist_page_GUIClass");
        Wishlist_page_GUIClass->resize(981, 510);
        scrollArea = new QScrollArea(Wishlist_page_GUIClass);
        scrollArea->setObjectName("scrollArea");
        scrollArea->setGeometry(QRect(10, -10, 971, 521));
        scrollArea->setWidgetResizable(true);
        scrollAreaWidgetContents = new QWidget();
        scrollAreaWidgetContents->setObjectName("scrollAreaWidgetContents");
        scrollAreaWidgetContents->setGeometry(QRect(0, 0, 969, 519));
        Movie1 = new QLabel(scrollAreaWidgetContents);
        Movie1->setObjectName("Movie1");
        Movie1->setGeometry(QRect(0, 100, 311, 51));
        QFont font;
        font.setFamilies({QString::fromUtf8("Cambria")});
        font.setPointSize(10);
        Movie1->setFont(font);
        Movie2 = new QLabel(scrollAreaWidgetContents);
        Movie2->setObjectName("Movie2");
        Movie2->setGeometry(QRect(0, 190, 311, 51));
        Movie2->setFont(font);
        Movie3 = new QLabel(scrollAreaWidgetContents);
        Movie3->setObjectName("Movie3");
        Movie3->setGeometry(QRect(0, 280, 311, 51));
        Movie3->setFont(font);
        Movie4 = new QLabel(scrollAreaWidgetContents);
        Movie4->setObjectName("Movie4");
        Movie4->setGeometry(QRect(0, 370, 311, 51));
        Movie4->setFont(font);
        Movie5 = new QLabel(scrollAreaWidgetContents);
        Movie5->setObjectName("Movie5");
        Movie5->setGeometry(QRect(0, 460, 311, 51));
        Movie5->setFont(font);
        Movie6 = new QLabel(scrollAreaWidgetContents);
        Movie6->setObjectName("Movie6");
        Movie6->setGeometry(QRect(320, 100, 311, 51));
        Movie6->setFont(font);
        Movie7 = new QLabel(scrollAreaWidgetContents);
        Movie7->setObjectName("Movie7");
        Movie7->setGeometry(QRect(320, 190, 311, 51));
        Movie7->setFont(font);
        Movie8 = new QLabel(scrollAreaWidgetContents);
        Movie8->setObjectName("Movie8");
        Movie8->setGeometry(QRect(320, 280, 311, 51));
        Movie8->setFont(font);
        Movie9 = new QLabel(scrollAreaWidgetContents);
        Movie9->setObjectName("Movie9");
        Movie9->setGeometry(QRect(320, 370, 311, 51));
        Movie9->setFont(font);
        Movie10 = new QLabel(scrollAreaWidgetContents);
        Movie10->setObjectName("Movie10");
        Movie10->setGeometry(QRect(320, 460, 311, 51));
        Movie10->setFont(font);
        Movie14 = new QLabel(scrollAreaWidgetContents);
        Movie14->setObjectName("Movie14");
        Movie14->setGeometry(QRect(640, 370, 311, 51));
        Movie14->setFont(font);
        Movie13 = new QLabel(scrollAreaWidgetContents);
        Movie13->setObjectName("Movie13");
        Movie13->setGeometry(QRect(640, 280, 311, 51));
        Movie13->setFont(font);
        Movie12 = new QLabel(scrollAreaWidgetContents);
        Movie12->setObjectName("Movie12");
        Movie12->setGeometry(QRect(640, 190, 311, 51));
        Movie12->setFont(font);
        Movie11 = new QLabel(scrollAreaWidgetContents);
        Movie11->setObjectName("Movie11");
        Movie11->setGeometry(QRect(640, 100, 311, 51));
        Movie11->setFont(font);
        Movie15 = new QLabel(scrollAreaWidgetContents);
        Movie15->setObjectName("Movie15");
        Movie15->setGeometry(QRect(640, 460, 311, 51));
        Movie15->setFont(font);
        Title_text = new QLabel(scrollAreaWidgetContents);
        Title_text->setObjectName("Title_text");
        Title_text->setGeometry(QRect(330, 30, 291, 16));
        QFont font1;
        font1.setFamilies({QString::fromUtf8("Terminal")});
        font1.setPointSize(12);
        Title_text->setFont(font1);
        scrollArea->setWidget(scrollAreaWidgetContents);

        retranslateUi(Wishlist_page_GUIClass);

        QMetaObject::connectSlotsByName(Wishlist_page_GUIClass);
    } // setupUi

    void retranslateUi(QWidget *Wishlist_page_GUIClass)
    {
        Wishlist_page_GUIClass->setWindowTitle(QCoreApplication::translate("Wishlist_page_GUIClass", "Wishlist_page_GUI", nullptr));
        Movie1->setText(QString());
        Movie2->setText(QString());
        Movie3->setText(QString());
        Movie4->setText(QString());
        Movie5->setText(QString());
        Movie6->setText(QString());
        Movie7->setText(QString());
        Movie8->setText(QString());
        Movie9->setText(QString());
        Movie10->setText(QString());
        Movie14->setText(QString());
        Movie13->setText(QString());
        Movie12->setText(QString());
        Movie11->setText(QString());
        Movie15->setText(QString());
        Title_text->setText(QCoreApplication::translate("Wishlist_page_GUIClass", "This is your Wishlist :)", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Wishlist_page_GUIClass: public Ui_Wishlist_page_GUIClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WISHLIST_PAGE_GUI_H
