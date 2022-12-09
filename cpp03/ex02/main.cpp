#include "ScavTrap.h"
#include "FragTrap.h"

int main()
{
	FragTrap talha("talha");

	talha.takeDamage(20);
	talha.beRepaired(10);
	talha.highFivesGuys();
}