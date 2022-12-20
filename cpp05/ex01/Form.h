//
// Created by Selim talha Aksoy on 12/20/22.
//

#ifndef FORM_H
#define FORM_H

# include <iostream>
# include "Bureaucrat.h"

class Bureaucrat;


class Form {
private:
	const std::string	_name;
	mutable bool		isSign;
	int					_requireToSign;
	int 				_execToSign;

public:
	class GradeTooHighException:public std::exception{
		const char* what() const throw(){
			return "Form Grade To High";
		}
	};
	class GradeTooLowException:public std::exception{
		const char* what() const throw(){
			return "Form Grade To Low";
		}
	};
	Form();
	Form(const std::string name_);
	Form(const std::string name_, int requireToSign_, int execToSign_);
	Form(const Form& var);
	~Form();
	Form& operator=(const Form& var);

	std::string getName() const;
	int getRequireToSign() const;
	int getExecToSign() const;

	void setRequireToSign(int sign_);
	void setExecToSign(int sign_);

	void beSigned(const Bureaucrat& var) const;
	bool isSigned() const;
};

std::ostream &operator<<(std::ostream &out , const Form& var);

#endif //FORM_H
