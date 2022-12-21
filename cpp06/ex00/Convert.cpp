//
// Created by Selim talha Aksoy on 12/21/22.
//

#include "Convert.h"

Convert::Convert() {
	std::cout << "Convert Const Called" << std::endl;
}

Convert::Convert(const Convert &var) {
	*this = var;
}

Convert &Convert::operator=(const Convert &var) {
	*this = var;
	return *this;
}

Convert::~Convert() {
	std::cout << "Convert Deconst Called" << std::endl;
}

const std::string Convert::toUpperCase(const std::string &var) {
	std::string tmp = var;
	for (int i = var.length() - 1 ; i >= 0 ; i--){
		tmp[i] = toupper(tmp[i]);
	}
	return tmp;
}

bool Convert::isNan(const std::string &str) {
	return (!strcmp(toUpperCase(str).c_str(), "NAN"));
}

void Convert::toChar(const std::string &str) {
	char c = 0;
	if (isNan(str)){
		std::cout << "char: impossible" << std::endl;
		return;
	}
	try{
		c = std::stoi(str);
	}catch (std::exception &e){
		if (str.length() == 1 && isprint(str[0]))
			c = str[0];
	}
	std::cout << "char :" << (isprint(c) ? std::string(1, c).c_str() : "Non Displayable") << std::endl;
}

void Convert::toInt(const std::string &str) {
	int n = 0;

	if (isNan(str)){
		std::cout << "int : impossible" << std::endl;
		return;
	}
	try{
		n = std::stoi(str);
	}catch (std::exception &e){
		if (str.length() == 1 && isprint(str[0])){
			printNumber(str[0], 'i');
			return;
		}
		std::cout << "int: Non displayable" << std::endl;
		return;
	}
	std::cout << "int : " << n << std::endl;
}