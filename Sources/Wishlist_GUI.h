#pragma once
#pragma warning(disable : 4996)

#include "Storages.h"
#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QScrollArea>
#include <QtWidgets/QWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QMainWindow>
#include <QMessageBox>
#include <iostream>
#include <fstream>
#include <string>

class Wishlist_GUI : public QMainWindow
{
	//Q_OBJECT;
public:
	
	QWidget* window;
	QListWidget* movieList;
	QVBoxLayout* layout;
	
	void setupUi();
	void showWishlist();
	
	Wishlist_GUI();
	~Wishlist_GUI() =  default;
};