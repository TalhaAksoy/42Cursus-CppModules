//
// Created by Selim talha Aksoy on 12/12/22.
//

#ifndef CAT_H
#define CAT_H

#include "AAnimal.h"
#include "Brain.h"

class Cat:virtual public AAnimal{
private:
	Brain *brain;
public:
	Cat();
	Cat(std::string type);
	Cat(const Cat& var);
	~Cat();
	Cat &operator=(const Cat& var);
	void makeSound() const;
	std::string getType() const;
	void	compareTo ( const Cat& var ) const;
};


#endif //CAT_H
