#pragma once
#include <vector>
#include <string>
#include <fstream>
#include <sstream>
#include <iostream>

#ifdef ParsedRowDLL_EXPORTS
	#define ParsedRowDLL_API __declspec(dllexport)
#else
	#define ParsedRowDLL_API __declspec(dllimport)
#endif

extern "C" class ParsedRowDLL_API ParsedRowDLL
{
private:
	std::vector<std::string> row;
public:
	ParsedRowDLL();
	std::vector<std::string> getParsedRow() const;
	void makeParsedRow(std::ifstream& in);
	~ParsedRowDLL();
};

