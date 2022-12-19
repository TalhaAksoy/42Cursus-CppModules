//
// Created by Mehmet eren Akbulut on 12/10/22.
//

#include "Bureaucrat.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "Intern.hpp"

//int main()
//{
//    srand(time(NULL));
//
//    Bureaucrat john("John", 5);
//    Bureaucrat jim("Jim", 45);
//    Bureaucrat jane("Jane", 137);
//
//    std::cout << john << std::endl;
//    std::cout << jim << std::endl;
//    std::cout << jane << std::endl;
//
//    Intern intern;
//
//    AForm* AFormA;
//    AForm* AFormB;
//    AForm* AFormC;
//    AForm* AFormD;
//
//    try
//    {
//        AFormA = intern.makeForm("shrubbery creation", "home");
//        AFormB = intern.makeForm("robotomy request", "Bender");
//        AFormC = intern.makeForm("presidential pardon", "Stephen Bannon");
//        AFormD = intern.makeForm("test", "test");
//    }
//    catch(const std::exception& e)
//    {
//        std::cerr << e.what() << '\n';
//    }
//
//    std::cout << std::endl;
//    john.executeForm(*AFormA);
//    jim.executeForm(*AFormA);
//    jane.executeForm(*AFormA);
//    std::cout << std::endl;
//    john.signForm(*AFormA);
//    jim.signForm(*AFormA);
//    jane.signForm(*AFormA);
//    std::cout << std::endl;
//    john.executeForm(*AFormA);
//    jim.executeForm(*AFormA);
//    jane.executeForm(*AFormA);
//    std::cout << std::endl;
//    std::cout << "-------------------------------------------------------" << std::endl;
//    std::cout << std::endl;
//    john.executeForm(*AFormB);
//    jim.executeForm(*AFormB);
//    jane.executeForm(*AFormB);
//    std::cout << std::endl;
//    john.signForm(*AFormB);
//    jim.signForm(*AFormB);
//    jane.signForm(*AFormB);
//    std::cout << std::endl;
//    john.executeForm(*AFormB);
//    jim.executeForm(*AFormB);
//    jane.executeForm(*AFormB);
//    std::cout << std::endl;
//    std::cout << "-------------------------------------------------------" << std::endl;
//    std::cout << std::endl;
//    john.executeForm(*AFormC);
//    jim.executeForm(*AFormC);
//    jane.executeForm(*AFormC);
//    std::cout << std::endl;
//    john.signForm(*AFormC);
//    jim.signForm(*AFormC);
//    jane.signForm(*AFormC);
//    std::cout << std::endl;
//    john.executeForm(*AFormC);
//    jim.executeForm(*AFormC);
//    jane.executeForm(*AFormC);
//}

int main(void){
Intern someRandomIntern;
AForm* rrf;
rrf = someRandomIntern.makeForm("shrubbery creation", "Bender");
}