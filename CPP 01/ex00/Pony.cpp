/*
* Created: 2021/03/26
*/

#include "Pony.hpp"

Pony::Pony(void) {

	age = "0";
	name = "None";
	color = "nOne";
	growth = "noNe";
	character = "nonE";
}

Pony::~Pony(void) {

	std::cout << "THE END!\n";
}

void	Pony::getAge(std::string ag) {

	age = ag;
}

void	Pony::getName(std::string nm) {

	name = nm;
}

void	Pony::getColor(std::string clr) {

	color = clr;
}

void	Pony::getGrowth(std::string gwh) {

	growth = gwh;
}

void	Pony::getCharacter(std::string chcr) {

	character = chcr;
}

void	Pony::ft_output(void) {

	std::cout << "Name: " << name << std::endl;
	std::cout << "Age: " << age << std::endl;	
	std::cout << "Color: " << color << std::endl;
	std::cout << "Growth: " << growth << std::endl;
	std::cout << "Character: " << character << std::endl;
}
