SRC =  main.cpp  Zombie.cpp newZombie.cpp randomChump.cpp
OBJ = $(SRC:.cpp=.o)
NAME = 
CC = c++
CFLAGS = -Wall -Wextra -Werror -std=c++98
HDR = header.hpp Zombie.hpp

all: $(NAME)

$(NAME): $(OBJ)
	$(CC) $(FLAGS) $(OBJ)  -o $@

%.o: %.cpp $(HDR)
	$(CC) $(FLAGS) -c $< -o $@
clean:
	rm -rf $(OBJ)
fclean: clean
	rm -rf $(NAME)
re: clean all

.PHONY: clean
