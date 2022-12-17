//
// Created by Selim talha Aksoy on 12/16/22.
//

#include "Bureaucrat.h"

Bureaucrat &Bureaucrat::operator=(const Bureaucrat &var) {
	if(this == &var) {
		return *this;
	}
	this->setGrade(var.grade);
	return *this;
}

Bureaucrat::Bureaucrat(const std::string name, int grade):name(name) {
	setGrade(grade);
	std::cout << "Bureaucrat Default Constructor Called" << std::endl;
}

Bureaucrat::Bureaucrat(const Bureaucrat &var) {
	*this = var;
	std::cout << "Bureaucrat Copy Constructor Called" << std::endl;
}


int Bureaucrat::getGrade() const {
	return this->grade;
}

const std::string Bureaucrat::getName() const {
	return this->name;
}

void Bureaucrat::setGrade(int grade) {
	if (grade < 1){
		throw GradeTooHighException();
	}
	else if(grade > 150){
		throw GradeTooLowException();
	}
	else{
		this->grade = grade;
	}
}

Bureaucrat::~Bureaucrat() {
	std::cout << "Bureaucrat deconstructor called" << std::endl;
}

std::ostream &operator<<(std::ostream &out, Bureaucrat const &var){
	out << var.getName() << ", grade => " << var.getGrade() << std::endl;
	return (out);
}

void Bureaucrat::increment() {
	setGrade(this->grade - 1);
}

void Bureaucrat::increment(int nbr) {
	setGrade(this->grade - nbr);
}

void Bureaucrat::decrement() {
	setGrade(this->grade + 1);
}

void Bureaucrat::decrement(int nbr) {
	setGrade(this->grade + nbr);
}

void Bureaucrat::signForm(const Form& var) const{
	var.beSigned(*this);
}