//
// Created by Selim talha Aksoy on 10/20/22.
//

# include "PhoneBook.h"

int main()
{
	PhoneBook	phone;
	Contact		contact;
	string		process;
	string		searchIndex;

	for ( ; ; )
	{
		cout << "Sign a Process(ADD , SEARCH , EXIT)" << endl;
		std::getline(cin, process);
		if(process == "ADD")
			phone.setContact();
		else if (process == "SEARCH")
		{
			if (!phone.isUser(0))
			{
				cout << "No user in Phone Book" << endl;
				continue ;
			}
			phone.getUser();
			cout << "Sign IndexNumber: ";
			getline(cin, searchIndex);
			phone.getUserWithIndex(searchIndex);
		}
		else if (process == "EXIT")
			break ;
		else
			cout << "Command Not Found" << endl;
	}
	return 0;
}
