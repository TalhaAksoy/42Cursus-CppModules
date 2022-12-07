//
// Created by Selim talha Aksoy on 12/7/22.
//

#ifndef INC_42CURSUS_CPPMODULES_FRAGTRAP_H
#define INC_42CURSUS_CPPMODULES_FRAGTRAP_H

#include "ScavTrap.h"

class FragTrap:public ClapTrap{
public:
	FragTrap();
	FragTrap(std::string name);
	FragTrap(const FragTrap& var);
	~FragTrap();
	FragTrap &operator=(const FragTrap &var);
	void highFivesGuys(void);
};


#endif //FRAGTRAP_H
