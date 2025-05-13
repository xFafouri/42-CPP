NAME = Animal
CXX = c++ 
CXXFLAGS =  -Wall -Wextra -Werror -std=c++98  #-fsanitize=address -g3
src =  Dog.cpp Animal.cpp Cat.cpp main.cpp WrongAnimal.cpp WrongCat.cpp

OBJ = $(src:.cpp=.o)

all: $(NAME)

$(NAME): $(OBJ)
	$(CXX) $(CXXFLAGS) $(OBJ) -o $(NAME)

clean: 
	rm -rf $(OBJ)

fclean: clean
	rm -rf $(NAME)

re: fclean all