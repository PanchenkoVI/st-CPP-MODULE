/*
* Created: 2021/04/03
*/

#ifndef WHATEVER_HPP
# define WHATEVER_HPP

#include <iostream>
#include <string>

class Awesome 
{
	public:
		Awesome( int n ) : _n( n ) {}
		bool operator==( Awesome const & rhs ) const { return (this->_n == rhs._n); }
		bool operator!=( Awesome const & rhs ) const{ return (this->_n != rhs._n); }
		bool operator>( Awesome const & rhs ) const { return (this->_n > rhs._n); }
		bool operator<( Awesome const & rhs ) const { return (this->_n < rhs._n); }
		bool operator>=( Awesome const & rhs ) const { return (this->_n >= rhs._n); }
		bool operator<=( Awesome const & rhs ) const { return (this->_n <= rhs._n); }

		int n() const;
	private:
		int _n;
};

int Awesome::n() const {

	return (_n);
}

std::ostream &operator<< (std::ostream &os, Awesome &str) {

	os << str.n();
	return (os);
}

template <typename T>
void swap(T & a, T & b)
{
	T c1 = a;
	T c2 = b;
	a = c2;
	b = c1;
}

template <typename T>
T & min( T & a,  T & b)
{
	if (b > a)
		return (a);
	else
		return (b);
}

template <typename T>
T & max( T & a,  T & b)
{
	if (a > b)
		return (a);
	else
		return (b);
}

#endif