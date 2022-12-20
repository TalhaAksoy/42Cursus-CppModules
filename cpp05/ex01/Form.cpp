//
// Created by Selim talha Aksoy on 12/20/22.
//

#include "Form.h"

Form::Form():_name("Default Name"),isSign(false),_requireToSign(150),_execToSign(150) {
	std::cout << "Const Called" << std::endl;
}

Form::Form(const std::string name_):_name(name_),isSign(false),_requireToSign(150),_execToSign(150) {
	std::cout << "Name Const Called" << std::endl;
}

Form::Form(const std::string name_, int requireToSign_, int execToSign_):_name(name_),isSign(false),_requireToSign(requireToSign_),_execToSign(execToSign_) {
	std::cout << "Name And Other Value Const Called" << std::endl;
}

Form::Form(const Form &var):_name(var._name),isSign(var.isSign),_requireToSign(var._requireToSign),_execToSign(var._execToSign) {
	std::cout << "Copy Const Called" << std::endl;
}

Form::~Form() {
	std::cout << "Form Deconst Called" << std::endl;
}

std::string Form::getName() const {
	return this->_name;
}

int Form::getExecToSign() const {
	return this->_execToSign;
}

void Form::setExecToSign(int sign_) {
	this->_execToSign = sign_;
}

int Form::getRequireToSign() const {
	return this->_requireToSign;
}

void Form::setRequireToSign(int sign_) {
	this->_requireToSign = sign_;
}

bool Form::isSigned() const {
	return this->isSign;
}

void Form::beSigned(const Bureaucrat &var) const {
	if (var.getGrade() <= this->_requireToSign){
		this->isSign = true;
		std::cout << var.getName() << " signed " << this->_name << std::endl;
	}else{
		std::cout << var.getName() << " couldn't sign " << this->_name << " because To Low Then Sign Grade" << std::endl;
		throw GradeTooLowException();
	}
}
