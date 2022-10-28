#include "Zombie.h"

Zombie::Zombie() : Name("Undefined"){
}

Zombie::Zombie(const std::string &name) {
	this->Name = name;
}

Zombie *Zombie::newZombie(std::string name) {
	return new Zombie(name);
}

void Zombie::announce() {
	std::cout << this->Name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}

void Zombie::randomChump(std::string name) {
	Zombie zombie(name);
	zombie.announce();
}

void Zombie::setName(const std::string &name) {
	this->Name = name;
}

Zombie::~Zombie() {
	std::cout << this->Name << " deconsructer called" << std::endl;
}