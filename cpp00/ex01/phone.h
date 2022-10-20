//
// Created by Selim talha Aksoy on 10/20/22.
//

#ifndef CPP_MODULES_PHONE_H
#define CPP_MODULES_PHONE_H

#include <iostream>
#include "contact.h"

using std::string;
using std::cout;
using std::endl;
using std::cin;

class Phone {
public:
	void	setContact(void);
	void	getUser(string firstName);
private:
    Contact contact[8];
};


#endif //CPP_MODULES_PHONE_H
