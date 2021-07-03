/*
* Created: 2021/03/28
*/

#include "NinjaTrap.hpp"

NinjaTrap::NinjaTrap(void) {

	std::cout << FIO << "<--------------------------|__START_DEFOLT__|-------------------------->\n" << END;
	std::cout << FIO << "                           |____NinjaTrap____|\n" << END;
	_name = "Default_NinjaTrap";
	_level = 1;	
	_hitPoints = 60;
	_energyPoints = 120;
	_maxHitPoints = 60;	
	_maxEnergyPoints = 120;
	_meleeAttackDamage = 60;
	_rangedAttackDamage = 5;
	_armorDamageReduction = 0;
	std::cout << FIO << "FR4G-TP " << END;
	std::cout << "- I will be!!!.. hmmmm...!" << "\n\n";
}

NinjaTrap::NinjaTrap(std::string const nam) {

	std::cout << FIO << "<------------------------|__START_NON_DEFOLT__|------------------------>\n" << END;
	std::cout << FIO << "                           |____NinjaTrap____|\n" << END;
	_name = nam;
	_level = 1;	
	_hitPoints = 60;
	_energyPoints = 120;
	_maxHitPoints = 60;	
	_maxEnergyPoints = 120;
	_meleeAttackDamage = 60;
	_rangedAttackDamage = 5;
	_armorDamageReduction = 0;
	std::cout << FIO << "FR4G-TP " << END;
	std::cout << "- Hmmm..." << "\n\n";
}

NinjaTrap::~NinjaTrap(){
	std::cout << FIO << "        <--------------------|__---_---__|--------------------->\n" << END;
	std::cout << "		      Goodbye " << this->_name << "!" << std::endl;
	std::cout << FIO << "        <--------------------|__THE_END__|--------------------->\n" << END;
	std::cout << FIO << "                              <--------->\n\n" << END;
}

NinjaTrap & NinjaTrap::operator= (const NinjaTrap &renewal) {

	std::cout << FIO << "<----------------------------|__OPERATOR__|---------------------------->\n" << END;
	std::cout << FIO << "                            |___NinjaTrap____|\n" << END;
	this->_name = renewal._name;
	this->_level = renewal._level;	
	this->_hitPoints = renewal._hitPoints;	
	this->_maxHitPoints = renewal._maxHitPoints;
	this->_energyPoints = renewal._energyPoints;
	this->_maxEnergyPoints = renewal._maxEnergyPoints;
	this->_meleeAttackDamage = renewal._meleeAttackDamage;
	this->_rangedAttackDamage = renewal._rangedAttackDamage;
	this->_armorDamageReduction = renewal._armorDamageReduction;
	return (*this);
}


void NinjaTrap::ninjaShoebox(NinjaTrap &trap)
{
	std::cout << FIO << "<----------------------------|__NINJASHOEBOX_|---------------------------->\n" << END;
	std::cout << FIO << "                             |___NinjaTrap___|\n" << END;

	int ind;
	ind  = (rand() % 10);
	if (ind <= 3)
		std::cout << FIO << "FR4G-TP " << END << this->_name << " is thinking.. And " << trap.getName() << " understand he hasn't brain!\n";
	else if (ind > 3 && ind <= 5)
		std::cout << FIO << "FR4G-TP "  << END << this->_name <<  " is thinking.. And "  << trap.getName() << " understand he hasn't feets!\n";
	else if (ind > 5 && ind <= 7)
		std::cout << FIO << "FR4G-TP "  << END << this->_name << " is thinking.. And "  << trap.getName() << " understand he hasn't hands!\n";
	else
		std::cout << FIO << "FR4G-TP "  << END << this->_name << " is thinking.. And "  << trap.getName() << " understand he hasn't organs!\n";
	std::cout << std::endl;
}

void NinjaTrap::ninjaShoebox(ScavTrap &trap)
{
	std::cout << FIO << "<----------------------------|__NINJASHOEBOX_|---------------------------->\n" << END;
	std::cout << FIO << "                             |___ScavTrap___|\n" << END;
	int ind;

	ind  = (rand() % 10);
	if (ind <= 3)
		std::cout << FIO << "FR4G-TP " << END << this->_name << " give weapon mr." <<  trap.getName() << " and together they take damage <" << trap.getHit() << "> !\n";
	else if (ind > 3 && ind <= 5)
		std::cout << FIO << "FR4G-TP " << END << this->_name <<  " give tools mr." << trap.getName() << " and together they Repair <" << trap.getHit() << "> .\n";
	else if (ind > 5 && ind <= 7)
		std::cout << FIO << "FR4G-TP " << END << this->_name << " and " <<  trap.getName() << " is relaxing <" << trap.getHit() << "> second.\n";
	else
		std::cout << FIO << "FR4G-TP " << END << this->_name << " and " <<  trap.getName() << " is sleeping <" << trap.getHit() << "> second.\n";
	std::cout << std::endl;
}

void NinjaTrap::ninjaShoebox(ClapTrap &trap)
{
	std::cout << FIO << "<----------------------------|_NINJASHOEBOX_|---------------------------->\n" << END;
	std::cout << FIO << "                             |___ClapTrap___|\n" << END;
	int ind;

	ind  = (rand() % 10);
	if (ind < 5)
		std::cout << FIO << "FR4G-TP " << END << this->_name << " hugs <" << trap.getName() << "> .\n";
	else
		std::cout << FIO << "FR4G-TP " << END << END << this->_name << " dancing together <" << trap.getName() << ">.\n";


	std::cout << std::endl;
}

void NinjaTrap::ninjaShoebox(FragTrap &trap)
{
	std::cout << FIO << "<----------------------------|__NINJASHOEBOX_|---------------------------->\n" << END;
	std::cout << FIO << "                             |____FragTrap___|\n" << END;

	int ind;
	ind  = (rand() % 10);
	if (ind <= 3)
		std::cout << FIO << "FR4G-TP " << END << this->_name << " is thinking.. And " << trap.getName() << " understand he hasn't brain!\n";
	else if (ind > 3 && ind <= 5)
		std::cout << FIO << "FR4G-TP "  << END << this->_name <<  " is thinking.. And "  << trap.getName() << " understand he hasn't feets!\n";
	else if (ind > 5 && ind <= 7)
		std::cout << FIO << "FR4G-TP "  << END << this->_name << " is thinking.. And "  << trap.getName() << " understand he hasn't hands!\n";
	else
		std::cout << FIO << "FR4G-TP "  << END << this->_name << " is thinking.. And "  << trap.getName() << " understand he hasn't organs!\n";
	std::cout << std::endl;
}
