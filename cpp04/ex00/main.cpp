//
// Created by Selim talha Aksoy on 12/12/22.
//

#include "Cat.h"
#include "Dog.h"
#include "WrongCat.h"

int main()
{
	const AAnimal* meta = new AAnimal();
	const AAnimal* j = new Dog();
	const AAnimal* i = new Cat();
	const WrongAnimal* c = new WrongCat();
	std::cout << j->getType() << " " << std::endl;
	std::cout << i->getType() << " " << std::endl;
	std::cout << c->getType() << " " << std::endl;
	i->makeSound(); //will output the cat sound!
	j->makeSound();
	meta->makeSound();
	c->makeSound();

	delete meta;
	delete j;
	delete i;
	delete c;
	return 0;
}