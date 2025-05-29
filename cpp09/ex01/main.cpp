#include "Rpn.hpp"
#include <cstddef>



int main(int ac , char **av)
{
    Rpn A;
    if (ac != 2)
    {
        std::cerr << "Error : invalid args" << std::endl;
        return 1;
    }

    std::string input = av[1];
    std::string token;
    std::istringstream iss(input);

    // int flag = 0;
    while (iss >> token) 
    {
        std::cout << "token[1] = " <<  token[1] << std::endl;
        if (A.check_ifoperator(token))
        {
            std::cout << "operator = " <<  token << std::endl;
            if (A.mystack.size() >= 2)
            {
                A.operators = token;
                A.second = A.mystack.top();
                A.mystack.pop();
                A.first = A.mystack.top();
                A.mystack.pop();
                std::cout << "First = " << A.first << " | second = " << A.second << std::endl;
                int result = A.calcul(A.first, A.second);
                if (result == - 1)
                {
                    std::cerr << "Error" << std::endl;
                    return 0;
                }
                // int result = A.calcul();
                std::cout << "result = " << result << std::endl;
                A.mystack.push(result);
                continue ;
            }
        }
        if (!A.check_numbers(token))
        {
            std::cerr << "Error" << std::endl;
            return 0; 
        }
        int number = std::strtof(token.c_str(), NULL);
        A.mystack.push(number);
    }
    if (A.mystack.size() == 1)
        std::cout << "Final result = " << A.mystack.top() << std::endl;
    else
    {
        std::cerr << "Error result" << std::endl;
        return 0;
    } 
}
