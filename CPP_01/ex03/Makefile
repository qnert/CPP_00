CC = c++
CPPFLAGS = -Wall -Wextra -Werror -std=c++98
NAME = war

SRCS = main.cpp HumanA.cpp HumanB.cpp Weapon.cpp

OBJS = $(SRCS:.cpp=.o)

%.o: %.cpp
	$(CC) -c $^ $(CPPFLAGS)

all: $(NAME)

$(NAME): $(OBJS)
	$(CC) $(CPPFLAGS) -o $(NAME) $(OBJS)

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all