SRC = main.cpp HumanB.cpp HumanA.cpp  Weapon.cpp
OBJ = $(SRC:.cpp=.o)
NAME = weapon
CC = c++
CFLAGS = -Wall -Wextra -Werror -std=c++98 
HDR = HumanA.hpp Weapon.hpp HumanB.hpp

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