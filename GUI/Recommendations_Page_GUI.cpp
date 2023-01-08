#include "Recommendations_Page_GUI.h"

Recommendations_Page_GUI::Recommendations_Page_GUI(QWidget *parent)
	: QMainWindow(parent)
	, ui(new Ui::Recommendations_Page_GUIClass())
{
	ui->setupUi(this);
}

Recommendations_Page_GUI::~Recommendations_Page_GUI()
{
	delete ui;
}
