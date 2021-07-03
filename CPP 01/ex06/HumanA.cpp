/*
* Created: 2021/03/26
*/

# include "HumanA.hpp"

HumanA::HumanA(std::string name, Weapon &wpp): _wp(wpp) {

	std::cout << "Hi HumanA." << std::endl;
	_name = name;
}

HumanA::~HumanA() {

	std::cout << "Bye HumanA." << std::endl;
}

void	HumanA::attack() {

	std::cout << _name;
	std::cout << " attacks with his ";
	std::cout << _wp.getType();
	std::cout << std::endl;
}