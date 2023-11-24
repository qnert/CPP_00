CC = c++
CPPFLAGS = -Wall -Wextra -Werror -std=c++98
NAME = form

SRCS = Bureaucrat.cpp Form.cpp main.cpp

OBJS = $(SRCS:.cpp=.o)

all: $(NAME)

$(NAME): $(OBJS)
	$(CC) $(CPPFLAGS) -o $(NAME) $(OBJS)

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all
