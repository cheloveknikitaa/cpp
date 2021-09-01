#include "Point.hpp"

Point::Point()
{
	this->x = Fixed(0);
	this->y = Fixed(0);
}

Point::Point(const float x, const float y)
{
	this->x = Fixed(x);
	this->y = Fixed(y);
}

Point::Point(const Point &raw)
{
	*this = raw;
}

Point	&Point::operator=(Point const &raw)
{
	this->x.setRawBits(raw.x.getRawBits());
	this->y.setRawBits(raw.y.getRawBits());
	return (*this);
}

Fixed	Point::getX() const
{
	return(this->x);
}

Fixed	Point::getY() const
{
	return(this->y);
}

Point::~Point()
{
}
