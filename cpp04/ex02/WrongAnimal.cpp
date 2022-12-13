//
// Created by Selim talha Aksoy on 12/12/22.
//

#include "WrongAnimal.h"

WrongAnimal::WrongAnimal():type("Default WrongAnimal") {
	std::cout << "Default - WrongAnimal - Constructor Called" << std::endl;
}

WrongAnimal::WrongAnimal(std::string type):type(type) {
	std::cout << "Name - WrongAnimal - Constructor Called" << std::endl;
}

WrongAnimal::WrongAnimal(const WrongAnimal &var) {
	*this = var;
	std::cout << "Copy - WrongAnimal - Constructor Called" << std::endl;
}

WrongAnimal &WrongAnimal::operator=(const WrongAnimal &var) {
	this->type = var.type;
	std::cout << "Operator - WrongAnimal - Called" << std::endl;
	return (*this);
}

WrongAnimal::~WrongAnimal() {
	std::cout << "Deconstructor - WrongAnimal - Called" << std::endl;
}

void WrongAnimal::makeSound() const{
	std::cout << "Default WrongAnimal Song : Wrong UwU" << std::endl;
}

std::string WrongAnimal::getType() const{
	return (this->type);
}