#include "Seen_mov_ser_page_GUI.h"

Seen_mov_ser_page_GUI::Seen_mov_ser_page_GUI(QWidget *parent)
	: QWidget(parent)
	, ui(new Ui::Seen_mov_ser_page_GUIClass())
{
	ui->setupUi(this);
}

Seen_mov_ser_page_GUI::~Seen_mov_ser_page_GUI()
{
	delete ui;
}
