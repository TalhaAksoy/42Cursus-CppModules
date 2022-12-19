//
// Created by Mehmet eren Akbulut on 12/11/22.
//

#include "AForm.hpp"
#include "Bureaucrat.hpp"

AForm::AForm() : _name(""), _target(""), _sign(false), _signExec(1), _signGrade(1) {
    return;
}

AForm::AForm(const std::string name) : _name(name), _target(""), _sign(false), _signExec(1), _signGrade(1) {
    return;
}

AForm::AForm(const std::string name, const std::string target) : _name(name), _target(target), _sign(false),
                                                                 _signExec(1), _signGrade(1) {
    return;
}

AForm::AForm(const std::string name, const std::string target, const unsigned int signGrade,
             const unsigned int signExec) : _name(name), _target(target), _sign(false), _signExec(signExec),
                                            _signGrade(signGrade) {
    if (signGrade < 1 || signExec < 1)
        throw AForm::GradeTooHighException();
    else if (signGrade > 150 || signExec > 150)
        throw AForm::GradeTooLowException();
    return;
}

AForm::AForm(const std::string name, const unsigned int signGrade, const unsigned int signExec) : _name(name),
                                                                                                  _sign(false),
                                                                                                  _signExec(signExec),
                                                                                                  _signGrade(
                                                                                                          signGrade) {
    if (signGrade < 1 || signExec < 1)
        throw AForm::GradeTooHighException();
    else if (signGrade > 150 || signExec > 150)
        throw AForm::GradeTooLowException();
    return;
}

AForm::AForm(const AForm &other) : _name(other._name), _target(other._target), _sign(other._sign),
                                   _signExec(other._signExec), _signGrade(other._signGrade) {
    return;
}

AForm &AForm::operator=(const AForm &other) {
    this->_sign = other._sign;
    return *this;
}

AForm::~AForm(void) {
    return;
}

unsigned int AForm::getGradeSign() const {
    return this->_signGrade;
}

unsigned int AForm::getGradeExec() const {
    return this->_signExec;
}

std::string AForm::getName() const {
    return this->_name;
}

std::string AForm::getTarget() const {
    return this->_target;
}

bool AForm::isSigned() const {
    return this->_sign;
}

void AForm::beSigned(const Bureaucrat &candidate) {
    if (!this->_sign) {
        if (candidate.getGrade() <= this->_signGrade)
            this->_sign = true;
        else
            throw AForm::GradeTooLowException();
    } else
        throw AForm::GradeTooHighException();
}


void AForm::execute(Bureaucrat const &executor) const {
    if (!this->isSigned())
        throw AForm::FormNotSignedException();
    if (executor.getGrade() > this->getGradeExec())
        throw AForm::GradeTooLowException();
    return;
}

std::ostream &operator<<(std::ostream &o, const AForm &rhs) {
    o << "AForm " << rhs.getName() << ": ";
    o << "{signed: " << std::boolalpha << rhs.isSigned() << ", gradeSign: " << rhs.getGradeSign() << ", gradeExec: "
      << rhs.getGradeExec() << "}";
    return o;
}
