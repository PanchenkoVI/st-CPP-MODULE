/*
* Created: 2021/03/26
*/

#ifndef PONY_HPP
# define PONY_HPP

#include <iostream>
#include <string>

class Pony
{
	private:
		std::string age;
		std::string name;
		std::string color;
		std::string growth;
		std::string character;

	public:
		Pony();
		~Pony();
		void	getAge(std::string ag);
		void	getName(std::string nm);
		void	getColor(std::string clr);
		void	getGrowth(std::string gwh);
		void	getCharacter(std::string chcr);
		void	ft_output(void);
};

#endif