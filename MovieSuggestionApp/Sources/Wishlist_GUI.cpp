#include "Wishlist_GUI.h"

void Wishlist_GUI::setupUi()
{
    window = new QWidget;
    window->setWindowTitle("Wishlist");
    window->setObjectName("Wishlist");

    resize(732, 466);
    setMinimumSize(QSize(444, 321));
    setMaximumSize(QSize(1332, 963));
    setMouseTracking(true);
    
	movieList = new QListWidget;
	movieList->setObjectName("movieList");

	layout = new QVBoxLayout;
	layout->addWidget(movieList);

	window->setLayout(layout);
	window->setVisible(true);
	setCentralWidget(window);
	QMetaObject::connectSlotsByName(this);
}

void Wishlist_GUI::showWishlist()
{
	auto table = Storages::getStorage();
	
	
}

Wishlist_GUI::Wishlist_GUI()
{
	setupUi();
}
