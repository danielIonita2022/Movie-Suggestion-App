#include<iostream>
#include<vector>
#include<string>
#include <fstream>
#include"Search_function.cpp"
int main()
{
	std::vector<std::string>elements;
	std::string word;
	std::ifstream myreadfile("elements.txt");
	VectorReading(myreadfile, elements);
	std::cout << "The word we're searching is:";
	std::cin >> word;
	WordSearching(elements, word);
	return 0;
}