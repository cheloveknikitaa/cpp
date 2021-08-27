#include "Fixed.hpp"

Fixed::Fixed()
{
	std::cout << "Default constructor called" << std::endl;
	this->_value = 0;
}

Fixed::Fixed(const Fixed &raw)
{
	std::cout << "Copy constructor called" << std::endl;
	*this = raw;
}

Fixed::Fixed(const int raw)
{
	std::cout << "Int constructor called" << std::endl;
	this->_value = raw << this->_fractional_bits;
}

Fixed::Fixed(const float raw)
{
	std::cout << "Float constructor called" << std::endl;
	this->_value = roundf(raw * (1 << this->_fractional_bits));
}

void	Fixed::setRawBits(int const raw)
{
	this->_value = raw;
}

int	Fixed::getRawBits(void) const
{
	std::cout << "getRawBits member function called" << std::endl;
	return (this->_value);
}

Fixed &Fixed::operator=(Fixed const &raw)
{
	std::cout << "Assignation operator called" << std::endl;
	this->setRawBits(raw.getRawBits());
	return (*this);
}

Fixed::~Fixed()
{
	std::cout << "Destructor called" << std::endl;
}

float	Fixed::toFloat( void ) const
{
	return (roundf(this->_value) / (1 << this->_fractional_bits));
}

int		Fixed::toInt( void ) const
{
	return (this->_value << this->_fractional_bits);
}
