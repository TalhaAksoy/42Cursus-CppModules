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
	~ScavTrap();
	void guardGate();
	void attack(const std::string& target);
};


#endif //INC_42CURSUS_CPPMODULES_SCAVTRAP_H
