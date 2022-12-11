#include "User_Page_GUI.h"

User_Page_GUI::User_Page_GUI(QWidget *parent)
	: QMainWindow(parent)
	, ui(new Ui::MainWindow())
{
	ui->setupUi(this);
}
User_Page_GUI::~User_Page_GUI()
{}
