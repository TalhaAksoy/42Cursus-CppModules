//
// Created by Selim talha Aksoy on 12/12/22.
//

#ifndef WRONGCAT_H
#define WRONGCAT_H

#include "WrongAnimal.h"

class WrongCat: public WrongAnimal{
public:
	WrongCat();
	WrongCat(std::string type);
	WrongCat(const WrongCat& var);
	~WrongCat();
	WrongCat &operator=(const WrongCat& var);
	void makeSound() const;
	std::string getType() const;
};


#endif //WRONGCAT_H
