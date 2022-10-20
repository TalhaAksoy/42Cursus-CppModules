//
// Created by Selim talha Aksoy on 10/20/22.
//

#include "phone.h"


void Phone::setContact() {
	string	addFirstName;
	string	addLastName;
	string	addNickName;
	string	addPhoneNumber;
	string	addSecret;
	static int i = 0;
	this->contact[i % 8].setIndex(i % 8);
	cout << "Sign Name: ";
	cin >> addFirstName;
	this->contact[i % 8].setFirstName(addFirstName);
	cout << "Last Name: ";
	cin >>addLastName;
	this->contact[i % 8].setLastName(addLastName);
	cout << "Nick Name: ";
	cin >> addNickName;
	this->contact[i % 8].setNickName(addNickName);
	cout << "Phone Number: ";
	cin >> addPhoneNumber;
	this->contact[i % 8].setPhoneNumber(addPhoneNumber);
	cout << "Add Darkest Secret: ";
	cin >> addSecret;
	this->contact[i % 8].setSecret(addSecret);
	i++;
	return ;
}

void	printUser(std::string str)
{
	int	len = str.length();
	if (len > 10)
	{
		str[9] = '.';
		str[10] = '\0';
		cout << "|" << str;
	}
	else
	{
		cout << "|";
		for (int i = 0; i < 10 - len; i++)
			cout << ' ';
		cout << str;
	}

}

void Phone::getUser(std::string firstName) {
	for(int i = 0; i < 8; i++){
		if (this->contact[i].getFirstName() == firstName)
		{
			cout << "|     Index| FirstName|  LastName|  NickName|" << endl;
			cout << "|         " << this->contact[i].getIndex();
			printUser(this->contact[i].getFirstName());
			printUser(this->contact[i].getLastName());
			printUser(this->contact[i].getNickName());
			cout << "|";
			cout << endl;
			return ;
		}
	}
	cout << "User Not Found" << endl;
}