/*
* Created: 2021/03/28
*/

#include "ScavTrap.hpp"

ScavTrap::ScavTrap(void) {

	std::cout << GREEN << "<--------------------------|__START_DEFOLT__|-------------------------->\n" << END;
	std::cout << GREEN << "                           |____ScavTrap____|\n" << END;
	srand(time(NULL));
	_name = "Default_ScavTrap";
	this->_level = 1;	
	this->_hitPoints = 100;
	this->_energyPoints = 50;
	this->_maxHitPoints = 100;	
	this->_maxEnergyPoints = 50;
	this->_meleeAttackDamage = 20;
	this->_rangedAttackDamage = 15;
	this->_armorDamageReduction = 3;
	std::cout << GREEN << "FR4G-TP " << END;
	std::cout << "Hey everybody! I'm " << this->_name << ". Check out my package!" << "\n\n";
}

ScavTrap::ScavTrap(std::string const nam) {

	std::cout << GREEN << "<------------------------|__START_NON_DEFOLT__|------------------------>\n" << END;
	std::cout << GREEN << "                           |____ScavTrap____|\n" << END;
	srand(time(NULL));
	this->_name = nam;
	this->_hitPoints = 100;
	this->_maxHitPoints = 100;
	this->_energyPoints = 50;
	this->_maxEnergyPoints = 50;
	this->_level = 1;
	this->_meleeAttackDamage = 20;
	this->_rangedAttackDamage = 15;
	this->_armorDamageReduction = 3;
	std::cout << GREEN << "FR4G-TP " << END << " <" << this->_name << "> ";
	std::cout << "- Let's get this party started!\n" << std::endl;
}

ScavTrap::ScavTrap(ScavTrap const & aft) {

	std::cout << GREEN << "<------------------------------|__OTHER__|----------------------------->\n" << END;
	std::cout << GREEN << "                           |____ScavTrap____|\n" << END;
	this->_name = aft._name;
	this->_level = aft._level;
	this->_hitPoints = aft._hitPoints;
	this->_maxHitPoints = aft._maxHitPoints;
	this->_energyPoints = aft._energyPoints;
	this->_maxEnergyPoints = aft._maxEnergyPoints;
	this->_meleeAttackDamage = aft._meleeAttackDamage;
	this->_rangedAttackDamage = aft._rangedAttackDamage;
	this->_armorDamageReduction = aft._armorDamageReduction;
}

ScavTrap::~ScavTrap(){
	std::cout << GREEN << "        <--------------------|__---_---__|--------------------->\n" << END;
	std::cout << "		      Goodbye " << this->_name << "!" << std::endl;
	std::cout << GREEN << "        <--------------------|__THE_END__|--------------------->\n" << END;
	std::cout << GREEN << "                              <--------->\n\n" << END;
}

ScavTrap & ScavTrap::operator= (const ScavTrap &renewal) {

	std::cout << GREEN << "<----------------------------|__OPERATOR__|---------------------------->\n\n" << END;
	std::cout << GREEN << "                           |____ScavTrap____|\n" << END;
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

void ScavTrap::printf_speechh(void)
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

	std::cout << GREEN << "<----------------------|CHALLENGE_NEWCOMER|----------------------->\n" << END;				
	std::cout << GREEN << "                        |____ScavTrap____|\n" << END;
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
	printf_speechh();	
	tmp = this->_energyPoints;
	this->_energyPoints = this->_energyPoints - 25;
	std::cout << GREEN << "P.S.:\n" << END << "Before (" << tmp << ") energy points.\nAfter  (" << this->_energyPoints << ") energy points.\n\n";
}