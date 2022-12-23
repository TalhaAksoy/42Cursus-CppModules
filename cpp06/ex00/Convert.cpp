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
	if (this != &var){
		*this = var;
	}
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
		std::cout << "int : Non displayable" << std::endl;
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

void Convert::toFloat(const std::string &str) {
	float n = 0;
	if (isNan(str)){
		std::cout << "float :nan" << std::endl;
		return;
	}
	try{
		n = std::stof(str);
	}catch (std::exception &e){
		if(str.length() == 0 && isprint(str[0])){
			printNumber(str[0], 'f');
			return;
		}
		std::cout << "Float Non Displayable" << std::endl;
		return;
	}
	if (n == static_cast<int>(n)){
		std::cout << "float :" << n << ".0f" << std::endl;
	}
	else{
		std::cout << "float :" << n << "f" << std::endl;
	}
}

void Convert::toDouble(const std::string &str) {
	double n = 0;
	if(isNan(str)){
		std::cout << "double: impossible" << std::endl;
	}
	try{
		n = std::stod(str);
	}catch (std::exception &e){
		if (str.length() == 0 && isprint(str[0])){
			printNumber(str[0], 'd');
		}
		std::cout << "double : impossible " << std::endl;
		return;
	}
	if (n == static_cast<int>(n)){
		std::cout << "double : " << n << ".0" << std::endl;
	}
	else{
		std::cout << "double : " << n << std::endl;
	}
}

void Convert::printNumber(const char c, char type) {
	if (type == 'i')
		std::cout << "int : " << static_cast<int>(c) << std::endl;
	else if (type == 'f')
		std::cout << "float :" << static_cast<float>(c) << ".0f" << std::endl;
	else if (type == 'd')
		std::cout << "double :" << static_cast<double>(c) << ".0" << std::endl;
}

void Convert::run(const std::string &str) {
	toChar(str.c_str());
	toInt(str.c_str());
	toFloat(str.c_str());
	toDouble(str.c_str());
}