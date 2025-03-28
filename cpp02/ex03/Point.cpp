
#include "Point.hpp"


Point::Point() : x(0), y(0) {}

// Point::Point(const Point &obj)
// {
// }

Point::Point(const Fixed &x,const Fixed &y): x(x), y(y){}

Fixed const Point::get_x(void) const
{
    return(this->x);
}

Fixed const Point::get_y(void) const
{
    return(this->y);
}

Point::Point(const Point &t)
{
    *this = t;
}

Point &Point::operator=(const Point &obj)
{
    if (this != &obj)
    {
        new (this)Point(obj.get_x().toFloat(), obj.get_y().toFloat());
    }
    return *this;
}

Point::~Point()
{
}


bool bsp(Point const a, Point const b, Point const c, Point const point)
{
    //ABC area
    Fixed area = (Fixed(0.5f) * std::abs((a.get_x().toFloat() * (b.get_y().toFloat() - c.get_y().toFloat()))
                + (b.get_x().toFloat() * (c.get_y().toFloat() - a.get_y().toFloat())) 
                + (c.get_x().toFloat() * (a.get_y().toFloat() - b.get_y().toFloat()))));
    //ABP
    Fixed a1 =(Fixed(0.5f) * std::abs((a.get_x().toFloat() * (b.get_y().toFloat() - point.get_y().toFloat()))
    + (b.get_x().toFloat() * (point.get_y().toFloat() - a.get_y().toFloat())) 
    + (point.get_x().toFloat() * (a.get_y().toFloat() - b.get_y().toFloat()))));

    //PBC
    Fixed a2 = (Fixed(0.5f) * std::abs((point.get_x().toFloat() * (b.get_y().toFloat() - c.get_y().toFloat()))
    + (b.get_x().toFloat() * (c.get_y().toFloat() - point.get_y().toFloat())) 
    + (c.get_x().toFloat() * (point.get_y().toFloat() - b.get_y().toFloat()))));

    //APC
    Fixed a3 = (Fixed(0.5f) * std::abs((a.get_x().toFloat() * (point.get_y().toFloat() - c.get_y().toFloat()))
    + (point.get_x().toFloat() * (c.get_y().toFloat() - a.get_y().toFloat())) 
    + (c.get_x().toFloat() * (a.get_y().toFloat() - point.get_y().toFloat()))));

    std::cout << "area = " << area << std::endl;
    std::cout << "a1 = " << a1 << std::endl;
    std::cout << "a2 = " << a2 << std::endl;
    std::cout << "a3 = " << a3 << std::endl;

    if (area == a1 + a2 + a3)
    {
        return(true);
    }
    else {
        return (false);
    }        
}
