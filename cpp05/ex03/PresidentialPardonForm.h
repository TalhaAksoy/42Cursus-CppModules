//
// Created by Selim talha Aksoy on 12/20/22.
//

#pragma once

#include <string>
#include <iostream>
#include "Bureaucrat.h"
#include "AForm.h"

class PresidentialPardonForm : public AForm {
private:
	const std::string _target;
public:
	PresidentialPardonForm(void);
	PresidentialPardonForm(std::string target);
	PresidentialPardonForm(PresidentialPardonForm &src);
	~PresidentialPardonForm();
	PresidentialPardonForm &operator=(const PresidentialPardonForm &src);
	void execute(Bureaucrat const &executor) const;
	std::string getTarget(void) const;
};

std::ostream &operator<<(std::ostream &o, PresidentialPardonForm *a);
