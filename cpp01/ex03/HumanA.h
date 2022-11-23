#include <iostream>
#include "Weapon.h"

class HumanA{
private:
	Weapon *wep;
	string name;
public:
	HumanA();
	HumanA(string name, Weapon &club);
	void	attack(void);
	void	setWeapon(Weapon &club);
};
