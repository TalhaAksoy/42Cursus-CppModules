//
// Created by saksoy on 12/3/22.
//

# include "ScavTrap.h"

int main(){
	ScavTrap talha;
	ClapTrap* asd = new ScavTrap();

	asd->attack("talha");
	talha.attack("asd");
	talha.beRepaired(20);
	talha.guardGate();
}
