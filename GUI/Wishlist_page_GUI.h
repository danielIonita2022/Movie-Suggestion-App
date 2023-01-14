#pragma once

#include <QWidget>
#include "ui_Wishlist_page_GUI.h"

QT_BEGIN_NAMESPACE
namespace Ui { class Wishlist_page_GUIClass; };
QT_END_NAMESPACE

class Wishlist_page_GUI : public QWidget
{
	Q_OBJECT

public:
	Wishlist_page_GUI(QWidget *parent = nullptr);
	~Wishlist_page_GUI();

private:
	Ui::Wishlist_page_GUIClass *ui;
};
