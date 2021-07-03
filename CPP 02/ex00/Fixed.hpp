/*
* Created: 11:09:31
*/

#ifndef FIXED_HPP
# define FIXED_HPP

#include <iostream>

class Fixed
{
	private:
		static const int _litteral = 8;
		int _value;
	
	public:
		Fixed( void );
		Fixed( Fixed & str );
		Fixed& operator= ( Fixed & str );
		~Fixed( void );

		void setRawBits( int const row );
		int getRawBits( void ) const;
};

#endif