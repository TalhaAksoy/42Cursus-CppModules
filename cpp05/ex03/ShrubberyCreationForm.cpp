//
// Created by Mehmet eren Akbulut on 12/11/22.
//

#include "ShrubberyCreationForm.hpp"
#include <fstream>

ShrubberyCreationForm::ShrubberyCreationForm(const std::string &target) : AForm("shrubbery", target, 145, 137) {
    return;
}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm &other) : AForm(other) {
    return;
}

ShrubberyCreationForm &ShrubberyCreationForm::operator=(const ShrubberyCreationForm &rhs) {
    this->AForm::operator=(rhs);
    return *this;
}

ShrubberyCreationForm::~ShrubberyCreationForm() {
    return;
}

ShrubberyCreationForm::ShrubberyCreationForm(): AForm("shrubbery", "default", 145, 137) {
    return;
}

void ShrubberyCreationForm::action(const Bureaucrat &executor) const {
    this->AForm::execute(executor);
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