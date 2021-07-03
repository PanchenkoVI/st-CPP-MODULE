/*
* Created: 2021/04/02
*/

#ifndef DATA_HPP
# define DATA_HPP

#include <iostream>
#include <cstdlib>

#define RED		"\033[1;31m"
#define GREEN	"\033[1;32m"
#define END		"\033[0m"

struct Data
{
	int _ind;
	std::string _str1;
	std::string _str2;
};

void *serialize(void);
Data *deserialize(void *raw);

#endif