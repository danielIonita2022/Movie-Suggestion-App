#pragma once

#include <QtWidgets/QMainWindow>
#include "ui_Login_GUI.h"

QT_BEGIN_NAMESPACE
namespace Ui { class Login_GUIClass; };
QT_END_NAMESPACE

class Login_GUI : public QMainWindow
{
    Q_OBJECT

public:
    Login_GUI(QWidget *parent = nullptr);
    ~Login_GUI();

private:
    Ui::Login_GUIClass *ui;
};
