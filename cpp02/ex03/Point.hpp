#ifndef  POINT_HPP
#define POINT_HPP

# include "Fixed.hpp"

#include <iostream>

class Point
{
    private:
        Fixed const x;
        Fixed const y;
    public:
        Point();
        Point(const Point &obj);
        Point(const Fixed &x,const Fixed &y);
        Point& operator=(const Point &obj); 
        // Point &operator=(const Point &obj);
        // void  set_x(Fixed const x);
        // void  set_y(Fixed const y);
        Fixed const get_x(void) const;
        Fixed const get_y(void) const;
        ~Point();
};

bool bsp(Point const a, Point const b, Point const c, Point const point);


#endif