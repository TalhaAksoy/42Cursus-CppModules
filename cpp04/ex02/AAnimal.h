//
// Created by Selim talha Aksoy on 12/12/22.
//

#ifndef AANIMAL_H
#define AANIMAL_H


#include <iostream>

class AAnimal {
protected:
	std::string type;
public:
	AAnimal();
	AAnimal(std::string type);
	AAnimal(const AAnimal& var);
	virtual ~AAnimal();
	AAnimal &operator=(const AAnimal& var);
	virtual std::string getType() const;
	virtual void makeSound() const = 0;
};


#endif //AANIMAL_H
