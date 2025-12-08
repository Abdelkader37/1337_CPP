SRC = Contact.cpp PhoneBook.cpp main.cpp
OBJ = $(SRC:.cpp=.o)
NAME = phonebook
CC = c++
CFLAGS = -Wall -Wextra -Werror -std=c++98
HDR = header.hpp Contact.hpp  PhoneBook.hpp

all: $(NAME)

$(NAME): $(OBJ) $(HDR)
	$(CC) $(FLAGS) $(OBJ)  -o $@

%.o: %.c 
	$(CC) $(FLAGS) -c $< -o $@
clean:
	rm -rf $(OBJ)
fclean: clean
	rm -rf $(NAME)
re: clean all

.PHONY: clean
