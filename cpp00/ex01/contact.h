//
// Created by Selim talha Aksoy on 10/20/22.
//

#ifndef CPP_MODULES_CONTACT_H
#define CPP_MODULES_CONTACT_H

#include <iostream>

using std::string;
using std::cout;
using std::endl;
using std::cin;

class Contact{
public:
	void	setFirstName(string firstName);
	void	setLastName(string lastName);
	void	setNickName(string nickName);
	void	setPhoneNumber(string phoneNumber);
	void	setSecret(string secret);
	void	setIndex(int nbr);
	const	string&	getFirstName(void);
	const	string&	getLastName(void);
	const	string&	getNickName(void);
	const	string&	getPhoneNumber(void);
	const	string&	getSecret(void);
	const	int&	getIndex(void);
private:
	string	firstName;
	string	lastName;
	string	nickName;
	string	phoneNumber;
	string	secret;
	int 	index;
};


#endif //CPP_MODULES_CONTACT_H
