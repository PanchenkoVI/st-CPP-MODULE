/*
* Created: 2021/04/03
*/

#ifndef INTER_HPP
# define INTER_HPP

#include <string>
#include <iostream>

class Awesome
{
	public:
		Awesome( void ) : _n( 42 ) { return; }
		int get( void ) const { return this->_n; }

	private:
		int _n;
};

std::ostream & operator<<( std::ostream & o, Awesome const & rhs ) { o << rhs.get(); return o; }

template <typename T>
void iter(T *arr, int len, void (*fc)(const T &))
{
	if (!len)
		return ;
	if (!arr)
		return ;
	int i = 0;
	while (i < len)
	{
		fc(arr[i]);
		i++;
	}
}

template<typename T>
void print(T const & x) 
{
	std::cout << x << std::endl;
	return;
}

template <typename T>
void decrement(T const & i)
{
	int a = i;
	a--;
	std::cout << a << " ";
}

template <typename T>
void increment(T const & i)
{
	int a = i;
	a++;
	std::cout << a << " ";
}

template <typename T>
void squared(T const & i)
{
	int a = i;
	a = a * i;
	std::cout << a << " ";
}

#endif