//
// Created by Selim talha Aksoy on 12/20/22.
//

#include "PresidentialPardonForm.h"

PresidentialPardonForm::PresidentialPardonForm():AForm("PresidentialPardonForm", 25, 5), _target("default") {
	std::cout << "Presi Default Const Called" << std::endl;
}

PresidentialPardonForm::PresidentialPardonForm(std::string target):AForm("PresidentialPardonForm", 25, 5), _target(target) {
	std::cout << "Presi Target Const Called" << std::endl;
}

PresidentialPardonForm::PresidentialPardonForm(PresidentialPardonForm &var) {
	std::cout << "PresidentialPardonForm Copy Constructor called to copy " << var.getName() <<
			  " into " << this->getName() << std::endl;

	*this = var;
}

PresidentialPardonForm::~PresidentialPardonForm()
{
	std::cout << "PresidentialPardonForm Deconstructor " << this->getName() << " called" << std::endl;
}

PresidentialPardonForm &PresidentialPardonForm::operator=(const PresidentialPardonForm &var)
{
	std::cout << "PresidentialPardonForm Assignation operator called" << std::endl;
	if (this == &var)
		return *this;
	return *this;
}

std::string	PresidentialPardonForm::getTarget(void)const
{
	return (this->_target);
}

std::ostream	&operator<<(std::ostream &out, PresidentialPardonForm &var)
{
	out << "Form " << var.getName() <<
	  ":\n\tsign-grade:\t" << var.getRequireToSign() <<
	  "\n\texec-grade:\t" << var.getExecToSign() <<
	  "\n\tis signed:\t" << var.isSigned() <<
	  std::endl;
	return (out);
}

void PresidentialPardonForm::execute(const Bureaucrat &executor) const {
	if ((int)executor.getGrade() > this->getExecToSign())
		throw (Bureaucrat::GradeTooLowException());
	else if (this->isSigned() == false)
		throw (AForm::FormNotSignedException());
	else
		std::cout << this->getTarget() << " has been pardoned by Zaphod Beeblebrox" << std::endl;

}
