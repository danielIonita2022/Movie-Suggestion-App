#include "SearchPage.h"

void SearchPage::setupUi()
{
    window = new QWidget;
    window->setWindowTitle("Search");
    window->setObjectName("Search");

    resize(732, 466);
    setMinimumSize(QSize(444, 321));
    setMaximumSize(QSize(1332, 963));
    setMouseTracking(true);
	
	label = new QLabel;
	label->setText("Search for a movie by name:");
    
    lineEdit = new QLineEdit;
    searchButton = new QPushButton("Search");
    searchButton->setCursor(QCursor(Qt::PointingHandCursor));
    
    layout = new QVBoxLayout;
	layout->addWidget(label);
    layout->addWidget(lineEdit);
    layout->addWidget(searchButton);
    
    window->setLayout(layout);
    window->setVisible(true);
    setCentralWidget(window);
    QMetaObject::connectSlotsByName(this);
}