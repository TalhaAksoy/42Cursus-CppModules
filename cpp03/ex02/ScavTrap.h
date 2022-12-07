//
// Created by Selim talha Aksoy on 12/6/22.
//

#ifndef SCAVTRAP_H
#define SCAVTRAP_H

# include "ClapTrap.h"

class ScavTrap:public ClapTrap{
public:
	ScavTrap();
	ScavTrap(std::string name);
	ScavTrap(const ScavTrap& var);
	~ScavTrap();
	void guardGate();
	ScavTrap& operator=(const ScavTrap& var);
	void attack(const std::string& target);
};


#endif //SCAVTRAP_H
