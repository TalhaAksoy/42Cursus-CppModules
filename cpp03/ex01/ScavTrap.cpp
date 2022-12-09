//
// Created by Selim talha Aksoy on 12/6/22.
//

#include "ScavTrap.h"

ScavTrap::ScavTrap() {
	this->name = "Undefined Name";
	this->hitPoint = 100;
	this->energyPoint = 50;
	this->attackDamage = 20;
	std::cout << "ScavTrap Constructor Called" << std::endl;
}

ScavTrap::ScavTrap(std::string name){
	this->name = name;
	this->hitPoint = 100;
	this->energyPoint = 50;
	this->attackDamage = 20;
	std::cout << "Name Constructor Called" << std::endl;
}

ScavTrap::ScavTrap(const ScavTrap &var) {
	*this = var;
	std::cout << "Copy Constructor Called" << std::endl;
}

ScavTrap::~ScavTrap() {
	std::cout << "ScavTrap Deconstructor" << std::endl;
}
void ScavTrap::attack(const std::string &target) {
	if (this->energyPoint > 0 && this->hitPoint > 0){
		--this->energyPoint;
		std::cout << "ScavTrap "<<  this->name << " attack this target -> " << target << std::endl;
	}
	else
	{
		if (energyPoint < 1)
			std::cout << "Mana out" << std::endl;
		else
			std::cout << this->name << " died" << std::endl;
	}
}

void ScavTrap::guardGate() {
	if (this->hitPoint > 0 && this->energyPoint >0){
		std::cout << "This ScavTrap " << this->name << "in GuardGate Mode" << std::endl;
		return;
	}
	std::cout << "ScavTrap " << this->name << " cant in guard mode because is dead or mana out" << std::endl;
}

ScavTrap &ScavTrap::operator=(const ScavTrap &var) {
	this->name = var.name;
	this->energyPoint = var.energyPoint;
	this->hitPoint = var.hitPoint;
	this->attackDamage = var.attackDamage;
	std::cout << "ScavTrap Operator Load Called" << std::endl;
	return (*this);
}