#include<iostream>
#include<vector>
#include<string>
#include <fstream>
void VectorReading(std::istream& file, std::vector<std::string>& elements)
{
	std::string aux;
	while (!file.eof())
	{
		getline(file, aux);
		elements.push_back(aux);
	}
}
void WordSearching(const std::vector<std::string>& elements, const std::string word)
{
	for (int i = 0; i < elements.size(); i++)
		if (elements[i].find(word) != std::string::npos)
			std::cout << elements[i] << std::endl;
}