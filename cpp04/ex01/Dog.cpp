//
// Created by Selim talha Aksoy on 12/12/22.
//

#include "Dog.h"
#include <stdio.h>

Dog::Dog(){
	this->type = "Default Dog";
	this->brain = new Brain;
	std::cout << "Default - Dog - Constructor Called" << std::endl;
}

Dog::Dog(std::string type){
	this->type = type;
	this->brain = new Brain;
	std::cout << "Name - Dog - Constructor Called" << std::endl;
}

Dog::Dog(const Dog &var) {
	this->type = var.getType();
	this->brain = new Brain( *(var.brain) );
	std::cout << "Copy - Dog - Constructor Called" << std::endl;
}

Dog &Dog::operator=(const Dog &var) {
	this->type = var.type;
	if (this->brain)
		delete this->brain;
	this->brain = new Brain(*(var.brain));
	std::cout << "Operator - Dog - Called" << std::endl;
	return (*this);
}

Dog::~Dog() {
	delete this->brain;
	std::cout << "Deconstructor - Dog - Called" << std::endl;
}

void Dog::makeSound() const {
	std::cout << "Default Dog Song : Woof" << std::endl;
}

std::string Dog::getType() const{
	return (this->type);
}

void Dog::compareTo(const Dog &var) const {
	std::cout << std::endl;
	std::cout << "Now comparing two " << this->type << std::endl;
	std::cout << "My Brain's heap adress: " << this->brain << std::endl;
	std::cout << "Other's heap adress: " << var.brain << std::endl;
	std::cout << std::endl;
	std::cout << "My brain's ideas \t | \t\t Other brain's ideas" << std::endl;
	std::cout << std::endl;
	for ( int i = 0; i < 100; i++ )
		std::cout << (brain->getIdeas())[i] << "\t\t | \t\t" << ( var.brain->getIdeas() )[i] << std::endl;
	std::cout << std::endl;
}