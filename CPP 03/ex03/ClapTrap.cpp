/*
* Created: 2021/03/28
*/

#include "ClapTrap.hpp"

ClapTrap::ClapTrap(void) {
	
	std::cout << "<--------------------------|__START_DEFOLT__|-------------------------->\n";
	std::cout << "                           |____ClapTrap____|\n";
	_name = "Default_ClapTrap";
	_level = 1;	
	_hitPoints = 100;
	_energyPoints = 100;
	_maxHitPoints = 100;	
	_maxEnergyPoints = 100;
	_meleeAttackDamage = 100;
	_rangedAttackDamage = 100;
	_armorDamageReduction = 100;
	std::cout << "- Brrr...\n\n";
}

ClapTrap::ClapTrap(std::string const nam) {

	std::cout << "<------------------------|__START_NON_DEFOLT__|------------------------>\n";
	std::cout << "                           |____ClapTrap____|\n";
	srand(time(NULL));
	_name = nam;
	_level = 1;	
	_hitPoints = 100;
	_energyPoints = 100;
	_maxHitPoints = 100;	
	_maxEnergyPoints = 100;
	_meleeAttackDamage = 100;
	_rangedAttackDamage = 100;
	_armorDamageReduction = 100;
	std::cout << "FR4G-TP ";
	std::cout << "- Zzzzzz... Zzzzzz...\n\n";
}

ClapTrap::ClapTrap(ClapTrap const & aft) {
	std::cout << "<------------------------------|___OTHER___|----------------------------->\n";
	std::cout << "                               |_ClapTrap__|\n";
	this->_name = aft._name;
	this->_hitPoints = aft._hitPoints;	
	this->_maxHitPoints = aft._maxHitPoints;
	this->_energyPoints = aft._energyPoints;
	this->_maxEnergyPoints = aft._maxEnergyPoints;
	this->_level = aft._level;
	this->_meleeAttackDamage = aft._meleeAttackDamage;
	this->_rangedAttackDamage = aft._rangedAttackDamage;
	this->_armorDamageReduction = aft._armorDamageReduction;
}

ClapTrap::~ClapTrap(void) {
	std::cout << "        <--------------------|__---_---__|--------------------->\n";	
	std::cout << "        	 Parents: Goodbye " << this->_name << "!" << std::endl;
	std::cout << "        <--------------------|__THE_END__|--------------------->\n";
	std::cout << "                              <--------->\n\n";
}

ClapTrap & ClapTrap::operator= (const ClapTrap &renewal) {

	std::cout << "<----------------------------|__OPERATOR__|---------------------------->\n\n";
	std::cout << "                             |__ClapTrap__|\n";
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

void ClapTrap::rangedAttack(std::string const & target) {

	std::cout << "<--------------------------|__RANGEDATTACK__|-------------------------->\n";
	std::cout << "                           |____ClapTrap____|\n";
	std::cout << "FR4G-TP ";
	std::cout << this->_name;
	std::cout << " attacks ";
	std::cout << target;
	std::cout << " at range, causing ";
	std::cout << this->_rangedAttackDamage;
	std::cout << " points of damage!\n\n";
}
void ClapTrap::meleeAttack(std::string const & target) {

	std::cout << "<--------------------------|__MELEEATTACK___|--------------------------->\n";
	std::cout << "                           |____ClapTrap____|\n";
	std::cout << "FR4G-TP ";
	std::cout << this->_name;
	std::cout << " attacks ";
	std::cout << target;
	std::cout << " at melee, causing ";
	std::cout << this->_meleeAttackDamage;
	std::cout << " points of damage!\n\n";
}

void ClapTrap::takeDamage(unsigned int amount) {
	
	std::cout << "<--------------------------|__TAKE_DAMAGE___|--------------------------->\n";
	std::cout << "                           |____ClapTrap____|\n";
	int		dmg = -amount;
	int		tmp = 0;

	dmg = dmg + this->_hitPoints;
	dmg = dmg + this->_armorDamageReduction;
	if (dmg < this->_hitPoints)
	{
		if (dmg < 0)
			dmg = 0;
		if (dmg > this->_maxHitPoints)
			dmg = this->_maxHitPoints;
		tmp = this->_hitPoints;
		std::cout << "FR4G-TP ";
		std::cout << this->_name;
		this->_hitPoints = dmg;
		std::cout << " take damage = ";
		std::cout << amount;
		std::cout << " points.\n";
		std::cout << "- It hurted me!!!\n";
		std::cout << "P.S.:\nBefore = " << tmp << " health points.\nAfter = " << dmg << " points.\n\n";
	}
	else
		std::cout << "FR4G-TP I.. I don't take damage! I live you...\n\n";
}

void ClapTrap::beRepaired(unsigned int amount) {

	std::cout << "<---------------------------|__BE_REPAIRED__|-------------------------->\n";
	std::cout << "                           |____ClapTrap____|\n";
	int rprd = amount;
	
	rprd = rprd + this->_hitPoints;
	if (rprd > this->_hitPoints)
	{
		if (rprd < 0)
			rprd = 0;
		if (rprd > this->_maxHitPoints)
			rprd = this->_maxHitPoints;	
		std::cout << "FR4G-TP Earlier " << this->_name << " has hit points (" << this->_hitPoints; 
		this->_hitPoints = rprd;
		std::cout << ") points.\n"<< this->_name << " was repaired.. And naw.. It has got (";
		std::cout << this->_hitPoints << ") points.\n\n";	
	}
	else
		std::cout << "FR4G-TP How should I react?!\n" << "P.s.: Invalid parameter." << "\n\n";
}

std::string ClapTrap::getName()
{
    return (this->_name);
}

int ClapTrap::getHit()
{
    return (this->_hitPoints);
}