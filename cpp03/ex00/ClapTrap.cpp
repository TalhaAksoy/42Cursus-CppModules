//
// Created by saksoy on 12/2/22.
//

#include "ClapTrap.h"

ClapTrap::ClapTrap() {
	this->attackDamage = 0;
	this->energyPoint = 10;
	this->hitPoint = 10;
	this->name = "Undefined Name";
	std::cout << "Constructor Called" << std::endl;
}

ClapTrap::ClapTrap(std::string name) {
	this->name = name;
	this->attackDamage = 0;
	this->energyPoint = 10;
	this->hitPoint = 10;
	std::cout << "Name Constructor Called" << std::endl;
}

ClapTrap::~ClapTrap() {
	std::cout << "Destructor Called" << std::endl;
}

void ClapTrap::attack(const std::string &target) {
	if (this->energyPoint > 0 && this->hitPoint > 0){
		--this->energyPoint;
		std::cout << this->name << " attack " << target << std::endl;
	}
	else
	{
		if (energyPoint < 1)
			std::cout << "Mana out" << std::endl;
		else
			std::cout << this->name << " died" << std::endl;
	}
}

void ClapTrap::takeDamage(unsigned int amount) {
	if (this->hitPoint < amount)
		this->hitPoint = 0;
	else
		this->hitPoint -= amount;
	std::cout << this->name << " take " << amount << " damage" << std::endl;
}

void ClapTrap::beRepaired(unsigned int amount) {
	if (this->energyPoint > 0 && this->hitPoint > 0){
		if (amount + hitPoint > 10)
			this->hitPoint = 10;
		else
			this->hitPoint = amount;
		--this->energyPoint;
		std::cout << this->name << " repaired HP " << amount << std::endl;
	}
	else{
		if (energyPoint < 1)
			std::cout << "Mana out" << std::endl;
		else
			std::cout << this->name << " died" << std::endl;
	}
}