#include "Bureaucrat.h"
#include "Form.h"

int main()
{
	try{
		Bureaucrat bureaucrat("Bob", 10);
		Form form("Form", 5, 5);
		bureaucrat.signForm(form);

	}
	catch(std::exception& e) {
		std::cout << e.what() << std::endl;
	}
	return 0;
}