#include "Login_GUI.h"

Login_GUI::Login_GUI(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::Login_GUIClass())
{
    ui->setupUi(this);
}

Login_GUI::~Login_GUI()
{
    delete ui;
}

