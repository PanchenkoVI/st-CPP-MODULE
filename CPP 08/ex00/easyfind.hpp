/*
* Created: 2021/04/05
*/

#ifndef EASYFIND_HPP
# define EASYFIND_HPP

#include <algorithm>
#include <iostream>

#define RED		"\033[1;31m"
#define GREEN	"\033[1;32m"
#define END		"\033[0m"

template < typename T >
typename T::iterator easyfind(T & str, int i)
{
	typename T::iterator itrt;

	itrt = std::find(str.begin(), str.end(), i);
	if (itrt != str.end())
		return (itrt);
	else
		throw std::exception();
}

#endif