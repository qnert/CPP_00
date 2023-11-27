CC = c++
CPPFLAGS = -Wall -Wextra -Werror -std=c++98
NAME = convert_it

SRCS = main.cpp ScalarConverter.cpp check_funcs.cpp display_funcs.cpp

OBJS = $(SRCS:.cpp=.o)

all: $(NAME)

$(NAME): $(OBJS)
	$(CC) $(CPPFLAGS) -o $(NAME) $(OBJS)

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all
