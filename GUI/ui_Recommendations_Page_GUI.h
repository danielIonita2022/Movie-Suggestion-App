/********************************************************************************
** Form generated from reading UI file 'Recommendations_Page_GUI.ui'
**
** Created by: Qt User Interface Compiler version 6.4.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_RECOMMENDATIONS_PAGE_GUI_H
#define UI_RECOMMENDATIONS_PAGE_GUI_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QScrollArea>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Recommendations_Page_GUIClass
{
public:
    QAction *actionHome;
    QAction *actionMy_profile;
    QAction *actionView_recommendations;
    QAction *actionSign_out;
    QWidget *centralWidget;
    QGridLayout *gridLayout;
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
    QMenuBar *menuBar;
    QMenu *menuHome;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *Recommendations_Page_GUIClass)
    {
        if (Recommendations_Page_GUIClass->objectName().isEmpty())
            Recommendations_Page_GUIClass->setObjectName("Recommendations_Page_GUIClass");
        Recommendations_Page_GUIClass->resize(673, 488);
        actionHome = new QAction(Recommendations_Page_GUIClass);
        actionHome->setObjectName("actionHome");
        actionMy_profile = new QAction(Recommendations_Page_GUIClass);
        actionMy_profile->setObjectName("actionMy_profile");
        actionView_recommendations = new QAction(Recommendations_Page_GUIClass);
        actionView_recommendations->setObjectName("actionView_recommendations");
        actionSign_out = new QAction(Recommendations_Page_GUIClass);
        actionSign_out->setObjectName("actionSign_out");
        centralWidget = new QWidget(Recommendations_Page_GUIClass);
        centralWidget->setObjectName("centralWidget");
        gridLayout = new QGridLayout(centralWidget);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName("gridLayout");
        scrollArea = new QScrollArea(centralWidget);
        scrollArea->setObjectName("scrollArea");
        scrollArea->setWidgetResizable(true);
        scrollAreaWidgetContents = new QWidget();
        scrollAreaWidgetContents->setObjectName("scrollAreaWidgetContents");
        scrollAreaWidgetContents->setGeometry(QRect(0, 0, 653, 405));
        Movie1 = new QLabel(scrollAreaWidgetContents);
        Movie1->setObjectName("Movie1");
        Movie1->setGeometry(QRect(40, 40, 181, 51));
        QFont font;
        font.setFamilies({QString::fromUtf8("Cambria")});
        font.setPointSize(11);
        Movie1->setFont(font);
        Movie2 = new QLabel(scrollAreaWidgetContents);
        Movie2->setObjectName("Movie2");
        Movie2->setGeometry(QRect(40, 130, 181, 51));
        Movie2->setFont(font);
        Movie3 = new QLabel(scrollAreaWidgetContents);
        Movie3->setObjectName("Movie3");
        Movie3->setGeometry(QRect(40, 220, 181, 51));
        Movie3->setFont(font);
        Movie4 = new QLabel(scrollAreaWidgetContents);
        Movie4->setObjectName("Movie4");
        Movie4->setGeometry(QRect(40, 310, 181, 51));
        Movie4->setFont(font);
        Movie5 = new QLabel(scrollAreaWidgetContents);
        Movie5->setObjectName("Movie5");
        Movie5->setGeometry(QRect(40, 400, 181, 51));
        Movie5->setFont(font);
        Movie6 = new QLabel(scrollAreaWidgetContents);
        Movie6->setObjectName("Movie6");
        Movie6->setGeometry(QRect(450, 40, 181, 51));
        Movie6->setFont(font);
        Movie7 = new QLabel(scrollAreaWidgetContents);
        Movie7->setObjectName("Movie7");
        Movie7->setGeometry(QRect(450, 130, 181, 51));
        Movie7->setFont(font);
        Movie8 = new QLabel(scrollAreaWidgetContents);
        Movie8->setObjectName("Movie8");
        Movie8->setGeometry(QRect(450, 220, 181, 51));
        Movie8->setFont(font);
        Movie9 = new QLabel(scrollAreaWidgetContents);
        Movie9->setObjectName("Movie9");
        Movie9->setGeometry(QRect(450, 310, 181, 51));
        Movie9->setFont(font);
        Movie10 = new QLabel(scrollAreaWidgetContents);
        Movie10->setObjectName("Movie10");
        Movie10->setGeometry(QRect(450, 400, 181, 51));
        Movie10->setFont(font);
        Title_text = new QLabel(scrollAreaWidgetContents);
        Title_text->setObjectName("Title_text");
        Title_text->setGeometry(QRect(40, 0, 581, 31));
        QFont font1;
        font1.setFamilies({QString::fromUtf8("Terminal")});
        font1.setPointSize(12);
        Title_text->setFont(font1);
        scrollArea->setWidget(scrollAreaWidgetContents);

        gridLayout->addWidget(scrollArea, 0, 1, 1, 1);

        Recommendations_Page_GUIClass->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(Recommendations_Page_GUIClass);
        menuBar->setObjectName("menuBar");
        menuBar->setGeometry(QRect(0, 0, 673, 26));
        menuHome = new QMenu(menuBar);
        menuHome->setObjectName("menuHome");
        Recommendations_Page_GUIClass->setMenuBar(menuBar);
        mainToolBar = new QToolBar(Recommendations_Page_GUIClass);
        mainToolBar->setObjectName("mainToolBar");
        Recommendations_Page_GUIClass->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(Recommendations_Page_GUIClass);
        statusBar->setObjectName("statusBar");
        Recommendations_Page_GUIClass->setStatusBar(statusBar);

        menuBar->addAction(menuHome->menuAction());
        menuHome->addAction(actionHome);
        menuHome->addAction(actionMy_profile);
        menuHome->addAction(actionView_recommendations);
        menuHome->addAction(actionSign_out);

        retranslateUi(Recommendations_Page_GUIClass);

        QMetaObject::connectSlotsByName(Recommendations_Page_GUIClass);
    } // setupUi

    void retranslateUi(QMainWindow *Recommendations_Page_GUIClass)
    {
        Recommendations_Page_GUIClass->setWindowTitle(QCoreApplication::translate("Recommendations_Page_GUIClass", "Recommendations_Page_GUI", nullptr));
        actionHome->setText(QCoreApplication::translate("Recommendations_Page_GUIClass", "Home", nullptr));
        actionMy_profile->setText(QCoreApplication::translate("Recommendations_Page_GUIClass", "My Profile", nullptr));
        actionView_recommendations->setText(QCoreApplication::translate("Recommendations_Page_GUIClass", "View Recommendations", nullptr));
        actionSign_out->setText(QCoreApplication::translate("Recommendations_Page_GUIClass", "Sign Out", nullptr));
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
        Title_text->setText(QCoreApplication::translate("Recommendations_Page_GUIClass", "Here are 10 movies/series reccomanded for you :)", nullptr));
        menuHome->setTitle(QCoreApplication::translate("Recommendations_Page_GUIClass", "|||", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Recommendations_Page_GUIClass: public Ui_Recommendations_Page_GUIClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_RECOMMENDATIONS_PAGE_GUI_H