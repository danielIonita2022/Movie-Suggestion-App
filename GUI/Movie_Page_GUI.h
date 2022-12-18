#pragma once

#include <QWidget>
#include"ui_Movie_Page_GUI.h"
class Movie_Page_GUI  : public QWidget
{
	Q_OBJECT
public:
	Movie_Page_GUI();
	~Movie_Page_GUI();
private:
	Ui::Form* ui;
};
