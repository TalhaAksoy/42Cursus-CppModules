//
// Created by Mehmet eren Akbulut on 12/11/22.
//

#include "Form.hpp"
#include "Bureaucrat.hpp"

Form::Form() :_name("Form"), _sign(false), _signExec(1), _signGrade(1) {
    return;
}

Form::Form(const std::string name) : _name(name), _sign(false),  _signExec(1), _signGrade(1){
    return;
}

Form::Form(const std::string name, const unsigned int signGrade, const unsigned int signExec): _name(name), _sign(false), _signExec(signExec), _signGrade(signGrade){
    return;
}

Form::Form(const Form& other) :  _name(other._name), _sign(other._sign), _signExec(other._signExec), _signGrade(other._signGrade) {
    return;
}

Form& Form::operator=(const Form &other){
    this->_sign = other._sign;
    return *this;
}

Form::~Form(void)
{
    return;
}

unsigned int Form::getGradeSign() const
{
    return this->_signGrade;
}

unsigned int Form::getGradeExec() const
{
    return this->_signExec;
}

std::string Form::getName() const
{
    return this->_name;
}

bool Form::isSigned() const
{
    return this->_sign;
}

void Form::beSigned(const Bureaucrat& candidate)
{
    if (!this->_sign)
    {
        if (candidate.getGrade() <= this->_sign)
            this->_sign = true;
        else
            throw Form::GradeTooLowException();
    }
    else
        throw Form::GradeTooHighException();
}

std::ostream& operator<<(std::ostream& o, const Form& rhs)
{
    o << "Form " << rhs.getName() << ": ";
    o << "{signed: " << std::boolalpha << rhs.isSigned() << ", gradeSign: " << rhs.getGradeSign() << ", gradeExec: " << rhs.getGradeExec() << "}";
    return o;
}