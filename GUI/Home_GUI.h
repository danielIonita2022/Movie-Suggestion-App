#pragma once

#include <QMainWindow>
#include "ui_Home_GUI.h"

QT_BEGIN_NAMESPACE
namespace Ui { class Home_GUIClass; };
QT_END_NAMESPACE

class Home_GUI : public QMainWindow
{
	Q_OBJECT

public:
	Home_GUI(QWidget *parent = nullptr);
	~Home_GUI();

private:
	Ui::Home_GUIClass *ui;
};
