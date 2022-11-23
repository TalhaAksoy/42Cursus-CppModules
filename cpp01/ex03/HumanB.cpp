#include "HumanB.h"

HumanB::HumanB(){
	this->name = "Default Name";
	this->wep = NULL;
}

HumanB::HumanB(std::string name) {
	this->name = name;
	this->wep = NULL;
}

void HumanB::setWeapon(Weapon &club) {
	this->wep = &club;
}

void HumanB::attack() {
	if (this->wep != NULL)
		cout << this->name << " attacks with their " << this->wep->getType() << endl;
}