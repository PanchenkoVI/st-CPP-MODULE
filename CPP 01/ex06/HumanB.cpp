/*
* Created: 2021/03/26
*/

# include "HumanB.hpp"

HumanB::HumanB(std::string name) {

	std::cout << "Hi HumanB." << std::endl;
	_name = name;	
}
HumanB::~HumanB(){

	std::cout << "Bye HumanB." << std::endl;
}

void	HumanB::attack(void){
	std::cout << _name;
	std::cout << " attacks with his ";
	std::cout << _wp->getType();
	std::cout << std::endl;
}

void HumanB::setWeapon(Weapon &wpp) {

	_wp = &wpp;
}