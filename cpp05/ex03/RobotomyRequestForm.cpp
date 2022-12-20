//
// Created by Selim talha Aksoy on 12/20/22.
//

#include "RobotomyRequestForm.h"

RobotomyRequestForm::RobotomyRequestForm():AForm("RobotomyRequestForm", 72, 45), _target("Default") {
	std::cout << "Default Const Called" << std::endl;
}

RobotomyRequestForm::RobotomyRequestForm(std::string target_):AForm("RobotomyRequestForm", 72, 45), _target(target_) {
	std::cout << "Target Const Called" << std::endl;
}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm &var):AForm("RobotomyRequestForm", 72, 45), _target(var._target) {
	std::cout << "Copy Const Called" << std::endl;
	*this = var;
}

RobotomyRequestForm::~RobotomyRequestForm(){
	std::cout << "Roboto Deconst " << this->getName() << " called " << std::endl;
}

RobotomyRequestForm &RobotomyRequestForm::operator=(const RobotomyRequestForm &var)
{
	std::cout << "RobotomyRequestForm Assignation operator called" << std::endl;
	if (this == &var)
		return *this;
	return *this;
}

std::string RobotomyRequestForm::getTarget() const {
	return this->_target;
}

static int randomNumber = 0;

void RobotomyRequestForm::execute(const Bureaucrat &executor) const {
	if ((int)executor.getGrade() > this->getExecToSign())
		throw (Bureaucrat::GradeTooLowException());
	else if(randomNumber++ % 2 == 0)
		std::cout << "UrrrrrrrrrrrU" << this->getTarget() << " do robotic sound" << std::endl;
	else
		std::cout << "Robotomy BOOOOMMMMM!!!!" << std::endl;
}

std::ostream	&operator<<(std::ostream &out, RobotomyRequestForm &var)
{
	out << "Form " << var.getName() <<
	  ":\n\tsign-grade:\t" << var.getRequireToSign() <<
	  "\n\texec-grade:\t" << var.getExecToSign() <<
	  "\n\tis signed:\t" << var.isSigned() <<
	  std::endl;
	return (out);
}