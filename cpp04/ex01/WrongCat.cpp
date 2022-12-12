//
// Created by Selim talha Aksoy on 12/12/22.
//

#include "WrongCat.h"

WrongCat::WrongCat(){
	this->type = "Default WrongCat";
	std::cout << "Default - WrongCat - Constructor Called" << std::endl;
}

WrongCat::WrongCat(std::string type){
	this->type = type;
	std::cout << "Name - WrongCat - Constructor Called" << std::endl;
}

WrongCat::WrongCat(const WrongCat &var) {
	*this = var;
	std::cout << "Copy - WrongCat - Constructor Called" << std::endl;
}

WrongCat &WrongCat::operator=(const WrongCat &var) {
	this->type = var.type;
	std::cout << "Operator - WrongCat - Called" << std::endl;
	return (*this);
}

WrongCat::~WrongCat() {
	std::cout << "Deconstructor - WrongCat - Called" << std::endl;
}

void WrongCat::makeSound() const {
	std::cout << "Default WrongCat Song : Wrong Meow" << std::endl;
}

std::string WrongCat::getType() const{
	return (this->type);
}