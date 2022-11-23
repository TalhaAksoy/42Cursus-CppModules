#include "HumanA.h"

HumanA::HumanA() {
	this->name = "Default Name";
	this->wep->setType("Default Type");
}

HumanA::HumanA(std::string name, Weapon &club) {
	this->name = name;
	this->wep = &club;
}

void HumanA::setWeapon(Weapon &club) {
	this->wep = &club;
}

void HumanA::attack() {
		cout << this->name << " attacks with their " << this->wep->getType() << endl;
}