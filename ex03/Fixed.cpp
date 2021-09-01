#include "Fixed.hpp"

Fixed::Fixed()
{
	this->_value = 0;
}

Fixed::Fixed(const Fixed &raw)
{
	*this = raw;
}

Fixed::Fixed(const int raw)
{
	this->_value = raw << this->_fractional_bits;
}

Fixed::Fixed(const float raw)
{
	this->_value = roundf(raw * (1 << this->_fractional_bits));
}

void	Fixed::setRawBits(int const raw)
{
	this->_value = raw;
}

int	Fixed::getRawBits(void) const
{
	return (this->_value);
}

Fixed	&Fixed::operator=(Fixed const &raw)
{
	this->setRawBits(raw.getRawBits());
	return (*this);
}

bool	Fixed::operator==(Fixed const &raw) const
{
	bool	result = false;
	if (this->_value == raw.getRawBits())
		result = true;
	return (result);
}

bool	Fixed::operator!=(Fixed const &raw) const
{
	bool	result = false;
	if (this->_value != raw.getRawBits())
		result = true;
	return (result);
}

bool	Fixed::operator<=(Fixed const &raw) const
{
	bool	result = false;
	if (this->_value <= raw.getRawBits())
		result = true;
	return (result);
}

bool	Fixed::operator>=(Fixed const &raw) const
{
	bool	result = false;
	if (this->_value >= raw.getRawBits())
		result = true;
	return (result);
}

bool	Fixed::operator>(Fixed const &raw) const
{
	bool	result = false;
	if (this->_value > raw.getRawBits())
		result = true;
	return (result);
}

bool	Fixed::operator<(Fixed const &raw) const
{
	bool	result = false;
	if (this->_value < raw.getRawBits())
		result = true;
	return (result);
}

Fixed	Fixed::operator+(Fixed const &raw) const
{
	Fixed result(Fixed(this->toFloat() + raw.toFloat()));
	return (result);
}

Fixed	Fixed::operator-(Fixed const &raw) const
{
	Fixed result(Fixed(this->toFloat() - raw.toFloat()));
	return (result);
}

Fixed	Fixed::operator*(Fixed const &raw) const
{
	Fixed result(Fixed(this->toFloat() * raw.toFloat()));
	return (result);
}

Fixed	Fixed::operator/(Fixed const &raw) const
{
	Fixed result(Fixed(this->toFloat() / raw.toFloat()));
	return (result);
}

Fixed	Fixed::operator++(int)
{
	Fixed a(*this);
	this->_value++;
	return (a);
}

Fixed	Fixed::operator--(int)
{
	Fixed a(*this);
	this->_value--;
	return (a);
}

Fixed	&Fixed::operator++()
{
	this->_value++;
	return (*this);
}

Fixed	&Fixed::operator--()
{
	this->_value--;
	return (*this);
}

Fixed	Fixed::min(Fixed const &a, Fixed const &b)
{
	Fixed	result = a;
	if (b < a)
		result = b;
	return (result);
}

Fixed	Fixed::max(Fixed const &a, Fixed const &b)
{
	Fixed	result = a;
	if (b > a)
		result = b;
	return (result);
}


Fixed::~Fixed()
{
}

float	Fixed::toFloat( void ) const
{
	return (roundf(this->_value) / (1 << this->_fractional_bits));
}

int		Fixed::toInt( void ) const
{
	return (this->_value >> this->_fractional_bits);
}

std::ostream	&operator<<(std::ostream & out, Fixed const & value)
{
	out << value.toFloat();
	return out;
}
