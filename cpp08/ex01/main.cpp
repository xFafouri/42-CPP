#include "Span.hpp"
#include <vector>

int main()
{
    Span sp = Span(8);
    int arr[5] = {0, 1, 2, 3, 5};
    sp.fill_arr(arr , 4);
    
    sp.addNumber(6);
    sp.addNumber(3);
    sp.addNumber(17);
    sp.addNumber(9);
    sp.addNumber(11);

    sp.display_arr();
    std::cout << sp.shortestSpan() << std::endl;
    std::cout << sp.longestSpan() << std::endl;
}