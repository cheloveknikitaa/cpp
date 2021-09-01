#ifndef POINT_HPP
# define POINT_HPP
# include "Fixed.hpp"


class Point
{
private:
	Fixed	x;
	Fixed	y;
public:
	Point();
	Point(const float x, const float y);
	Point(const Point &raw);
	Point &operator=(Point const &raw);
	Fixed	getX() const;
	Fixed	getY() const;
	~Point();
};

bool bsp(Point const a, Point const b, Point const c, Point const point);

#endif