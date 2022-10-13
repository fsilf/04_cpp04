NAME = deep_brain
SRC =	main.cpp\
		Animal.cpp\
		Dog.cpp\
		Cat.cpp\
		Brain.cpp

OBJ = $(SRC:%.cpp=%.opp)

RM = rm -rf
CC = clang++
CFLAGS = -Werror -Wall -Wextra #-fsanitize=address

.PHONY: all re fclean clean

%.opp:%.cpp
	$(CC) $(CFLAGS) -c $< -o $@

all: $(NAME)

$(NAME): $(OBJ)
	$(CC) $(CFLAGS) $^ -o $@

clean:
	$(RM) $(OBJ)

fclean: clean
	$(RM) $(NAME)

re: fclean
	$(MAKE) all
