#include "Bureaucrat.h"
#include "AForm.h"
#include "ShrubberyCreationForm.h"
#include "RobotomyRequestForm.h"
#include "PresidentialPardonForm.h"

int main()
{
	try{
		Bureaucrat a("Bob", 1);
		ShrubberyCreationForm form("Form");
		RobotomyRequestForm asd("Form2");
		PresidentialPardonForm abc("Form3");

		a.signForm(abc);
		abc.execute(a);
		a.signForm(asd);
		asd.execute(a);
		a.signForm(form);
		form.execute(a);
	}
	catch(std::exception& e) {
		std::cout << e.what() << std::endl;
	}
	return 0;
}