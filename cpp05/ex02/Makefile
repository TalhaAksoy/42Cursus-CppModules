NAME = Bureaucrat

SRC = AForm.cpp Bureaucrat.cpp PresidentialPardonForm.cpp RobotomyRequestForm.cpp ShrubberyCreationForm.cpp main.cpp

OBJS = $(SRC:%.cpp=%.o)

all : $(NAME)

$(NAME) : $(OBJS)
	c++ $(SRC) -o $(NAME) -std=c++98 -Wall -Wextra -Werror

clean :
	rm -rf $(OBJS)

fclean : clean
	rm -rf $(NAME)

re : fclean all

.PHONY : all clean fclean re

debug : all
	./$(NAME)