#ifndef HUMANB_H
# define HUMANB_H

# include <iostream>
# include "Weapon.h"

class HumanB{
private:
	Weapon *wep;
	string name;
public:
	HumanB();
	HumanB(string name);
	void	attack(void);
	void	setWeapon(Weapon &club);
};

#endif