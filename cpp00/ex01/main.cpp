//
// Created by Selim talha Aksoy on 10/20/22.
//

# include "phone.h"

int main()
{
	Phone	phone;
	string	process;
	string	userName;

	for ( ; ; )
	{
		cout << "Sign a Process" << endl;
		cin >> process;
		if(process == "ADD")
			phone.setContact();
		else if (process == "SEARCH")
		{
			cout << "Sign FirstName: ";
			cin >> userName;
			phone.getUser(userName);
		}
		else if (process == "EXIT")
			break ;
		else
			cout << "Command Not Found" << endl;
	}
	return 0;
}
