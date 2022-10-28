#include <iostream>

class Zombie
{
private:
	std::string Name;
public:
	Zombie();
	Zombie(const std::string& name);

	void	announce();
	Zombie*	newZombie(std::string name);
	void	randomChump(std::string name);
	void	setName(const std::string& name);
	Zombie* zombieHorde( int N, std::string name );

	~Zombie();
};