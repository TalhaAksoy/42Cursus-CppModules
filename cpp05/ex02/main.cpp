#include "Bureaucrat.h"
#include "AForm.h"
#include "ShrubberyCreationForm.h"
#include "RobotomyRequestForm.h"
#include "PresidentialPardonForm.h"

int main()
{
	try{
		Bureaucrat a("Bob", 600);
		ShrubberyCreationForm form("Form");
		RobotomyRequestForm asd("Form2");
		PresidentialPardonForm abc("Form3");

		a.signForm(abc);
		a.executeForm(abc);
		a.signForm(asd);
		a.executeForm(asd);
		a.signForm(form);
		a.executeForm(form);
	}
	catch(std::exception& e) {
		std::cout << e.what() << std::endl;
	}
	return 0;
}