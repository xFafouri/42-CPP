NAME = Cast
CXX = c++
CXXFLAGS =  -Wall -Wextra -Werror -std=c++98 #-fsanitize=address -g3
src = A.cpp B.cpp Base.cpp C.cpp main.cpp

OBJ = $(src:.cpp=.o)

all: $(NAME)

$(NAME): $(OBJ)
	$(CXX) $(CXXFLAGS) $(OBJ) -o $(NAME)

clean: 
	rm -rf $(OBJ)

fclean: clean
	rm -rf $(NAME)

re: fclean all
