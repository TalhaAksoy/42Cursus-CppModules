//
// Created by Selim talha Aksoy on 10/20/22.
//

# include "phoneBook.h"

int main()
{
	PhoneBook	phone;
	Contact		contact;
	string		process;
	string		searchIndex;

	for ( ; ; )
	{
		cout << "Sign a Process" << endl;
		std::getline(cin, process);
		if(process == "ADD")
			phone.setContact();
		else if (process == "SEARCH")
		{
			cout << "Sign IndexNumber: ";
			std::getline(cin, searchIndex);
			phone.getUser(searchIndex);
		}
		else if (process == "EXIT")
			break ;
		else
			cout << "Command Not Found" << endl;
	}
	return 0;
}
