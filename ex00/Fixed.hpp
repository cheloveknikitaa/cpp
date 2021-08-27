#ifndef FIXED_HPP
# define FIXED_HPP

#include <iostream>

class Fixed
{
private:
	static int const	_fractional_bits = 8;
	int					_value;
public:
	Fixed();
	Fixed(const Fixed &raw);
	Fixed &operator=(Fixed const &raw);
	void	setRawBits(int const raw);
	int		getRawBits( void ) const;
	~Fixed();
};

#endif