//
// Created by Selim talha Aksoy on 10/21/22.
//

#ifndef ZOMBIE_H
#define ZOMBIE_H

#include <iostream>

class Zombie {
private:
	std::string	Name;
public:
	Zombie();
	Zombie(const std::string& name);
	void announce(void);
	Zombie	*newZombie(std::string name);
	void	randomChump(std::string name);
	~Zombie();
};


#endif //ZOMBIE_H
