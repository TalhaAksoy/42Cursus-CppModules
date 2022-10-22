//
// Created by Selim talha Aksoy on 10/20/22.
//

#ifndef PHONE_BOOK_H
#define PHONE_BOOK_H

#include <iostream>
#include "contact.h"

using std::string;
using std::cout;
using std::endl;
using std::cin;

class PhoneBook {
public:
	void		setContact(void);
	void		getUser(string index);
	int			strchrcmp(std::string s1,char c);
	std::string	takeInput(void);
private:
    Contact contact[8];
};


#endif //PHONE_BOOK_H
