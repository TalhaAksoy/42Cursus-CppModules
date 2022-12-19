//
// Created by Mehmet eren Akbulut on 12/11/22.
//

#ifndef CPP_MODULE_PRESIDENTIALPARDONFORM_HPP
#define CPP_MODULE_PRESIDENTIALPARDONFORM_HPP

#include "AForm.hpp"

class PresidentialPardonForm : public AForm{
public:
    PresidentialPardonForm(void);
    PresidentialPardonForm(const std::string& name);
    PresidentialPardonForm(const PresidentialPardonForm &other);
    ~PresidentialPardonForm(void);

    PresidentialPardonForm& operator=(const PresidentialPardonForm& other);
    void    action(const Bureaucrat& executor) const;
};


#endif //CPP_MODULE_PRESIDENTIALPARDONFORM_HPP
