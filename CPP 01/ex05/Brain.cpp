/*
* Created: 2021/03/26
*/

#include "Brain.hpp"

Brain::Brain(void) {
}

Brain::~Brain(void) {
}

std::string	Brain::identify(void) const
{
	std::stringstream line;
	
	line << this;
	return (line.str());
}