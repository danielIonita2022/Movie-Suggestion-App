#include "login_gui.h"
#include "Wishlist_GUI.h"
#include <QtWidgets/QApplication>
#include "Recommended.h"

int main(int argc, char* argv[])
{
    QApplication a(argc, argv);
    Storages::PopulateMovies();
    Login_GUI w;
    w.show();
    return a.exec();
}