NAME = ex03

FLAGS = -Wall -Wextra -Werror -std=c++98 -g

SOURCES = \
        main.cpp \
		HumanA.cpp \
		HumanB.cpp \
		Weapon.cpp

OBJS = $(SOURCES:.cpp=.o)

$(NAME): $(OBJS)
	c++ $(FLAGS) $(OBJS) -o $(NAME)

all: $(NAME)

%.o: %.cpp
	c++ $(FLAGS) -c $< -o $@

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean $(NAME)

.PHONY: all clean fclean re
