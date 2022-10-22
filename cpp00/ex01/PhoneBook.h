//
// Created by Selim talha Aksoy on 10/20/22.
//

#ifndef PHONE_BOOK_H
#define PHONE_BOOK_H

#include <iostream>
#include "Contact.h"

using std::string;
using std::cout;
using std::endl;
using std::cin;

class PhoneBook {
public:
	void		setContact(void);
	void		getUser(void);
	int			strchrcmp(std::string s1);
	std::string	takeInput(void);
	int			getUserWithIndex(string index);
	int 		isUser(int index);
private:
    Contact contact[8];
};


#endif //PHONE_BOOK_H
