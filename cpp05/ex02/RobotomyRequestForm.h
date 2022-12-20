//
// Created by Selim talha Aksoy on 12/20/22.
//

#ifndef ROBOTOMYREQUESTFORM_H
#define ROBOTOMYREQUESTFORM_H

#include <string>
#include <iostream>
#include <cstdlib>
#include "Bureaucrat.h"
#include "AForm.h"

class Bureaucrat;
class AForm;

class RobotomyRequestForm:public AForm {
private:
	const std::string _target;
public:
	RobotomyRequestForm();
	RobotomyRequestForm(std::string target_);
	RobotomyRequestForm(const RobotomyRequestForm& var);
	RobotomyRequestForm &operator=(const RobotomyRequestForm& var);
	~RobotomyRequestForm();
	void execute(Bureaucrat const &executor) const;
	std::string getTarget() const;


};

std::ostream &operator<<(std::ostream &out, RobotomyRequestForm &var);


#endif //ROBOTOMYREQUESTFORM_H
