#pragma once
#include <QMainWindow>
#include"ui_User_Page_GUI.h"
QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; };
QT_END_NAMESPACE
class User_Page_GUI  : public QMainWindow
{
	Q_OBJECT

public:

	User_Page_GUI(QWidget *parent=nullptr);
	~User_Page_GUI();
private:
	Ui::MainWindow* ui;
};
