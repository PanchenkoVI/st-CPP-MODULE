/*
* Created: 2021/03/28
*/

#include "SuperTrap.hpp"

SuperTrap::SuperTrap(std::string const &name) : ClapTrap(), NinjaTrap(), FragTrap()
{
	std::cout << BLUE << "<--------------------------|____SuperTrap____|-------------------------->\n" << END;
    this->_name = name;
 	std::cout << BLUE << "FR4G-TP " << END << "I'm mr.SuperTrap! And my name is " << this->_name << "!\n\n";
    this->_hitPoints = this->FragTrap::_hitPoints;
    this->_level = 1;
    this->_energyPoints = 120;
   	this->_rangedAttackDamage = this->FragTrap::_rangedAttackDamage;	
    this->_meleeAttackDamage = 60;
    this->_maxEnergyPoints = 120;
    this->_maxHitPoints = this->FragTrap::_maxHitPoints;
    this->_armorDamageReduction = this->FragTrap::_armorDamageReduction;
}

SuperTrap &SuperTrap::operator=(SuperTrap const &other)
{
	std::cout << BLUE << "<--------------------------|____SuperTrap____|-------------------------->\n" << END;
	std::cout << BLUE << "                           |____Operator_____|\n" << END;
	if (this != &other)
	{
		this->_energyPoints = other._energyPoints;
		this->_maxEnergyPoints = other._maxEnergyPoints;
		this->_meleeAttackDamage = other._meleeAttackDamage;
	}
	return (*this);	
}

SuperTrap::~SuperTrap()
{
	std::cout << BLUE << "        <--------------------|__---_---__|--------------------->\n" << END;	
	std::cout << "		      Goodbye " << this->_name << "!" << std::endl;
	std::cout << BLUE << "        <--------------------|__THE_END__|--------------------->\n" << END;
	std::cout << BLUE << "                              <--------->\n\n" << END;
}

void SuperTrap::rangedAttack(std::string const &target) {

	std::cout << BLUE << "<--------------------------|___RANGEATTACK__|-------------------------->\n" << END;
	std::cout << BLUE << "                           |____SuperTrap___|\n" << END;
	std::cout << BLUE << "SuperTrap rangedAttack:\n" << END;
	FragTrap::rangedAttack(target);
}

void SuperTrap::meleeAttack(std::string const &target) {

	std::cout << BLUE << "<--------------------------|___MELEEATTACK__|-------------------------->\n" << END;
	std::cout << BLUE << "                           |____SuperTrap___|\n" << END;
	std::cout << BLUE << "SuperTrap meleeAttack:\n" << END;
	NinjaTrap::meleeAttack(target);
}

