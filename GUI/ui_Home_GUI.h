/********************************************************************************
** Form generated from reading UI file 'Home_GUI.ui'
**
** Created by: Qt User Interface Compiler version 6.4.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_HOME_GUI_H
#define UI_HOME_GUI_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSplitter>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Home_GUIClass
{
public:
    QAction *actionHome;
    QAction *actionMy_Profile;
    QAction *actionSign_Out;
    QWidget *centralWidget;
    QGridLayout *gridLayout;
    QGroupBox *groupBox;
    QSplitter *splitter;
    QLineEdit *insert_searched_movie;
    QPushButton *pushButton;
    QMenuBar *menuBar;
    QMenu *menu;

    void setupUi(QMainWindow *Home_GUIClass)
    {
        if (Home_GUIClass->objectName().isEmpty())
            Home_GUIClass->setObjectName("Home_GUIClass");
        Home_GUIClass->resize(695, 532);
        Home_GUIClass->setStyleSheet(QString::fromUtf8(""));
        actionHome = new QAction(Home_GUIClass);
        actionHome->setObjectName("actionHome");
        actionMy_Profile = new QAction(Home_GUIClass);
        actionMy_Profile->setObjectName("actionMy_Profile");
        actionSign_Out = new QAction(Home_GUIClass);
        actionSign_Out->setObjectName("actionSign_Out");
        centralWidget = new QWidget(Home_GUIClass);
        centralWidget->setObjectName("centralWidget");
        gridLayout = new QGridLayout(centralWidget);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName("gridLayout");
        groupBox = new QGroupBox(centralWidget);
        groupBox->setObjectName("groupBox");
        groupBox->setStyleSheet(QString::fromUtf8("background-image: url(:/Login_GUI/background_image.jpg)"));

        gridLayout->addWidget(groupBox, 2, 0, 1, 1);

        splitter = new QSplitter(centralWidget);
        splitter->setObjectName("splitter");
        splitter->setOrientation(Qt::Horizontal);
        insert_searched_movie = new QLineEdit(splitter);
        insert_searched_movie->setObjectName("insert_searched_movie");
        QFont font;
        font.setFamilies({QString::fromUtf8("Cambria")});
        font.setPointSize(11);
        insert_searched_movie->setFont(font);
        insert_searched_movie->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255)"));
        splitter->addWidget(insert_searched_movie);
        pushButton = new QPushButton(splitter);
        pushButton->setObjectName("pushButton");
        QSizePolicy sizePolicy(QSizePolicy::Minimum, QSizePolicy::Minimum);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(pushButton->sizePolicy().hasHeightForWidth());
        pushButton->setSizePolicy(sizePolicy);
        pushButton->setMaximumSize(QSize(32, 32));
        pushButton->setStyleSheet(QString::fromUtf8("background image url(:/Login_GUI/search_icon.png)"));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/Login_GUI/search_icon.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton->setIcon(icon);
        pushButton->setIconSize(QSize(32, 32));
        splitter->addWidget(pushButton);

        gridLayout->addWidget(splitter, 1, 0, 1, 1);

        Home_GUIClass->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(Home_GUIClass);
        menuBar->setObjectName("menuBar");
        menuBar->setGeometry(QRect(0, 0, 695, 26));
        menu = new QMenu(menuBar);
        menu->setObjectName("menu");
        Home_GUIClass->setMenuBar(menuBar);

        menuBar->addAction(menu->menuAction());
        menu->addAction(actionHome);
        menu->addAction(actionMy_Profile);
        menu->addAction(actionSign_Out);

        retranslateUi(Home_GUIClass);

        QMetaObject::connectSlotsByName(Home_GUIClass);
    } // setupUi

    void retranslateUi(QMainWindow *Home_GUIClass)
    {
        Home_GUIClass->setWindowTitle(QCoreApplication::translate("Home_GUIClass", "Home", nullptr));
        actionHome->setText(QCoreApplication::translate("Home_GUIClass", "Home", nullptr));
        actionMy_Profile->setText(QCoreApplication::translate("Home_GUIClass", "My Profile", nullptr));
        actionSign_Out->setText(QCoreApplication::translate("Home_GUIClass", "Sign Out", nullptr));
        groupBox->setTitle(QCoreApplication::translate("Home_GUIClass", "GroupBox", nullptr));
        pushButton->setText(QString());
        menu->setTitle(QCoreApplication::translate("Home_GUIClass", "|||", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Home_GUIClass: public Ui_Home_GUIClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_HOME_GUI_H
