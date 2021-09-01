#ifndef FIXED_HPP
# define FIXED_HPP

#include <iostream>
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
	static Fixed	min(Fixed const &a, Fixed const &b);
	static Fixed	max(Fixed const &a, Fixed const &b);


	void	setRawBits(int const raw);
	int		getRawBits( void ) const;
	float	toFloat( void ) const;
	int		toInt( void ) const;

	~Fixed();
};

std::ostream	&operator<<(std::ostream & out, Fixed const & value);

#endif