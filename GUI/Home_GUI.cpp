#include "Home_GUI.h"

Home_GUI::Home_GUI(QWidget *parent)
	: QMainWindow(parent)
	, ui(new Ui::Home_GUIClass())
{
	ui->setupUi(this);
}

Home_GUI::~Home_GUI()
{
	delete ui;
}
