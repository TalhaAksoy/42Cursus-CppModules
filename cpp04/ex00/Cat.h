//
// Created by Selim talha Aksoy on 12/12/22.
//

#ifndef CAT_H
#define CAT_H

#include "Animal.h"

class Cat:public Animal{
public:
	Cat();
	Cat(std::string type);
	Cat(const Cat& var);
	~Cat();
	Cat &operator=(const Cat& var);
	void makeSound() const;
	std::string getType() const;
};


#endif //CAT_H
