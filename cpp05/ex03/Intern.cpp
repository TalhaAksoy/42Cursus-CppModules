//
// Created by Mehmet eren Akbulut on 12/13/22.
//

#include "Intern.hpp"
#include "ShrubberyCreationForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"

Intern::Intern() {}

Intern::~Intern() {}
//
//int check(const std::string& AFormName){
//    for (int i = 0; i < 3; i++)
//        if (AFormName == "shrubbery creation" || AFormName == "robotomy request" || AFormName == "presidential pardon")
//            return 0;
//    return 1;
//}

AForm* Intern::makeForm(const std::string& AFormName, const std::string& target) const
{
//    if (check(AFormName)) {
//        throw Intern::InvalidAFormException();
////        return (NULL);
//    }
    std::string AFormNames[3] = {
            "shrubbery creation",
            "robotomy request",
            "presidential pardon"
    };
    int i = 0;
    while (i < 3 && AFormNames[i] != AFormName)
        i++;
    AForm* tmp = NULL;
    switch (i)
    {
        case 0:
            tmp = new ShrubberyCreationForm(target);
            break;
        case 1:
            tmp = new RobotomyRequestForm(target);
            break;
        case 2:
            tmp = new PresidentialPardonForm(target);
            break;
        default:
            throw Intern::InvalidAFormException();
    }
    std::cout << "Intern creates " << AFormName << std::endl;
    return tmp;
}
