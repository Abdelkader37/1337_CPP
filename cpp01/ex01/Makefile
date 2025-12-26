SRC = zombieHorde.cpp Zombie.cpp main.cpp
OBJ = $(SRC:.cpp=.o)
NAME = zombie
CC = c++
CFLAGS = -Wall -Wextra -Werror -std=c++98
HDR = Zombie.hpp

all: $(NAME)

$(NAME): $(OBJ)
	$(CC) $(CFLAGS) $(OBJ) -o $(NAME)

%.o: %.cpp $(HDR)
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: clean