//
// Created by Selim talha Aksoy on 12/16/22.
//

#ifndef BUREAUCRAT_H
#define BUREAUCRAT_H

# include <iostream>

class Bureaucrat {
private:
	const std::string	name;
	int					grade;
	void				setGrade(int grade);
	class GradeTooHighException: public std::exception{
	public:
		const char *what() const throw(){
			return "Grade Count Too High";
		}
	};
	class GradeTooLowException:public std::exception{
	public:
		const char *what() const throw(){
			return "Grade Count Too Low";
		}
	};
public:
	Bureaucrat(const std::string name, int grade);
	Bureaucrat(const Bureaucrat& var);
	Bureaucrat& operator=(const Bureaucrat& var);
	const std::string getName() const;
	int	getGrade() const;
	~Bureaucrat();
};

std::ostream &operator<<(std::ostream &out, Bureaucrat const &var);

#endif //BUREAUCRAT_H
