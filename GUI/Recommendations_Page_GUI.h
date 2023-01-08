#pragma once

#include <QMainWindow>
#include "ui_Recommendations_Page_GUI.h"

QT_BEGIN_NAMESPACE
namespace Ui { class Recommendations_Page_GUIClass; };
QT_END_NAMESPACE

class Recommendations_Page_GUI : public QMainWindow
{
	Q_OBJECT

public:
	Recommendations_Page_GUI(QWidget *parent = nullptr);
	~Recommendations_Page_GUI();

private:
	Ui::Recommendations_Page_GUIClass *ui;
};
