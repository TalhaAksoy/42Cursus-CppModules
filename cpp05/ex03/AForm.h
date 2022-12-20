//
// Created by Selim talha Aksoy on 12/20/22.
//

#ifndef FORM_H
#define FORM_H

# include <iostream>
# include "Bureaucrat.h"

class Bureaucrat;


class AForm {
private:
	const std::string	_name;
	mutable bool		isSign;
	int					_requireToSign;
	int 				_execToSign;

public:
	class GradeTooHighException:public std::exception{
		public:
			const char* what() const throw(){
				return "AForm Grade To High";
			}
	};
	class GradeTooLowException:public std::exception{
		public:
			const char* what() const throw(){
				return "AForm Grade To Low";
			}
	};
	class FormNotSignedException:public std::exception{
		public:
			const char* what() const throw(){
				return "Form Not Signed";
			}
	};
	AForm();
	AForm(const std::string name_);
	AForm(const std::string name_, int requireToSign_, int execToSign_);
	AForm(const AForm& var);
	virtual ~AForm();
	AForm& operator=(const AForm& var);

	std::string getName() const;
	int getRequireToSign() const;
	int getExecToSign() const;

	void setRequireToSign(int sign_);
	void setExecToSign(int sign_);

	void beSigned(const Bureaucrat& var) const;
	bool isSigned() const;
	virtual void		execute(const Bureaucrat &executor) const = 0;
};

std::ostream &operator<<(std::ostream &out , const AForm& var);

#endif //FORM_H
