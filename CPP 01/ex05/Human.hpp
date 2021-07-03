/*
* Created: 2021/03/26
*/

#ifndef HUMAN_HPP
# define HUMAN_HPP

#include "Brain.hpp"

#include <iostream>
#include <string>
#include <sstream>

class Human
{
	private:
		Brain const brain;
		
	public:
		Human(void);
		~Human(void);

		std::string	identify(void) const;
		const Brain &getBrain(void) const;
};

#endif