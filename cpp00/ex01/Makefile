NAME = phonebook
CXX = c++
CXXFLAGS = -Wall -Wextra -Werror -std=c++98
SRC = Contact.cpp main.cpp PhoneBook.cpp

OBJ = $(SRC:.cpp=.o)

all: $(NAME)

$(NAME): $(OBJ)
	$(CXX) $(CXXFLAGS) $(OBJ) -o $(NAME)

clean: 
	rm -rf $(OBJ)

fclean: clean
	rm -rf $(NAME)

re: fclean all