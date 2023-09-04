CC = c++
CFLAGS = -Wall -Wextra -Werror -std=c++98
NAME = zombie

SRCS = Zombie.cpp newZombie.cpp randomChump.cpp main.cpp

OBJS = $(SRCS:.cpp=.o)

all: $(NAME)

$(NAME): $(OBJS)
	$(CC) $(CFLAGS) -o $(NAME) $(OBJS)

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all