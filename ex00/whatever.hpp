#pragma once

#include <iostream>

template<typename T>
T min(const T &a,const  T &b)
{
	if (a == b)
		return (b);
	return ((a < b) ? a : b);
}

template<typename T>
T max(const T &a, const T &b)
{
	if (a == b)
		return (b);
	return ((a > b) ? a : b);
}

template<typename T>
void swap(T &a, T &b)
{
	T c = a;
	a = b;
	b = c;
}

#include <cmath>

class Fixed
{
private:
	static int const	_fractional_bits = 8;
	int					_value;
public:
	Fixed();
	Fixed(const int raw);
	Fixed(const float raw);
	Fixed(const Fixed &raw);


	Fixed	&operator=(Fixed const &raw);
	bool	operator==(Fixed const &raw) const;
	bool	operator!=(Fixed const &raw) const;
	bool	operator<=(Fixed const &raw) const;
	bool	operator>=(Fixed const &raw) const;
	bool	operator>(Fixed const &raw) const;
	bool	operator<(Fixed const &raw) const;
	Fixed	operator+(Fixed const &raw) const;
	Fixed	operator-(Fixed const &raw) const;
	Fixed	operator*(Fixed const &raw) const;
	Fixed	operator/(Fixed const &raw) const;
	Fixed	operator++(int);
	Fixed	operator--(int);
	Fixed	&operator++();
	Fixed	&operator--();

	void	setRawBits(int const raw);
	int		getRawBits( void ) const;
	float	toFloat( void ) const;
	int		toInt( void ) const;

	~Fixed();
};

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
