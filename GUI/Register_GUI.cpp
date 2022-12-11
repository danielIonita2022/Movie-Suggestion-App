#include "Register_GUI.h"

Register_GUI::Register_GUI(QWidget* parent)
    : QMainWindow(parent)
    , ui(new Ui::Register_GUI())
{
    ui->setupUi(this);
}
Register_GUI::~Register_GUI()
{
    delete ui;
}
