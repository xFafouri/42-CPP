NAME = prog
CXX = c++
CXXFLAGS =  -Wall -Wextra -Werror -std=c++98
src = main.cpp Fixed.cpp

OBJ = $(src:.cpp=.o)

all: $(NAME)

$(NAME): $(OBJ)
	$(CXX) $(CXXFLAGS) $(OBJ) -o $(NAME)

clean: 
	rm -rf $(OBJ)

fclean: clean
	rm -rf $(NAME)

re: fclean all