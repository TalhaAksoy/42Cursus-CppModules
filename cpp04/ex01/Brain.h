//
// Created by Selim talha Aksoy on 12/12/22.
//

#ifndef BRAIN_H
#define BRAIN_H

#include <iostream>

class Brain {
private:
	std::string *ideas;
public:
	Brain();
	Brain(std::string *var);
	Brain(const Brain& var);
	virtual ~Brain();
	Brain &operator=(const Brain& var);
	std::string *getIdeas() const;
};


#endif //BRAIN_H
