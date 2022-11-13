#pragma once
#include "ParsedRow.h"
#include <iostream>

std::vector <std::string> ParsedRow::getParsedRow() const
{
	return row;
}
void ParsedRow::makeParsedRow(std::ifstream& in)
{
	row.clear();
	std::string unparsedRow;
	char separator = ',';
	getline(in, unparsedRow);
	std::stringstream sstream(unparsedRow);
	std::string element;
	while (getline(sstream, element, separator))
	{
		if (element.empty())
		{
			row.emplace_back("");
		}
		else row.emplace_back(element);
		if (separator == '"')
		{
			separator = ',';
			sstream.get();
		}
		if (sstream.peek() == '"')
		{
			separator = '"';
			sstream.get();
		}
	}
}
