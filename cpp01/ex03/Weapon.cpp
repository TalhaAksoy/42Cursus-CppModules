//
// Created by Selim talha Aksoy on 10/28/22.
//

#include "Weapon.h"

std::string const &Weapon::getType(){
	return this->type;
}

void Weapon::setType(string type){
	this->type = type;
}

Weapon::Weapon(){
	this->type = "Undefined Type";
}

Weapon::Weapon(string type){
	this->type = type;
}