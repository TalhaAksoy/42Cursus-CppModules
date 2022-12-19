//
// Created by Mehmet eren Akbulut on 12/13/22.
//

#ifndef CPP_MODULE_INTERN_HPP
#define CPP_MODULE_INTERN_HPP

#include <string>
#include "AForm.hpp"

class Intern
{
public:
    // Constructor
    Intern();

    // Destructor
    ~Intern();

    class InvalidAFormException : public std::exception
    {
    public:
        const char *what() const throw()
        {
            return "invalid AForm type";
        }
    };

    AForm* makeForm(const std::string& AFormName, const std::string& target) const;
};

#endif //CPP_MODULE_INTERN_HPP
