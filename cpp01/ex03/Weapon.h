//
// Created by Selim talha Aksoy on 10/28/22.
//

#ifndef WEAPON_H
#define WEAPON_H

#include <iostream>
using std::cout;
using std::endl;
using std::string;

class Weapon
{
private:
	string type;

public:
	Weapon();
	Weapon(string type);
	const string &getType(void);
	void setType(string type);
};

#endif // WEAPON_H
