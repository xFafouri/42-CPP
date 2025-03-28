#include "Point.hpp"


int main()
{
    Point const a(0, 0);
    Point const b(10, 30);
    Point const c(20, 0);
    // Point const p(30, 15);// outside
    Point const p(10, 15); // inside

    if (bsp(a,b,c,p))
        std::cout << "The point is inside the triangle." << std::endl;
    else
        std::cout << "The point is outside the triangle." << std::endl;
}