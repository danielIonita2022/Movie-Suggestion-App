/********************************************************************************
** Form generated from reading UI file 'Get_sim_mov_ser_page_GUI.ui'
**
** Created by: Qt User Interface Compiler version 6.4.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_GET_SIM_MOV_SER_PAGE_GUI_H
#define UI_GET_SIM_MOV_SER_PAGE_GUI_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QScrollArea>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Get_sim_mov_ser_page_GUIClass
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
    QLabel *Title_text;

    void setupUi(QWidget *Get_sim_mov_ser_page_GUIClass)
    {
        if (Get_sim_mov_ser_page_GUIClass->objectName().isEmpty())
            Get_sim_mov_ser_page_GUIClass->setObjectName("Get_sim_mov_ser_page_GUIClass");
        Get_sim_mov_ser_page_GUIClass->resize(717, 504);
        scrollArea = new QScrollArea(Get_sim_mov_ser_page_GUIClass);
        scrollArea->setObjectName("scrollArea");
        scrollArea->setGeometry(QRect(0, 0, 713, 502));
        scrollArea->setWidgetResizable(true);
        scrollAreaWidgetContents = new QWidget();
        scrollAreaWidgetContents->setObjectName("scrollAreaWidgetContents");
        scrollAreaWidgetContents->setGeometry(QRect(0, 0, 711, 500));
        Movie1 = new QLabel(scrollAreaWidgetContents);
        Movie1->setObjectName("Movie1");
        Movie1->setGeometry(QRect(40, 60, 181, 51));
        QFont font;
        font.setFamilies({QString::fromUtf8("Cambria")});
        font.setPointSize(11);
        Movie1->setFont(font);
        Movie2 = new QLabel(scrollAreaWidgetContents);
        Movie2->setObjectName("Movie2");
        Movie2->setGeometry(QRect(40, 150, 181, 51));
        Movie2->setFont(font);
        Movie3 = new QLabel(scrollAreaWidgetContents);
        Movie3->setObjectName("Movie3");
        Movie3->setGeometry(QRect(40, 240, 181, 51));
        Movie3->setFont(font);
        Movie4 = new QLabel(scrollAreaWidgetContents);
        Movie4->setObjectName("Movie4");
        Movie4->setGeometry(QRect(40, 330, 181, 51));
        Movie4->setFont(font);
        Movie5 = new QLabel(scrollAreaWidgetContents);
        Movie5->setObjectName("Movie5");
        Movie5->setGeometry(QRect(40, 420, 181, 51));
        Movie5->setFont(font);
        Movie6 = new QLabel(scrollAreaWidgetContents);
        Movie6->setObjectName("Movie6");
        Movie6->setGeometry(QRect(450, 60, 181, 51));
        Movie6->setFont(font);
        Movie7 = new QLabel(scrollAreaWidgetContents);
        Movie7->setObjectName("Movie7");
        Movie7->setGeometry(QRect(450, 150, 181, 51));
        Movie7->setFont(font);
        Movie8 = new QLabel(scrollAreaWidgetContents);
        Movie8->setObjectName("Movie8");
        Movie8->setGeometry(QRect(450, 240, 181, 51));
        Movie8->setFont(font);
        Movie9 = new QLabel(scrollAreaWidgetContents);
        Movie9->setObjectName("Movie9");
        Movie9->setGeometry(QRect(450, 330, 181, 51));
        Movie9->setFont(font);
        Movie10 = new QLabel(scrollAreaWidgetContents);
        Movie10->setObjectName("Movie10");
        Movie10->setGeometry(QRect(450, 420, 181, 51));
        Movie10->setFont(font);
        Title_text = new QLabel(scrollAreaWidgetContents);
        Title_text->setObjectName("Title_text");
        Title_text->setGeometry(QRect(30, 10, 651, 31));
        QFont font1;
        font1.setFamilies({QString::fromUtf8("Terminal")});
        font1.setPointSize(12);
        Title_text->setFont(font1);
        scrollArea->setWidget(scrollAreaWidgetContents);

        retranslateUi(Get_sim_mov_ser_page_GUIClass);

        QMetaObject::connectSlotsByName(Get_sim_mov_ser_page_GUIClass);
    } // setupUi

    void retranslateUi(QWidget *Get_sim_mov_ser_page_GUIClass)
    {
        Get_sim_mov_ser_page_GUIClass->setWindowTitle(QCoreApplication::translate("Get_sim_mov_ser_page_GUIClass", "Get_sim_mov_ser_page_GUI", nullptr));
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
        Title_text->setText(QCoreApplication::translate("Get_sim_mov_ser_page_GUIClass", "Here are 10 movies/series similar with previous one :)", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Get_sim_mov_ser_page_GUIClass: public Ui_Get_sim_mov_ser_page_GUIClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_GET_SIM_MOV_SER_PAGE_GUI_H
