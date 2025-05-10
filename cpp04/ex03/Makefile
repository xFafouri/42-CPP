NAME = AMateria
CXX = c++
CXXFLAGS =  -Wall -Wextra -Werror -std=c++98 #-fsanitize=address -g3
src = AMateria.cpp Cure.cpp IMateriaSource.cpp MateriaSource.cpp Ice.cpp Character.cpp main.cpp ICharacter.cpp  


OBJ = $(src:.cpp=.o)

all: $(NAME)

$(NAME): $(OBJ)
	$(CXX) $(CXXFLAGS) $(OBJ) -o $(NAME)

clean: 
	rm -rf $(OBJ)

fclean: clean
	rm -rf $(NAME)

re: fclean all
