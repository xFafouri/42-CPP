NAME = ClapTrap
CXX = c++
CXXFLAGS =  -Wall -Wextra -Werror -std=c++98 
src = ClapTrap.cpp main.cpp

OBJ = $(src:.cpp=.o)

all: $(NAME)

$(NAME): $(OBJ)
	$(CXX) $(CXXFLAGS) $(OBJ) -o $(NAME)

clean: 
	rm -rf $(OBJ)

fclean: clean
	rm -rf $(NAME)

re: fclean all
