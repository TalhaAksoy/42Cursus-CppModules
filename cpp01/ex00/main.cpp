// Created by Selim talha Aksoy on 10/27/22.

#include "Zombie.h"

int	main()
{
	Zombie	zombie;
	Zombie	*zombieptr;

	zombieptr = zombie.newZombie("selam");
	zombie.announce();
	zombieptr->announce();
	zombie.randomChump("Zombie");
	delete zombieptr;
}