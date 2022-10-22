//
// Created by Selim talha Aksoy on 10/21/22.
//

#include "Zombie.h"

Zombie *Zombie::newZombie(std::string name) {
	return new Zombie(name);
}