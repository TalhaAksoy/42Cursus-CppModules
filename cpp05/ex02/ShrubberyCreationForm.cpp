//
// Created by Selim talha Aksoy on 12/20/22.
//

#include "ShrubberyCreationForm.h"

ShrubberyCreationForm::ShrubberyCreationForm(): AForm("Default", 145, 137),_target("Default Target") {
	std::cout << "Shru Const Called" << std::endl;
}

ShrubberyCreationForm::ShrubberyCreationForm(const std::string target_):AForm("Default", 145, 137),_target(target_) {
	std::cout << "Target Const Called" << std::endl;
}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm &var):AForm("ShrubberyCreationForm", 145, 137), _target(var.getTarget()) {
	std::cout << "Copy Const Called" << std::endl;
	*this = var;
}


ShrubberyCreationForm::~ShrubberyCreationForm(){
	std::cout << this->getName() << " Deconst called" << std::endl;
}

std::string ShrubberyCreationForm::getTarget() const{
	return this->_target;
}

ShrubberyCreationForm &ShrubberyCreationForm::operator=(const ShrubberyCreationForm &var) {
	std::cout << "ShrubberyCreationForm Assignation operator called" << std::endl;
	if (this == &var)
		return *this;
	return *this;
}

void ShrubberyCreationForm::execute(const Bureaucrat &executor) const {
	if((int)executor.getGrade() > this->getExecToSign())
		throw (Bureaucrat::GradeTooLowException());
	else if (this->isSigned() == false){
		throw(AForm::FormNotSignedException());
	}
	else
	{
		std::ofstream ofs(this->getTarget() + "_shrubbery");
		if (!ofs.is_open())
			throw std::ofstream::failure(strerror(errno));
		ofs << "               ,@@@@@@@," << std::endl;
		ofs << "       ,,,.   ,@@@@@@/@@,  .oo8888o." << std::endl;
		ofs << "    ,&%%&%&&%,@@@@@/@@@@@@,8888\\88/8o" << std::endl;
		ofs << "   ,%&\\%&&%&&%,@@@\\@@@/@@@88\\88888/88'" << std::endl;
		ofs << "   %&&%&%&/%&&%@@\\@@/ /@@@88888\\88888'" << std::endl;
		ofs << "   %&&%/ %&%%&&@@\\ V /@@' `88\\8 `/88'" << std::endl;
		ofs << "   `&%\\ ` /%&'    |.|        \\ '|8'" << std::endl;
		ofs << "       |o|        | |         | |" << std::endl;
		ofs << "       |.|        | |         | |" << std::endl;
		ofs << "    \\/ ._\\//_/__/  ,\\_//__\\/.  \\_//__/_" << std::endl;

	}
}

std::ostream &operator<<(std::ostream &out, ShrubberyCreationForm &var){
	out << "Form " << var.getName() <<
	  ":\n\tsign-grade:\t" << var.getRequireToSign() <<
	  "\n\texec-grade:\t" << var.getExecToSign() <<
	  "\n\tis signed:\t" << var.isSigned() <<
	  std::endl;
	return (out);
}