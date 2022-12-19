//
// Created by Mehmet eren Akbulut on 12/11/22.
//

#include "RobotomyRequestForm.hpp"

//RobotomyRequestForm::RobotomyRequestForm() :AForm("", "", 72, 45) {}

RobotomyRequestForm::RobotomyRequestForm(const std::string &target) : AForm("robotomy", target, 72, 45) {
    return;
}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm &other) : AForm(other) {
    return;
}

RobotomyRequestForm &RobotomyRequestForm::operator=(const RobotomyRequestForm &rhs) {
    this->AForm::operator=(rhs);
    return *this;
}

RobotomyRequestForm::~RobotomyRequestForm() {
    return;
}

RobotomyRequestForm::RobotomyRequestForm() : AForm("robotomy", "default", 72, 45) {
    return;
}

void RobotomyRequestForm::action(const Bureaucrat &executor) const {
    this->AForm::execute(executor);
    std::cout << "Makes some drilling noises" << std::endl;
    if (rand() < RAND_MAX / 2)
        std::cout << this->getTarget() << " has been robotomized successfully." << std::endl;
    else
        std::cout << "Robotomy on " << this->getTarget() << " has failed." << std::endl;
}
