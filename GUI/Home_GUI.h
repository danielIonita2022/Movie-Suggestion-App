#pragma once
#pragma warning(disable : 4996)

#include <QMainWindow>
#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSplitter>
#include <QtWidgets/QWidget>
#include "User_Page_GUI.h"
#include "login_gui.h"
#include "MoviePage.h"
#include "Movie_Page_GUI.h"
#include "User.h"
#include <regex>
#include <cstdint>
#include <QCloseEvent>

class Home_GUI : public QMainWindow
{
	//Q_OBJECT

public:

    QAction* actionHome;
    QAction* actionMy_Profile;
    QAction* actionSign_Out;
    QWidget* centralWidget;
    QGridLayout* gridLayout;
    QGroupBox* groupBox;
    QSplitter* splitter;
    QLineEdit* insert_searched_movie;
    QPushButton* searchButton;
    QMenuBar* menuBar;
    QMenu* menu;
    
	Home_GUI();

    void setupUi(QMainWindow* Home_GUIClass);
    void retranslateUi(QMainWindow* Home_GUIClass);
	void openUserPage();
	void openLogin();
    void onSearchButtonClicked();
    int countWordsRegex(const std::string& name);
    std::string::iterator findPosOfLastWord(std::string& name);
    void deleteLastWord(std::string& name);
    std::vector<Movie> getMovies(const std::string& name);
    void onBackToMenuClickedUser();
    void onBackToMenuClickedMovie();
    
	~Home_GUI();
    
private:
	std::unique_ptr <User> m_currentUser;
	User_Page_GUI* m_userPage;
	Movie_Page_GUI* m_moviePage;
};
