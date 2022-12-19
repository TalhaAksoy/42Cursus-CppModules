//
// Created by Mehmet eren Akbulut on 12/11/22.
//

#ifndef CPP_MODULE_FORM_HPP
#define CPP_MODULE_FORM_HPP

#include <iostream>
#include <exception>

class Bureaucrat;

class AForm{
private:
    const std::string   _name;

    const std::string   _target;

    bool                _sign;

    const unsigned int  _signExec;

    const unsigned int  _signGrade;

protected:

public:
    AForm();

    AForm(const std::string name);

    AForm(const std::string name, const std::string target);

    AForm(const std::string name, const unsigned int signGrade, const unsigned int signExec);

    AForm(const std::string name, const std::string target, const unsigned int signGrade, const unsigned int signExec);

    AForm(const AForm& other);

    ~AForm(void);

    AForm&   operator=(const AForm& other);

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

    class FormNotSignedException : public std::exception {
        const char * what() const throw(){
            return "Form not signed";
        }
    };
    void            execute(Bureaucrat const & executor) const;

    virtual void    action(const Bureaucrat& executor) const = 0;

    void            signForm(void);

    void            beSigned(const Bureaucrat& candidate);

    unsigned int    getGradeSign() const;

    unsigned int    getGradeExec() const;

    std::string     getName() const;

    std::string     getTarget() const;

    bool            isSigned() const;

};

std::ostream&   operator<<(std::ostream& o, const AForm &other);

#endif //CPP_MODULE_FORM_HPP
