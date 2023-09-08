CC = c++
CPPFLAGS = -Wall -Wextra -Werror -std=c++98
NAME = pointer.exe

SRCS = main.cpp

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