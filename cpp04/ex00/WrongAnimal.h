//
// Created by Selim talha Aksoy on 12/12/22.
//

#ifndef WRONGANIMAL_H
#define WRONGANIMAL_H

#include <iostream>

class WrongAnimal {
protected:
	std::string type;
public:
	WrongAnimal();
	WrongAnimal(std::string type);
	WrongAnimal(const WrongAnimal& var);
	virtual ~WrongAnimal();
	WrongAnimal &operator=(const WrongAnimal& var);
	std::string getType() const;
	virtual void makeSound() const;
};


#endif //WRONGANIMAL_H
