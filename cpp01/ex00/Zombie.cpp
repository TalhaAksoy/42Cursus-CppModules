//
// Created by Selim talha Aksoy on 10/21/22.
//

#include "Zombie.h"

Zombie::Zombie() : Name("Undefined") {
}

Zombie::Zombie(const std::string &name) {
	this->Name = name;
}

void Zombie::announce() {
	std::cout << this->Name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}

Zombie::~Zombie() {
	std::cout << this->Name << " deconsructer called" << std::endl;
}
