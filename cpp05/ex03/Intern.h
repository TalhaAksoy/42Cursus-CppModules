//
// Created by Selim talha Aksoy on 12/20/22.
//

#pragma once

# include <iostream>
# include <string>
# include "AForm.h"
# include "ShrubberyCreationForm.h"
# include "RobotomyRequestForm.h"
# include "PresidentialPardonForm.h"

class Intern {
private:
	AForm   *makeShrubberyCreationForm(const std::string target);
	AForm   *makeRobotomyRequestForm(const std::string target);
	AForm   *makePresidentialPardonForm(const std::string target);
public:
	Intern();
	Intern(const Intern& var);
	Intern &operator=(const Intern& var);
	~Intern();

	AForm	*makeForm(const std::string _name, const std::string target);

	class FormNotFound:public std::exception{
		public:
			const char* what() const throw(){
				return "Form Not Found";
			}
	};
};
