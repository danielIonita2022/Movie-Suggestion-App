#pragma once

#include <QWidget>
#include "ui_Get_sim_mov_ser_page_GUI.h"

QT_BEGIN_NAMESPACE
namespace Ui { class Get_sim_mov_ser_page_GUIClass; };
QT_END_NAMESPACE

class Get_sim_mov_ser_page_GUI : public QWidget
{
	Q_OBJECT

public:
	Get_sim_mov_ser_page_GUI(QWidget *parent = nullptr);
	~Get_sim_mov_ser_page_GUI();

private:
	Ui::Get_sim_mov_ser_page_GUIClass *ui;
};
