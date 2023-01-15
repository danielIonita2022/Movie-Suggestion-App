#pragma once
#pragma warning(disable : 4996)
#include "Storages.h"
#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QScrollArea>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include <QtWidgets/QMainWindow>
#include <QMessageBox>
#include <regex>
#include <cstdint>
#include <QCloseEvent>
#include <iostream>
#include <fstream>
#include <string>

class Register_GUI : public QMainWindow
{
	Q_OBJECT

public:
	
    QScrollArea* scrollArea;
    QWidget* scrollAreaWidgetContents;
    QGroupBox* groupBox;
    QLabel* label_5;
    QLabel* label_6;
    QLineEdit* lineEdit_5;
    QLabel* label_7;
    QLineEdit* lineEdit_6;
    QLabel* label_8;
    QCheckBox* checkBoxDrama;
    QCheckBox* checkBoxAction;
    QCheckBox* checkBoxSF;
    QCheckBox* checkBoxComedy;
    QCheckBox* checkBoxThriller;
    QCheckBox* checkBoxFantasy;
    QCheckBox* checkBoxAnimation;
    QCheckBox* checkBoxHorror;
    QCheckBox* checkBoxRomance;
    QCheckBox* checkBoxMistery;
    QCheckBox* checkBoxAdventure;
    QLabel* label_9;
    QLabel* label_10;
    QLineEdit* lineEdit_7;
    QLineEdit* lineEdit_8;
    QLabel* label_11;
    QLabel* label_12;
    QCheckBox* checkBox_12;
    QCheckBox* checkBox_13;
    QPushButton* pushButton;
    QWidget* widget;
    QVBoxLayout* verticalLayout_3;
    QVBoxLayout* verticalLayout_2;
    QVBoxLayout* verticalLayout;
    QHBoxLayout* horizontalLayout;
    QLabel* label;
    QLineEdit* lineEdit;
    QHBoxLayout* horizontalLayout_2;
    QLabel* label_2;
    QLineEdit* lineEdit_2;
    QHBoxLayout* horizontalLayout_4;
    QLabel* label_4;
    QLineEdit* lineEdit_4;
    QHBoxLayout* horizontalLayout_3;
    QLabel* label_3;
    QLineEdit* lineEdit_3;

    Register_GUI();

    void setupUi();
    void retranslateUi();
    void addNewUserToDB();
    bool passwordValidation(const std::string& password);

	~Register_GUI();

signals:
    void windowClosed();

private:
    bool m_status_register;
    void closeEvent(QCloseEvent* event);
};
