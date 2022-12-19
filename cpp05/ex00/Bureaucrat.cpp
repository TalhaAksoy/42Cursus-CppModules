//
// Created by Mehmet eren Akbulut on 12/10/22.
//

#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat(void) : _name("Bureaucrat"), _grade(150){
    return;
}

Bureaucrat::Bureaucrat(const std::string name, unsigned int grade) : _name(name){
    if (grade > 150)
        throw Bureaucrat::GradeTooLowException();
    else if (grade < 1)
        throw Bureaucrat::GradeTooHighException();
    else
        std::cout << "Grade bu sayıyı alamaz" << std::endl;this->_grade = grade;
    return;
}

Bureaucrat::Bureaucrat(const Bureaucrat &other) : _name(other._name), _grade(other._grade) {}

Bureaucrat& Bureaucrat::operator=(const Bureaucrat &other) {
    this->_name = other._name;
    this->_grade = other._grade;
    return (*this);
}

Bureaucrat& Bureaucrat::operator++() {
    this->_grade++;
    return (*this);
}

Bureaucrat& Bureaucrat::operator--() {
    this->_grade--;
    return (*this);
}

Bureaucrat Bureaucrat::operator++(int) {
    if (this->_grade >= 150)
        throw Bureaucrat::GradeTooHighException();
    Bureaucrat tmp = *this;
    ++*this;
    return tmp;
}

Bureaucrat Bureaucrat::operator--(int) {
    if (this->_grade <= 1)
        throw Bureaucrat::GradeTooLowException();
    Bureaucrat tmp = *this;
    --*this;
    return tmp;
}

void    Bureaucrat::decrementGrade(void){
    if (this->_grade >= 150)
        throw Bureaucrat::GradeTooLowException();
    else
        this->_grade++;
}
void    Bureaucrat::incrementGrade(void){
    if (this->_grade <= 1)
        throw Bureaucrat::GradeTooHighException();
    else
        this->_grade--;
}

void        Bureaucrat::setGrade(int grade) {
    this->_grade = grade;
    return;
}
std::string const   Bureaucrat::getName(void) const{
    return this->_name;
}

int                 Bureaucrat::getGrade(void) const{
    return this->_grade;
}

std::ostream& operator<<(std::ostream &o, const Bureaucrat &other){
    o << other.getName() << ", breaucrat grade " << other.getGrade();
    return o;
}