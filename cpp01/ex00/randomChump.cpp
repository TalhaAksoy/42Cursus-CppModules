//
// Created by Selim talha Aksoy on 10/21/22.
//

#include "Zombie.h"

void Zombie::randomChump(std::string name) {
	this->newZombie(name);
	this->announce();
}