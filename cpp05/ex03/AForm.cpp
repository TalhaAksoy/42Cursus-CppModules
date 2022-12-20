//
// Created by Selim talha Aksoy on 12/20/22.
//

#include "AForm.h"

AForm::AForm():_name("Default Name"),isSign(false),_requireToSign(150),_execToSign(150) {
	std::cout << "Const Called" << std::endl;
}

AForm::AForm(const std::string name_):_name(name_),isSign(false),_requireToSign(150),_execToSign(150) {
	std::cout << "Name Const Called" << std::endl;
}

AForm::AForm(const std::string name_, int requireToSign_, int execToSign_):_name(name_),isSign(false),_requireToSign(requireToSign_),_execToSign(execToSign_) {
	std::cout << "Name And Other Value Const Called" << std::endl;
}

AForm::AForm(const AForm &var):_name(var._name),isSign(var.isSign),_requireToSign(var._requireToSign),_execToSign(var._execToSign) {
	std::cout << "Copy Const Called" << std::endl;
}

AForm::~AForm() {
	std::cout << "AForm Deconst Called" << std::endl;
}

std::string AForm::getName() const {
	return this->_name;
}

int AForm::getExecToSign() const {
	return this->_execToSign;
}

void AForm::setExecToSign(int sign_) {
	this->_execToSign = sign_;
}

int AForm::getRequireToSign() const {
	return this->_requireToSign;
}

void AForm::setRequireToSign(int sign_) {
	this->_requireToSign = sign_;
}

bool AForm::isSigned() const {
	return this->isSign;
}

void AForm::beSigned(const Bureaucrat &var) const {
	if (var.getGrade() <= this->_requireToSign){
		this->isSign = true;
		std::cout << var.getName() << " signed " << this->_name << std::endl;
	}else{
		std::cout << var.getName() << " couldn't sign " << this->_name << " because To Low Then Sign Grade" << std::endl;
		throw GradeTooLowException();
	}
}

std::ostream &operator<<(std::ostream &out , const AForm& var){
	out << var.getName() + " form is " << (var.isSigned() ? "signed," : "not signed,");
	out << " requires grade " << var.isSigned() << " to sign and grade ";
	out << var.getExecToSign() << " to execute";
	return (out);
}
