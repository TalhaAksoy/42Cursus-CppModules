//
// Created by Mehmet eren Akbulut on 12/11/22.
//

#ifndef CPP_MODULE_ROBOTOMYREQUESTFORM_HPP
#define CPP_MODULE_ROBOTOMYREQUESTFORM_HPP

#include "AForm.hpp"

class RobotomyRequestForm : public AForm{
public:
    RobotomyRequestForm(void);
    RobotomyRequestForm(const std::string& name);
    RobotomyRequestForm(const RobotomyRequestForm& other);
    ~RobotomyRequestForm(void);

    RobotomyRequestForm& operator=(const RobotomyRequestForm& other);
    void    action(const Bureaucrat& executor) const;

};


#endif //CPP_MODULE_ROBOTOMYREQUESTFORM_HPP
