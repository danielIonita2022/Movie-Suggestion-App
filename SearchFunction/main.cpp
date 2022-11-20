#include "MoviePage.h"
#include"Search_function.h"
int main()
{
	App* app = new App;
	MoviePage moviePage(app);
	std::cout << "The word we're searching is: ";
	std::string word;
	std::getline(std::cin >> std::ws, word);
	WordSearching(app, word);
}
	return 0;
}