//
// Created by Selim talha Aksoy on 12/12/22.
//

#include "Animal.h"

Animal::Animal():type("Default Animal") {
	std::cout << "Default - Animal - Constructor Called" << std::endl;
}

Animal::Animal(std::string type):type(type) {
	std::cout << "Name - Animal - Constructor Called" << std::endl;
}

Animal::Animal(const Animal &var) {
	*this = var;
	std::cout << "Copy - Animal - Constructor Called" << std::endl;
}

Animal &Animal::operator=(const Animal &var) {
	this->type = var.type;
	std::cout << "Operator - Animal - Called" << std::endl;
	return (*this);
}

Animal::~Animal() {
	std::cout << "Deconstructor - Animal - Called" << std::endl;
}

void Animal::makeSound() const{
	std::cout << "Default Animal Song : UwU" << std::endl;
}

std::string Animal::getType() const{
	return (this->type);
}