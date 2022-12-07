//
// Created by Selim talha Aksoy on 12/7/22.
//

#include "FragTrap.h"

FragTrap::FragTrap() {
	this->name = "Undefined Name";
	this->hitPoint = 100;
	this->energyPoint = 100;
	this->attackDamage = 30;
	std::cout << "FragTrap Constructor Called" << std::endl;
}

FragTrap::FragTrap(std::string name) {
	this->name = name;
	this->hitPoint = 100;
	this->energyPoint = 100;
	this->attackDamage = 30;
	std::cout << "FragTrap Name Constructor Called" << std::endl;
}

FragTrap::FragTrap(const FragTrap &var) {
	*this = var;
	std::cout << "Copy Constructor Called" << std::endl;
}

FragTrap::~FragTrap() {
	std::cout << "FragTrap Descontructor Called" << std::endl;
}

FragTrap &FragTrap::operator=(const FragTrap &var) {
	this->name = var.name;
	this->attackDamage = var.attackDamage;
	this->energyPoint = var.energyPoint;
	this->hitPoint = var.hitPoint;
	std::cout << "FragTrap Copy Construtcor Called" << std::endl;
	return (*this);
}

void FragTrap::highFivesGuys() {
	if (this->hitPoint == 0){
		std::cout << "This FragTrap " << this->name << "can't high five because he is dead" << std::endl;
		return;
	}
	std::cout << this->name << " FragTrap hight fives guys!!!" << std::endl;
}