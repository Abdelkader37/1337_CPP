SRC = main.cpp 
OBJ = $(SRC:.cpp=.o)
NAME = replace
CC = c++
CFLAGS = -Wall -Wextra -Werror -std=c++98 
HDR = 

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