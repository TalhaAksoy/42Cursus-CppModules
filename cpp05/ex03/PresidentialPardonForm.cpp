//
// Created by Mehmet eren Akbulut on 12/11/22.
//

#include "PresidentialPardonForm.hpp"

//PresidentialPardonForm::PresidentialPardonForm() : AForm("AForm", "Target", 25, 5){
//    return;
//}
PresidentialPardonForm::PresidentialPardonForm(const std::string &target) : AForm("pardon", target, 25, 5) {
    return;
}

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm &other) : AForm(other) {
    return;
}

PresidentialPardonForm &PresidentialPardonForm::operator=(const PresidentialPardonForm &rhs) {
    this->AForm::operator=(rhs);
    return *this;
}

PresidentialPardonForm::~PresidentialPardonForm() {
    return;
}

PresidentialPardonForm::PresidentialPardonForm() : AForm("pardon", "default", 25, 5) {
    return;
}

void PresidentialPardonForm::action(const Bureaucrat &executor) const {
    this->AForm::execute(executor);
    std::cout << this->getTarget() << "has been pardoned by Zafod Beeblebrox." << std::endl;
}
