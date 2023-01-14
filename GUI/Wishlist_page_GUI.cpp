#include "Wishlist_page_GUI.h"

Wishlist_page_GUI::Wishlist_page_GUI(QWidget *parent)
	: QWidget(parent)
	, ui(new Ui::Wishlist_page_GUIClass())
{
	ui->setupUi(this);
}

Wishlist_page_GUI::~Wishlist_page_GUI()
{
	delete ui;
}
