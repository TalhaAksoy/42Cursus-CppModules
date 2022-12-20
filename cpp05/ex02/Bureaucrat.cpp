//
// Created by Selim talha Aksoy on 12/20/22.
//

#include "Bureaucrat.h"


Bureaucrat::Bureaucrat():_name("WTF"),_grade(150) {
	std::cout << "Default Constructor Called" << std::endl;
}

Bureaucrat::Bureaucrat(std::string name_):_name(name_),_grade(150) {
	std::cout << "Name Constructor Called" << std::endl;
}

Bureaucrat::Bureaucrat(std::string name_, int grade_):_name(name_){
	setGrade(grade_);
	std::cout << "Name & Grade Constructor Called" << std::endl;
}

Bureaucrat::Bureaucrat(const Bureaucrat &var) {
	*this = var;
	std::cout << "Copy Const Called" << std::endl;
}

Bureaucrat::~Bureaucrat() {
	std::cout << "Deconst Called" << std::endl;
}

void Bureaucrat::setGrade(int grade_) {
	if (grade_ < 1){
		throw GradeTooHighException();
	}
	else if (grade_ > 150){
		throw GradeTooLowException();
	}
	else{
		_grade = grade_;
	}
}

int Bureaucrat::getGrade() const {
	return _grade;
}

std::string Bureaucrat::getName() const {
	return this->_name;
}

Bureaucrat &Bureaucrat::operator=(const Bureaucrat &var) {
	setGrade(var._grade);
	return (*this);
}

void Bureaucrat::signForm(const AForm &var) const {
	var.beSigned(*this);
}

void	Bureaucrat::executeForm(const AForm &form)
{
	try
	{
		form.execute(*this);
		std::cout << _name << " executed " << form.getName() << std::endl;
	}
	catch (const std::exception &e)
	{
		std::cout << _name << " couldn't execute " << form.getName() + " because ";

		std::cout << e.what() << std::endl;
	}
}

std::ostream &operator<<(std::ostream &out , const Bureaucrat& var){
	out << "Bureaucrat name => " << var.getName() << " | his grade => " << var.getGrade();
	return (out);
}