/*
* Created: 2021/03/26
*/

#ifndef BRAIN_HPP
# define BRAIN_HPP

#include <iostream>
#include <string>
#include <sstream>

class Brain
{
	public:
		Brain(void);
		~Brain(void);

		std::string	identify(void) const;
};

#endif