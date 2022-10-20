//
// Created by Selim talha Aksoy on 10/20/22.
//

# include "phone.h"

int main()
{
	Phone	phone;
	string	process;
	int		searchIndex;

	for ( ; ; )
	{
		cout << "Sign a Process" << endl;
		cin >> process;
		if(process == "ADD")
			phone.setContact();
		else if (process == "SEARCH")
		{
			cout << "Sign IndexNumber: ";
			cin >> searchIndex;
			phone.getUser(searchIndex);
		}
		else if (process == "EXIT")
			break ;
		else
			cout << "Command Not Found" << endl;
	}
	return 0;
}
