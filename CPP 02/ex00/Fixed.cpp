/*
* Created: 11:09:31
*/

#include "Fixed.hpp"

Fixed::Fixed( void ) {

	std::cout << "Default constructor called" << std::endl;
	_value = 0;
}

Fixed::Fixed( Fixed & s ) {

	std::cout << "Copy constructor called" << std::endl;
	*this = s;
}

Fixed & Fixed::operator = ( Fixed & str ) {

	std::cout << "Assignation operator called" << std::endl;
	if (this != &str)
	{
		_value = str.getRawBits();
		return *this;		
	}
	else
		return *this;
} 

Fixed::~Fixed( void ) {

	std::cout << "Destructor called" << std::endl;
}

void Fixed::setRawBits( int const row ) {

	std::cout << "setRawBits member function called" << std::endl;
	_value = row;
}

int	Fixed::getRawBits( void ) const {

	std::cout << "getRawBits member function called" << std::endl;
	return (_value);
}