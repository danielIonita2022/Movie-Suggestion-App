#pragma once
#pragma warning(disable : 4996)
#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QScrollArea>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include <QtWidgets/QMainWindow>
#include <QMessageBox>
#include "User.h"
#include <regex>
#include <cstdint>
#include <QCloseEvent>
#include "MoviePage.h"
#include "Movie_Page_GUI.h"

class SearchPage : public QMainWindow
{
	//Q_OBJECT;
public:
	QWidget* window;
	QLineEdit* lineEdit;
	QPushButton* searchButton;
	QVBoxLayout* layout;
	QLabel* label;
	
	SearchPage(User* currentUser);
	void setupUi();
	void onSearchButtonClicked();
	int countWordsRegex(const std::string& name);
	std::string::iterator findPosOfLastWord(std::string& name);
	void deleteLastWord(std::string& name);
	std::vector<Movie> getMovies(const std::string& name);
	~SearchPage() = default;
private:
	std::unique_ptr <User> m_currentUser;
	
};

