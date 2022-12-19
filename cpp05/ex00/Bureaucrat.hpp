//
// Created by Mehmet eren Akbulut on 12/10/22.
//

#ifndef CPP_MODULE_BUREAUCRAT_HPP
#define CPP_MODULE_BUREAUCRAT_HPP

#include <iostream>
#include <exception>

class Bureaucrat {
private:
    std::string          _name;
    unsigned int         _grade;
public:
    Bureaucrat(void);
    Bureaucrat(const std::string name, unsigned int grade);
    Bureaucrat(const Bureaucrat& other);

    Bureaucrat& operator=(const Bureaucrat& other);
    Bureaucrat& operator++(void);
    Bureaucrat& operator--(void);
    Bureaucrat  operator++(int);
    Bureaucrat  operator--(int);

    void    incrementGrade(void);
    void    decrementGrade(void);

    class GradeTooHighException : public std::exception {
            const char *what() const throw() {
                return "Grade too high";
            }
        };
    class GradeTooLowException : public std::exception {
            const char *what() const throw() {
                return "Grade too low";
            }
        };

    std::string const getName(void) const;
    int               getGrade(void) const;
    void              setGrade(int grade);
};

std::ostream &operator<<(std::ostream &o, const Bureaucrat &other);

#endif //CPP_MODULE_BUREAUCRAT_HPP
