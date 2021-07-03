/*
* Created: 11:09:31
*/

#ifndef FIXED_HPP
# define FIXED_HPP

#include <iostream>
#include <cmath>

#define RED		"\033[1;31m"
#define GREEN	"\033[1;32m"
#define END		"\033[0m"

class Fixed
{
	private:
		static const int _litteral = 8;
		int _value;

	public:
		Fixed( void );
		Fixed( int const i );
		Fixed( float const i );
		Fixed( Fixed const & str );
		~Fixed( void );
		Fixed &operator= ( Fixed const & str );

		int getRawBits( void ) const;
		void setRawBits( int const raw );
		int toInt( void ) const;
		float toFloat( void ) const;
};

std::ostream &operator<< ( std::ostream &, Fixed const & );

#endif