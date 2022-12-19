NAME = Breaucrat

SRC = Bureaucrat.cpp main.cpp

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