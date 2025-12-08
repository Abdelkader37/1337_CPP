NAME = megaphone
SRC = megaphone.cpp
CC = c++
OBJ = megaphone.o
CFLAGS = -Wall -Wextra -Werror -std=c++98

all: $(NAME)

$(NAME): $(OBJ)
	$(CC) $(FLAGS) $(OBJ)  -o $@

%.o: %.c 
	$(CC) $(FLAGS) -c $< -o $@
clean:
	rm -rf $(OBJ)
fclean: clean
	rm -rf $(NAME)
re: clean all

.PHONY: clean