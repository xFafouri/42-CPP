#include "Bureaucrat.hpp"

int main()
{
    try {
        Bureaucrat A("Hamza", 150);
        std::cout << "before decrement: " << A << std::endl;
        std::cout << A << std::endl;
        A.decrementGrade();
        std::cout << "After decrement: " << A << std::endl;
    }
    catch (std::exception &e) {
        std::cerr << "Caught exception: " << e.what() << std::endl;
    }
}