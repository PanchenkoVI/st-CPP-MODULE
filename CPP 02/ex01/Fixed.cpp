/*
* Created: 11:09:31
*/

#include "Fixed.hpp"

Fixed::Fixed(void) {

	std::cout << "Default constructor called" << std::endl;
	_value = 0;	
}

Fixed::Fixed(int const i) {

	_value = i << _litteral;
	std::cout << "Int constructor called" << std::endl;
}

Fixed::Fixed(float const i) {

	_value = roundf(i * (1 << _litteral));	
	std::cout << "Float constructor called" << std::endl;
}

Fixed::Fixed(Fixed const & str) {

	std::cout << GREEN << "Copy constructor called" << END << std::endl;
	*this = str;
}

int Fixed::toInt(void) const {

	return (_value >> _litteral);
}

float Fixed::toFloat(void) const {
	
	float result;
	float tmp;

	result = _value;
	tmp = 1 << _litteral;
	result = _value / tmp;
	return (result);
}

Fixed& Fixed::operator= (Fixed const & str) {

	std::cout << RED << "Assignation operator called" << END << std::endl;	
	if (this != &str)
	{
		_value = str._value;		
		return (*this);
	}
	else
		return *this;
}

std::ostream& operator<< (std::ostream &ost, Fixed const & ind) {

	ost << ind.toFloat();
	return (ost);
}

Fixed::~Fixed( void ) {

	std::cout << "Destructor called" << std::endl;
}

int	Fixed::getRawBits(void) const {

	std::cout << "getRawBits member function called" << std::endl;
	return (_value);
}

void	Fixed::setRawBits(int const raw) {

	std::cout << "getRawBits member function called" << std::endl;
	_value = raw;
}
