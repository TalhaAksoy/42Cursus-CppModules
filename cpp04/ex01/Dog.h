//
// Created by Selim talha Aksoy on 12/12/22.
//

#ifndef DOG_H
#define DOG_H

#include "Animal.h"
#include "Brain.h"

class Dog:public Animal{
private:
	Brain *brain;
public:
	Dog();
	Dog(std::string type);
	Dog(const Dog& var);
	~Dog();
	Dog &operator=(const Dog& var);
	void makeSound() const;
	std::string getType() const;
	void	compareTo ( const Dog& var ) const;
};


#endif //DOG_H
