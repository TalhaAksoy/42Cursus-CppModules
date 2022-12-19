//
// Created by Mehmet eren Akbulut on 12/11/22.
//

#ifndef CPP_MODULE_FORM_HPP
#define CPP_MODULE_FORM_HPP

#include <iostream>
#include <exception>

class Bureaucrat;

class Form{
private:
    const std::string   _name;
    bool                _sign;
    const unsigned int  _signExec;
    const unsigned int  _signGrade;
public:
    Form();

    Form(const std::string name);

    Form(const std::string name, const unsigned int signGrade, const unsigned int signExec);

    Form(const Form& other);

    ~Form(void);
    Form&   operator=(const Form& other);
class GradeTooHighException : public std::exception{
        const char *what() const throw() {
            return "High too Grade";
        }
    };
class GradeTooLowException : public std::exception{
        const char *what() const throw() {
            return "Low too Grade";
        }
    };

    void    signForm(void);
    void    beSigned(const Bureaucrat& candidate);
    unsigned int    getGradeSign() const;
    unsigned int    getGradeExec() const;
    std::string     getName() const;
    bool            isSigned() const;

};

std::ostream&   operator<<(std::ostream& o, const Form &other);

#endif //CPP_MODULE_FORM_HPP
