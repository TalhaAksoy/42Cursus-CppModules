//
// Created by Selim talha Aksoy on 12/16/22.
//

#include "Bureaucrat.h"

int main()
{
	try{
		Bureaucrat bureaucrat("Bob", 10);
		std::cout << bureaucrat;

		Bureaucrat bureaucrat2("bob",0);
	}
	catch(std::exception& e) {
		std::cout << e.what() << std::endl;
	}
	return 0;
}