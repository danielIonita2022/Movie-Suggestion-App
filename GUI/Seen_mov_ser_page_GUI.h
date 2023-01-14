#pragma once

#include <QWidget>
#include "ui_Seen_mov_ser_page_GUI.h"

QT_BEGIN_NAMESPACE
namespace Ui { class Seen_mov_ser_page_GUIClass; };
QT_END_NAMESPACE

class Seen_mov_ser_page_GUI : public QWidget
{
	Q_OBJECT

public:
	Seen_mov_ser_page_GUI(QWidget *parent = nullptr);
	~Seen_mov_ser_page_GUI();

private:
	Ui::Seen_mov_ser_page_GUIClass *ui;
};
