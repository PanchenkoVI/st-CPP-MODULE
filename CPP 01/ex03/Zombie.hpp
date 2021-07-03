/*
* Created: 2021/03/26
*/

#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP

#include <iostream>
#include <ctime>

class Zombie
{
	std::string name;
	std::string type;

	public:
		Zombie(void);
		~Zombie(void);
		
		void	announce(void);
		void	getDate(std::string, std::string);
};

#endif