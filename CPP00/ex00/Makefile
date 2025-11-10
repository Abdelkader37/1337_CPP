NAME=megapho
SRC=megaphone.cpp
CC=c++
CFLAGS= -Wall -Wextra -Werror -std=c++98

all:$(NAME)

$(NAME): $(SRC)
	$(CC) $(CFLAGS) $(SRC) -o $(NAME)

clean:

fclean: clean
	rm -rf $(NAME)

re : fclean all