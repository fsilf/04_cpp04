NAME= materias
SRC=	main.cpp\
	Ice.cpp\
	Cure.cpp\
	Materia.cpp\
	MateriaSource.cpp\
	Character.cpp

OBJ= $(SRC:%.cpp=%.opp)

RM = rm -rf
CC = clang++
CFLAGS = -Werror -Wall -Wextra #-fsanitize=address

.PHONY: all clean re fclean

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
