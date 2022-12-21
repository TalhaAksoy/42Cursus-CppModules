//
// Created by Selim talha Aksoy on 12/20/22.
//

# define warning "UwU"

#include "Bureaucrat.h"

int main(){
	try{
		Bureaucrat talha("talha", 200);
		std::cout << talha << std::endl;
	}
	catch (const std::exception& e){
		std::cerr << e.what() << std::endl;
	}
}