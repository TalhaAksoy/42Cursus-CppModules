//
// Created by Selim talha Aksoy on 12/12/22.
//

#include "Cat.h"

Cat::Cat(){
	this->type = "Default Cat";
	this->brain = new Brain();
	std::cout << "Default - Cat - Constructor Called" << std::endl;
}

Cat::Cat(std::string type){
	this->type = type;
	this->brain = new Brain();
	std::cout << "Name - Cat - Constructor Called" << std::endl;
}

Cat::Cat(const Cat &var) {
	this->type = var.getType();
	this->brain = new Brain(*(var.brain));
	std::cout << "Copy - Cat - Constructor Called" << std::endl;
}

Cat &Cat::operator=(const Cat &var) {
	this->type = var.type;
	if (this->brain)
		delete brain;
	this->brain = new Brain(*(var.brain));
	std::cout << "Operator - Cat - Called" << std::endl;
	return (*this);
}

Cat::~Cat() {
	delete this->brain;
	std::cout << "Deconstructor - Cat - Called" << std::endl;
}

void Cat::makeSound() const {
	std::cout << "Default Cat Song : Meow" << std::endl;
}

std::string Cat::getType() const{
	return (this->type);
}

void Cat::compareTo(const Cat &var) const {
	std::cout << std::endl;
	std::cout << "Now comparing two " << this->type << std::endl;
	std::cout << "My Brain's heap adress: " << this->brain << std::endl;
	std::cout << "Other's heap adress: " << var.brain << std::endl;
	std::cout << std::endl;
	std::cout << "My brain's ideas \t | \t\t Other brain's ideas" << std::endl;
	for ( int i = 0; i < 100; i++ )
		std::cout << "-";
	std::cout << std::endl;
	for ( int i = 0; i < 100; i++ )
		std::cout << ((this->brain)->getIdeas())[i] << "\t\t | \t\t" << ( (var.brain)->getIdeas() )[i] << std::endl;
	std::cout << std::endl;
}