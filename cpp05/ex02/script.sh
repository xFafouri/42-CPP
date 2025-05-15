class=$1

headerFile=$class".hpp"
sourceFile=$class".cpp"
mainFile="main.cpp"
Makefile="Makefile"


upperClass=$(echo "$class" | tr '[:lower:]' '[:upper:]')
headerGuard="${upperClass}_HPP"

cat > $Makefile << EOF
NAME = $class
CXX = c++
CXXFLAGS =  -Wall -Wextra -Werror -std=c++98 -fsanitize=address -g3
src = $sourceFile $mainFile

OBJ = \$(src:.cpp=.o)

all: \$(NAME)

\$(NAME): \$(OBJ)
	\$(CXX) \$(CXXFLAGS) \$(OBJ) -o \$(NAME)

clean: 
	rm -rf \$(OBJ)

fclean: clean
	rm -rf \$(NAME)

re: fclean all
EOF

cat > $headerFile << EOF
#ifndef $headerGuard
#define $headerGuard

#include <iostream>

class $class
{
    public:
        $class();
        $class(const $class &obj);
        $class &operator=(const $class &obj);
        ~$class();
};

#endif 
EOF

cat > $sourceFile << EOF
#include "$headerFile"

$class::$class()
{
}

$class::$class(const $class &obj)
{
}

$class &$class::operator=(const $class &obj)
{
    if (this != &obj)
    {
        
    }
    return *this;
}

$class::~$class()
{
}
EOF
