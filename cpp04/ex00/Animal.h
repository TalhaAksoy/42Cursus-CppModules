//
// Created by Selim talha Aksoy on 12/12/22.
//

#ifndef ANIMAL_H
#define ANIMAL_H


#include <iostream>

class Animal {
protected:
	std::string type;
public:
	Animal();
	Animal(std::string type);
	Animal(const Animal& var);
	virtual ~Animal();
	Animal &operator=(const Animal& var);
	std::string getType() const;
	virtual void makeSound() const;
};


#endif //ANIMAL_H
