#pragma once
#include <vector>
#include <string>
#include <fstream>
#include <sstream>
class ParsedRow
{
private:
	std::vector<std::string> row;
public:
	ParsedRow() = default;
	std::vector<std::string> getParsedRow() const;
	void makeParsedRow(std::ifstream& in);
};

