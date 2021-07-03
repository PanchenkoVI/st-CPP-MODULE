/*
* Created: 2021/03/26
*/

#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP

#include <string>
#include <iostream>

class Zombie
{
	std::string name;
	std::string type;

	public:
		Zombie(void);
		~Zombie(void);
		
		std::string	getType(void);
		void	announce(void);
		void	getDate(std::string, std::string);
};

#endif