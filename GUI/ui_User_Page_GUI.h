/********************************************************************************
** Form generated from reading UI file 'User_Page_GUI.ui'
**
** Created by: Qt User Interface Compiler version 6.4.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_USER_PAGE_GUI_H
#define UI_USER_PAGE_GUI_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QScrollArea>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QGridLayout *gridLayout;
    QScrollArea *scrollArea;
    QWidget *scrollAreaWidgetContents;
    QGridLayout *gridLayout_2;
    QCheckBox *checkBox_6;
    QPushButton *pushButton;
    QLabel *label_6;
    QCheckBox *checkBox_5;
    QCheckBox *checkBox_7;
    QCheckBox *checkBox;
    QCheckBox *checkBox_2;
    QPushButton *pushButton_3;
    QCheckBox *checkBox_8;
    QCheckBox *checkBox_9;
    QCheckBox *checkBox_4;
    QHBoxLayout *horizontalLayout_7;
    QLabel *label_8;
    QCheckBox *checkBox_12;
    QCheckBox *checkBox_13;
    QHBoxLayout *horizontalLayout_6;
    QLabel *label_7;
    QLineEdit *lineEdit_7;
    QLabel *label_11;
    QLineEdit *lineEdit_8;
    QLabel *label_9;
    QCheckBox *checkBox_10;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QLineEdit *lineEdit;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_2;
    QLineEdit *lineEdit_2;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_3;
    QLineEdit *lineEdit_3;
    QHBoxLayout *horizontalLayout_4;
    QLabel *label_4;
    QLineEdit *lineEdit_4;
    QHBoxLayout *horizontalLayout_5;
    QLabel *label_5;
    QLineEdit *lineEdit_5;
    QCheckBox *checkBox_11;
    QCheckBox *checkBox_3;
    QPushButton *pushButton_2;
    QMenuBar *menubar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(833, 586);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        gridLayout = new QGridLayout(centralwidget);
        gridLayout->setObjectName("gridLayout");
        scrollArea = new QScrollArea(centralwidget);
        scrollArea->setObjectName("scrollArea");
        scrollArea->setWidgetResizable(true);
        scrollAreaWidgetContents = new QWidget();
        scrollAreaWidgetContents->setObjectName("scrollAreaWidgetContents");
        scrollAreaWidgetContents->setGeometry(QRect(0, 0, 813, 540));
        gridLayout_2 = new QGridLayout(scrollAreaWidgetContents);
        gridLayout_2->setObjectName("gridLayout_2");
        checkBox_6 = new QCheckBox(scrollAreaWidgetContents);
        checkBox_6->setObjectName("checkBox_6");
        QFont font;
        font.setFamilies({QString::fromUtf8("Cambria")});
        font.setPointSize(11);
        checkBox_6->setFont(font);

        gridLayout_2->addWidget(checkBox_6, 3, 1, 1, 1);

        pushButton = new QPushButton(scrollAreaWidgetContents);
        pushButton->setObjectName("pushButton");
        QSizePolicy sizePolicy(QSizePolicy::Minimum, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(pushButton->sizePolicy().hasHeightForWidth());
        pushButton->setSizePolicy(sizePolicy);
        pushButton->setMinimumSize(QSize(0, 0));
        pushButton->setSizeIncrement(QSize(0, 0));
        QFont font1;
        font1.setFamilies({QString::fromUtf8("Cambria")});
        font1.setPointSize(11);
        font1.setKerning(true);
        font1.setStyleStrategy(QFont::PreferDefault);
        pushButton->setFont(font1);
        pushButton->setCursor(QCursor(Qt::PointingHandCursor));
        pushButton->setLayoutDirection(Qt::LeftToRight);
        pushButton->setAutoFillBackground(false);
        pushButton->setAutoRepeatDelay(300);
        pushButton->setAutoDefault(true);
        pushButton->setFlat(false);

        gridLayout_2->addWidget(pushButton, 6, 2, 1, 1, Qt::AlignHCenter|Qt::AlignVCenter);

        label_6 = new QLabel(scrollAreaWidgetContents);
        label_6->setObjectName("label_6");
        QSizePolicy sizePolicy1(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(label_6->sizePolicy().hasHeightForWidth());
        label_6->setSizePolicy(sizePolicy1);
        label_6->setFont(font);
        label_6->setMargin(2);

        gridLayout_2->addWidget(label_6, 1, 0, 1, 1);

        checkBox_5 = new QCheckBox(scrollAreaWidgetContents);
        checkBox_5->setObjectName("checkBox_5");
        checkBox_5->setFont(font);

        gridLayout_2->addWidget(checkBox_5, 2, 3, 1, 1);

        checkBox_7 = new QCheckBox(scrollAreaWidgetContents);
        checkBox_7->setObjectName("checkBox_7");
        checkBox_7->setFont(font);

        gridLayout_2->addWidget(checkBox_7, 3, 2, 1, 1);

        checkBox = new QCheckBox(scrollAreaWidgetContents);
        checkBox->setObjectName("checkBox");
        checkBox->setFont(font);

        gridLayout_2->addWidget(checkBox, 2, 0, 1, 1);

        checkBox_2 = new QCheckBox(scrollAreaWidgetContents);
        checkBox_2->setObjectName("checkBox_2");
        checkBox_2->setFont(font);

        gridLayout_2->addWidget(checkBox_2, 2, 1, 1, 1);

        pushButton_3 = new QPushButton(scrollAreaWidgetContents);
        pushButton_3->setObjectName("pushButton_3");
        pushButton_3->setFont(font);
        pushButton_3->setCursor(QCursor(Qt::PointingHandCursor));

        gridLayout_2->addWidget(pushButton_3, 9, 2, 1, 1, Qt::AlignHCenter|Qt::AlignVCenter);

        checkBox_8 = new QCheckBox(scrollAreaWidgetContents);
        checkBox_8->setObjectName("checkBox_8");
        checkBox_8->setFont(font);

        gridLayout_2->addWidget(checkBox_8, 2, 5, 1, 1);

        checkBox_9 = new QCheckBox(scrollAreaWidgetContents);
        checkBox_9->setObjectName("checkBox_9");
        checkBox_9->setFont(font);

        gridLayout_2->addWidget(checkBox_9, 3, 3, 1, 1);

        checkBox_4 = new QCheckBox(scrollAreaWidgetContents);
        checkBox_4->setObjectName("checkBox_4");
        checkBox_4->setFont(font);

        gridLayout_2->addWidget(checkBox_4, 3, 0, 1, 1);

        horizontalLayout_7 = new QHBoxLayout();
        horizontalLayout_7->setObjectName("horizontalLayout_7");
        horizontalLayout_7->setContentsMargins(-1, -1, 400, -1);
        label_8 = new QLabel(scrollAreaWidgetContents);
        label_8->setObjectName("label_8");
        QSizePolicy sizePolicy2(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(label_8->sizePolicy().hasHeightForWidth());
        label_8->setSizePolicy(sizePolicy2);
        label_8->setFont(font);
        label_8->setMargin(2);

        horizontalLayout_7->addWidget(label_8);

        checkBox_12 = new QCheckBox(scrollAreaWidgetContents);
        checkBox_12->setObjectName("checkBox_12");
        checkBox_12->setFont(font);

        horizontalLayout_7->addWidget(checkBox_12);

        checkBox_13 = new QCheckBox(scrollAreaWidgetContents);
        checkBox_13->setObjectName("checkBox_13");
        checkBox_13->setFont(font);

        horizontalLayout_7->addWidget(checkBox_13);


        gridLayout_2->addLayout(horizontalLayout_7, 5, 0, 1, 4);

        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setObjectName("horizontalLayout_6");
        horizontalLayout_6->setContentsMargins(-1, -1, 400, -1);
        label_7 = new QLabel(scrollAreaWidgetContents);
        label_7->setObjectName("label_7");
        label_7->setFont(font);

        horizontalLayout_6->addWidget(label_7);

        lineEdit_7 = new QLineEdit(scrollAreaWidgetContents);
        lineEdit_7->setObjectName("lineEdit_7");

        horizontalLayout_6->addWidget(lineEdit_7);

        label_11 = new QLabel(scrollAreaWidgetContents);
        label_11->setObjectName("label_11");
        label_11->setFont(font);

        horizontalLayout_6->addWidget(label_11);

        lineEdit_8 = new QLineEdit(scrollAreaWidgetContents);
        lineEdit_8->setObjectName("lineEdit_8");

        horizontalLayout_6->addWidget(lineEdit_8);


        gridLayout_2->addLayout(horizontalLayout_6, 4, 0, 1, 6);

        label_9 = new QLabel(scrollAreaWidgetContents);
        label_9->setObjectName("label_9");
        label_9->setFont(font);

        gridLayout_2->addWidget(label_9, 7, 0, 1, 1);

        checkBox_10 = new QCheckBox(scrollAreaWidgetContents);
        checkBox_10->setObjectName("checkBox_10");
        checkBox_10->setFont(font);

        gridLayout_2->addWidget(checkBox_10, 3, 4, 1, 1);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setSpacing(12);
        verticalLayout->setObjectName("verticalLayout");
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(85);
        horizontalLayout->setObjectName("horizontalLayout");
        horizontalLayout->setContentsMargins(-1, -1, 400, -1);
        label = new QLabel(scrollAreaWidgetContents);
        label->setObjectName("label");
        label->setFont(font);

        horizontalLayout->addWidget(label);

        lineEdit = new QLineEdit(scrollAreaWidgetContents);
        lineEdit->setObjectName("lineEdit");

        horizontalLayout->addWidget(lineEdit);


        verticalLayout->addLayout(horizontalLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(80);
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        horizontalLayout_2->setContentsMargins(-1, -1, 400, -1);
        label_2 = new QLabel(scrollAreaWidgetContents);
        label_2->setObjectName("label_2");
        label_2->setFont(font);

        horizontalLayout_2->addWidget(label_2);

        lineEdit_2 = new QLineEdit(scrollAreaWidgetContents);
        lineEdit_2->setObjectName("lineEdit_2");

        horizontalLayout_2->addWidget(lineEdit_2);


        verticalLayout->addLayout(horizontalLayout_2);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setSpacing(84);
        horizontalLayout_3->setObjectName("horizontalLayout_3");
        horizontalLayout_3->setContentsMargins(-1, -1, 400, -1);
        label_3 = new QLabel(scrollAreaWidgetContents);
        label_3->setObjectName("label_3");
        label_3->setFont(font);

        horizontalLayout_3->addWidget(label_3);

        lineEdit_3 = new QLineEdit(scrollAreaWidgetContents);
        lineEdit_3->setObjectName("lineEdit_3");

        horizontalLayout_3->addWidget(lineEdit_3);


        verticalLayout->addLayout(horizontalLayout_3);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setSpacing(57);
        horizontalLayout_4->setObjectName("horizontalLayout_4");
        horizontalLayout_4->setContentsMargins(-1, -1, 400, -1);
        label_4 = new QLabel(scrollAreaWidgetContents);
        label_4->setObjectName("label_4");
        label_4->setFont(font);

        horizontalLayout_4->addWidget(label_4);

        lineEdit_4 = new QLineEdit(scrollAreaWidgetContents);
        lineEdit_4->setObjectName("lineEdit_4");

        horizontalLayout_4->addWidget(lineEdit_4);


        verticalLayout->addLayout(horizontalLayout_4);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName("horizontalLayout_5");
        horizontalLayout_5->setContentsMargins(-1, -1, 400, -1);
        label_5 = new QLabel(scrollAreaWidgetContents);
        label_5->setObjectName("label_5");
        label_5->setFont(font);

        horizontalLayout_5->addWidget(label_5);

        lineEdit_5 = new QLineEdit(scrollAreaWidgetContents);
        lineEdit_5->setObjectName("lineEdit_5");
        lineEdit_5->setEnabled(true);
        QSizePolicy sizePolicy3(QSizePolicy::Expanding, QSizePolicy::Fixed);
        sizePolicy3.setHorizontalStretch(0);
        sizePolicy3.setVerticalStretch(0);
        sizePolicy3.setHeightForWidth(lineEdit_5->sizePolicy().hasHeightForWidth());
        lineEdit_5->setSizePolicy(sizePolicy3);
        lineEdit_5->setSizeIncrement(QSize(0, 0));

        horizontalLayout_5->addWidget(lineEdit_5);


        verticalLayout->addLayout(horizontalLayout_5);


        gridLayout_2->addLayout(verticalLayout, 0, 0, 1, 5);

        checkBox_11 = new QCheckBox(scrollAreaWidgetContents);
        checkBox_11->setObjectName("checkBox_11");
        checkBox_11->setFont(font);

        gridLayout_2->addWidget(checkBox_11, 2, 4, 1, 1);

        checkBox_3 = new QCheckBox(scrollAreaWidgetContents);
        checkBox_3->setObjectName("checkBox_3");
        checkBox_3->setFont(font);

        gridLayout_2->addWidget(checkBox_3, 2, 2, 1, 1);

        pushButton_2 = new QPushButton(scrollAreaWidgetContents);
        pushButton_2->setObjectName("pushButton_2");
        pushButton_2->setFont(font);
        pushButton_2->setCursor(QCursor(Qt::PointingHandCursor));

        gridLayout_2->addWidget(pushButton_2, 7, 2, 1, 1);

        scrollArea->setWidget(scrollAreaWidgetContents);

        gridLayout->addWidget(scrollArea, 0, 1, 1, 1);

        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 833, 26));
        MainWindow->setMenuBar(menubar);

        retranslateUi(MainWindow);

        pushButton->setDefault(false);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        checkBox_6->setText(QCoreApplication::translate("MainWindow", "fantasy", nullptr));
        pushButton->setText(QCoreApplication::translate("MainWindow", "Save changes", nullptr));
        label_6->setText(QCoreApplication::translate("MainWindow", "Favorite genres", nullptr));
        checkBox_5->setText(QCoreApplication::translate("MainWindow", "thriller", nullptr));
        checkBox_7->setText(QCoreApplication::translate("MainWindow", "animation", nullptr));
        checkBox->setText(QCoreApplication::translate("MainWindow", "drama", nullptr));
        checkBox_2->setText(QCoreApplication::translate("MainWindow", "action", nullptr));
        pushButton_3->setText(QCoreApplication::translate("MainWindow", "Wishlist", nullptr));
        checkBox_8->setText(QCoreApplication::translate("MainWindow", "horror", nullptr));
        checkBox_9->setText(QCoreApplication::translate("MainWindow", "romance", nullptr));
        checkBox_4->setText(QCoreApplication::translate("MainWindow", "comedy", nullptr));
        label_8->setText(QCoreApplication::translate("MainWindow", "You like:", nullptr));
        checkBox_12->setText(QCoreApplication::translate("MainWindow", "movies", nullptr));
        checkBox_13->setText(QCoreApplication::translate("MainWindow", "tv-shows", nullptr));
        label_7->setText(QCoreApplication::translate("MainWindow", "Release date preference:", nullptr));
        lineEdit_7->setText(QString());
        label_11->setText(QCoreApplication::translate("MainWindow", "-", nullptr));
        lineEdit_8->setText(QString());
        label_9->setText(QString());
        checkBox_10->setText(QCoreApplication::translate("MainWindow", "mistery", nullptr));
        label->setText(QCoreApplication::translate("MainWindow", "Username", nullptr));
        label_2->setText(QCoreApplication::translate("MainWindow", "First Name", nullptr));
        label_3->setText(QCoreApplication::translate("MainWindow", "Last Name", nullptr));
        label_4->setText(QCoreApplication::translate("MainWindow", "Favorite Movie", nullptr));
        label_5->setText(QCoreApplication::translate("MainWindow", "Favorite Actor/Actress", nullptr));
        checkBox_11->setText(QCoreApplication::translate("MainWindow", "adventure", nullptr));
        checkBox_3->setText(QCoreApplication::translate("MainWindow", "SF", nullptr));
        pushButton_2->setText(QCoreApplication::translate("MainWindow", "Seen movies or TV-shows", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_USER_PAGE_GUI_H
