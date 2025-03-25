NAME = ex06

FLAGS = -Wall -Wextra -Werror -g

SOURCES = \
        main.cpp \
		Harl.cpp

OBJS = $(SOURCES:.cpp=.o)

$(NAME): $(OBJS)
	g++ $(FLAGS) $(OBJS) -o $(NAME)

all: $(NAME)

%.o: %.cpp
	g++ $(FLAGS) -c $< -o $@

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean $(NAME)

.PHONY: all clean fclean re
