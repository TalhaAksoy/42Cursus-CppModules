//
// Created by Mehmet eren Akbulut on 12/11/22.
//

#ifndef CPP_MODULE_SHRUBBERYCREATIONFORM_HPP
#define CPP_MODULE_SHRUBBERYCREATIONFORM_HPP

#include "AForm.hpp"

class ShrubberyCreationForm : public AForm{
public:
    ShrubberyCreationForm(void );
    ShrubberyCreationForm(const std::string& name);
    ShrubberyCreationForm(const ShrubberyCreationForm& other);
    ~ShrubberyCreationForm(void );

    ShrubberyCreationForm& operator=(const ShrubberyCreationForm& other);
    void    action(const Bureaucrat& executor) const;

};


#endif //CPP_MODULE_SHRUBBERYCREATIONFORM_HPP
