#include "Get_sim_mov_ser_page_GUI.h"

Get_sim_mov_ser_page_GUI::Get_sim_mov_ser_page_GUI(QWidget *parent)
	: QWidget(parent)
	, ui(new Ui::Get_sim_mov_ser_page_GUIClass())
{
	ui->setupUi(this);
}

Get_sim_mov_ser_page_GUI::~Get_sim_mov_ser_page_GUI()
{
	delete ui;
}
