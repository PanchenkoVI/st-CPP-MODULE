/*
* Created: 2021/03/28
*/

#include "ScavTrap.hpp"

ScavTrap::ScavTrap(void) {

	std::cout << GREEN << "<--------------------------|__START_DEFOLT__|-------------------------->\n" << END;
	std::cout << GREEN << "                           |____ScavTrap____|\n" << END;
	srand(time(NULL));
	_name = "Default_ScavTrap";
	_level = 1;	
	_hitPoints = 100;
	_energyPoints = 50;
	_maxHitPoints = 100;	
	_maxEnergyPoints = 50;
	_meleeAttackDamage = 20;
	_rangedAttackDamage = 15;
	_armorDamageReduction = 3;
	std::cout << GREEN << "FR4G-TP " << END;
	std::cout << "Hey everybody! I'm <" << this->_name << ">. Check out my package!" << "\n\n";
}
ScavTrap::ScavTrap(std::string const nam) {

	std::cout << GREEN << "<------------------------|__START_NON_DEFOLT__|------------------------>\n" << END;
	std::cout << GREEN << "                           |____ScavTrap____|\n" << END;
	srand(time(NULL));
	_name = nam;
	_hitPoints = 100;
	_maxHitPoints = 100;
	_energyPoints = 50;
	_maxEnergyPoints = 50;
	_level = 1;
	_meleeAttackDamage = 20;
	_rangedAttackDamage = 15;
	_armorDamageReduction = 3;
	std::cout << GREEN << "FR4G-TP " << END << "<" << this->_name;
	std::cout << "> - Let's get this party started!\n\n";
}
ScavTrap::ScavTrap(ScavTrap const & aft) {

	std::cout << GREEN << "<------------------------------|__OTHER__|----------------------------->\n" << END;
	std::cout << GREEN << "                           |____ScavTrap____|\n" << END;
	_name = aft._name;
	_level = aft._level;
	_hitPoints = aft._hitPoints;
	_maxHitPoints = aft._maxHitPoints;
	_energyPoints = aft._energyPoints;
	_maxEnergyPoints = aft._maxEnergyPoints;
	_meleeAttackDamage = aft._meleeAttackDamage;
	_rangedAttackDamage = aft._rangedAttackDamage;
	_armorDamageReduction = aft._armorDamageReduction;
}
ScavTrap::~ScavTrap(){

	std::cout << GREEN << "        <--------------------|__---_---__|--------------------->\n" << END;	
	std::cout << "		    	  Goodbye <" << this->_name << "> !" << std::endl;
	std::cout << GREEN << "        <--------------------|__THE_END__|--------------------->\n" << END;
	std::cout << GREEN << "                              <--------->\n\n" << END;
}
ScavTrap & ScavTrap::operator= (const ScavTrap &renewal) {

	std::cout << GREEN << "<----------------------------|__OPERATOR__|---------------------------->\n\n" << END;
	std::cout << GREEN << "                           |____ScavTrap____|\n" << END;
	std::cout << GREEN << "FR4G-TP " << END << "<" << this->_name << "> ";
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
void ScavTrap::rangedAttack(std::string const & target) {

	std::cout << GREEN << "<--------------------------|__RANGEDATTACK__|-------------------------->\n" << END;
	std::cout << GREEN << "                           |____ScavTrap____|\n" << END;
	std::cout << GREEN << "FR4G-TP " << END << "<";
	std::cout << this->_name;
	std::cout << "> attacks <";
	std::cout << target;
	std::cout << "> at range, causing <";
	std::cout << this->_rangedAttackDamage;
	std::cout << "> points of damage!\n\n";
}
void ScavTrap::meleeAttack(std::string const & target) {

	std::cout << GREEN << "<--------------------------|__MELEEATTACK__|--------------------------->\n" << END;
	std::cout << GREEN << "                           |____ScavTrap____|\n" << END;
	std::cout << GREEN << "FR4G-TP " << END << "<";
	std::cout << this->_name;
	std::cout << "> attacks <";
	std::cout << target;
	std::cout << "> at melee, causing <";
	std::cout << this->_meleeAttackDamage;
	std::cout << "> points of damage!\n\n";
}

void ScavTrap::takeDamage(unsigned int amount) {
	
	std::cout << GREEN << "<---------------------------|__TAKE_DAMAGE__|-------------------------->\n" << END;
	std::cout << GREEN << "                            |____ScavTrap___|\n" << END;
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
		std::cout << GREEN << "FR4G-TP " << END << "<";
		std::cout << this->_name;
		this->_hitPoints = dmg;
		std::cout << "> take damage <";
		std::cout << amount;
		std::cout << "> points.\n";
		std::cout << "- It hurted me!!!\n";
		std::cout << GREEN << "P.S.:\n" << END << "Before = " << tmp << " health points.\nAfter = " << dmg << " points.\n\n";
	}
	else
		std::cout << GREEN << "FR4G-TP" << END << " I.. I don't take damage! I live you...\n\n";
}
void ScavTrap::beRepaired(unsigned int amount) {

	std::cout << GREEN << "<---------------------------|__BE_REPAIRED__|-------------------------->\n" << END;
	std::cout << GREEN << "                            |___ScavTrap____|\n" << END;
	int rprd = amount;
	
	rprd = rprd + this->_hitPoints;
	if (rprd > this->_hitPoints)
	{
		if (rprd < 0)
			rprd = 0;
		if (rprd > this->_maxHitPoints)
			rprd = this->_maxHitPoints;	
		std::cout << GREEN << "FR4G-TP"  << END << " Earlier <" << this->_name << "> has hit points <" << this->_hitPoints; 
		this->_hitPoints = rprd;
		std::cout << "> points.\n<"<< this->_name << "> was repaired.. And naw.. It has got <";
		std::cout << this->_hitPoints << "> points.\n\n";	
	}
	else
		std::cout << GREEN << "FR4G-TP"  << END << " How should I react?!\n" << "P.s.: Invalid parameter." << "\n\n";
}

void ScavTrap::randomChallenge(void)
{
	int t1 =  rand() % 5;
	
	std::cout << "And after <" << this->_name << "> think...\n";	
	if (t1 == 0)
		std::cout << "Avast ye scurvy dogs!\n";
	else if (t1 == 1)
		std::cout << "Is this really canon?\n";
	else if (t1 == 2)
		std::cout << "Time to get swabby!\n";
	else if (t1 == 3)
		std::cout << "I feel a joke about poop decks coming on!\n";
	else if (t1 == 4)
		std::cout << "Hard to port whine!\n";
	std::cout << "Later.. <" << this->_name << "> understand that it's bad idea... And <" << this->_name << "> win enemy.. and speak:\n";
}

void ScavTrap::printf_speech(void)
{
	int t1 =  rand() % 5;
	int t2 =  rand() % 5;
	int t3 =  rand() % 5;
	std::string line1[5] = {"- Thanks for all your HELP",
							"- Ah, man, I am so late!", 
							"- Ha!",
							"- Hey!",
							"- Take that!"};

	std::string line2[5] = {"- Are you god? Am I dead?",
							"- Just ... Wait, you can actually do that?", 
							"- You call yourself a badass?",
							"- Wow, did I really do that?",
							"- Is it dead? Can, can I open my eyes now?"};

	std::string line3[5] = {"- Ah, no... uh, you ...",
							"- Nonono, you're not dead, you're ...", 
							"- Why do I even feel pain?!",
							"- WOW! I hit 'em!",
							"- I didn't panic! Nope, not me!"};

	std::cout << line1[t1];
	std::cout << " " << line2[t2]  << std::endl; 
	std::cout << line3[t3] << std::endl << std::endl;

}

void ScavTrap::challengeNewcomer(std::string const & target) {

	std::cout << GREEN << "<-------------------------|CHALLENGE_NEWCOMER|----------------------->\n" << END;				
	std::cout << GREEN << "                           |____ScavTrap____|\n" << END;
	int tmp = 0;
	if (this->_energyPoints < 25)
	{
		std::cout << GREEN << "FR4G-TP " << END << "<";
		std::cout << this->_name;
		std::cout << "> is out of energy!\n\n";
		return ; 
	}
	std::cout << GREEN << "FR4G-TP " << END;
	this->_hitPoints = this->_maxHitPoints;
	std::cout << "Oh.. <" << this->_name << "> see <" << target << "> !\n";
	randomChallenge();
	printf_speech();	
	tmp = this->_energyPoints;
	this->_energyPoints = this->_energyPoints - 25;
	std::cout << GREEN << "P.S.:\n" << END << "Before <" << tmp << "> energy points.\nAfter <" << this->_energyPoints << "> energy points.\n\n";
}