//
// Created by Selim talha Aksoy on 10/20/22.
//

#include "PhoneBook.h"

int PhoneBook::strchrcmp(std::string s1)
{
	for(size_t i = 0; i < s1.length();i++)
		if (s1[i] != ' ' && s1[i] != '\t')
			return (1);
	return (0);
}

std::string PhoneBook::takeInput()
{
	std::string in;
	std::getline(std::cin, in);

	while (in.empty() || !strchrcmp(in) || !strchrcmp(in))
	{
		if (in.empty() || !strchrcmp(in) || !strchrcmp(in))
			std::cout << "Input is empty, try again: ";
		std::getline(std::cin, in);
	}
	return (in);
}

void PhoneBook::setContact() {
	string	addFirstName;
	string	addLastName;
	string	addNickName;
	string	addPhoneNumber;
	string	addSecret;
	static int i = 0;
	this->contact[i % 8].setIndex(i % 8);
	cout << "First Name: ";
	this->contact[i % 8].setFirstName(addFirstName = takeInput());
	cout << "Last Name: ";
	this->contact[i % 8].setLastName(addLastName = takeInput());
	cout << "Nick Name: ";
	this->contact[i % 8].setNickName(addNickName = takeInput());
	cout << "Phone Number: ";
	this->contact[i % 8].setPhoneNumber(addPhoneNumber = takeInput());
	cout << "Add Darkest Secret: ";
	this->contact[i % 8].setSecret(addSecret = takeInput());
	i++;
	return ;
}

void	printUser(std::string str)
{
	std::string s;
	int	len = str.length();
	if (len > 10)
	{
		s = str.substr(0,9);
		s.append(".");
		cout << "|" << s;
	}
	else
	{
		cout << "|";
		for (int i = 0; i < 10 - len; i++)
			cout << ' ';
		cout << str;
	}

}

void PhoneBook::getUser(void) {
	for(int i = 0; i < 8; i++){
		if (!this->contact[i].getFirstName().empty())
		{
				cout << "|     Index| FirstName|  LastName|  NickName|" << endl;
				cout << "|         " << this->contact[i].getIndex();
				printUser(this->contact[i].getFirstName());
				printUser(this->contact[i].getLastName());
				printUser(this->contact[i].getNickName());
				cout << "|";
				cout << endl;
		}
	}
}

int PhoneBook::isUser(int index) {
	if (this->contact[index].getFirstName().empty())
		return (0);
	return (1);
}

int PhoneBook::getUserWithIndex(std::string index) {
	int searchIndex = std::atoi(index.c_str());
	if (!this->contact[searchIndex].getFirstName().empty())
	{
		cout << "Contact Index: " << this->contact[searchIndex].getIndex() << endl;
		cout << "First Name: "<< this->contact[searchIndex].getFirstName() << endl;
		cout << "Last Name: " << this->contact[searchIndex].getLastName() << endl;
		cout << "Nick Name: " << this->contact[searchIndex].getNickName() << endl;
		cout << "Phone Number: "<< this->contact[searchIndex].getPhoneNumber() << endl;
		cout << "Darkest Secret: " << this->contact[searchIndex].getSecret() << endl;
		return (1);
	}
	else
	{
		cout << "USER NOT FOUND!" << endl;
		return (0);
	}
}