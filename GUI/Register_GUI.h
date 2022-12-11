#pragma once

#include <QtWidgets/QMainWindow>
#include "ui_Register_GUI.h"
QT_BEGIN_NAMESPACE
namespace Ui { class Register_GUI; };
QT_END_NAMESPACE

class Register_GUI  : public QMainWindow
{
	Q_OBJECT

public:
	Register_GUI(QWidget* parent = nullptr);
	~Register_GUI();
private:
	Ui::Register_GUI* ui;
};
