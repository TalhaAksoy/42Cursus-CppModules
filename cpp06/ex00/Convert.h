//
// Created by Selim talha Aksoy on 12/21/22.
//

#pragma once

# include <iostream>
# include <string.h>

class Convert {
public:
	Convert();
	Convert(const Convert& var);
	Convert& operator=(const Convert& var);
	void run(const std::string& str);
	~Convert();
private:
	void toChar(const std::string& str);
	void toInt(const std::string& str);
	void toFloat(const std::string& str);
	void toDouble(const std::string& str);
	void printNumber(const char c, char type);
	bool isNan(const std::string& str);
	const std::string toUpperCase(const std::string& var);
};
