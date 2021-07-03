/*
* Created: 2021/03/28
*/

#include "FragTrap.hpp"

FragTrap::FragTrap(void) {

	std::cout << RED << "<--------------------------|__START_DEFOLT__|-------------------------->\n" << END;
	std::cout << RED << "                           |____FragTrap____|\n" << END;
	srand(time(NULL));
	_name = "Default_FragTrap";
	_level = 1;	
	_hitPoints = 100;
	_energyPoints = 100;
	_maxHitPoints = 100;	
	_maxEnergyPoints = 100;
	_meleeAttackDamage = 30;
	_rangedAttackDamage = 20;
	_armorDamageReduction = 5;
	std::cout << RED << "FR4G-TP " << END;
	std::cout << "- Hey, best friend!" << " I.. I.. I don't know what is my name!...\n";
	std::cout << "- I will be nameless!" << "\n\n";
}

FragTrap::FragTrap(std::string const nam) {

	std::cout << RED << "<------------------------|__START_NON_DEFOLT__|------------------------>\n" << END;
	std::cout << RED << "                           |____FragTrap____|\n" << END;
	srand(time(NULL));
	_name = nam;
	_level = 1;	
	_hitPoints = 100;
	_energyPoints = 100;
	_maxHitPoints = 100;	
	_maxEnergyPoints = 100;
	_meleeAttackDamage = 30;
	_rangedAttackDamage = 20;
	_armorDamageReduction = 5;
	std::cout << RED << "FR4G-TP " << END;
	std::cout << "- Yessss, look into my eyes. You're getting sleepy.\n";
	std::cout << "You're getting... zzzzzz... Zzzzzz...\n\n";
}

FragTrap::FragTrap(FragTrap const & aft) {

	std::cout << RED << "<------------------------------|___OTHER___|----------------------------->\n" << END;
	std::cout << RED << "                               |_FragTrap__|\n" << END;
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

FragTrap::~FragTrap(){
	std::cout << RED << "        <--------------------|__---_---__|--------------------->\n" << END;	
	std::cout << "		          Goodbye <" << this->_name << "> !" << std::endl;
	std::cout << RED << "        <--------------------|__THE_END__|--------------------->\n" << END;
	std::cout << RED << "                              <--------->\n\n" << END;
}

FragTrap & FragTrap::operator= (const FragTrap &renewal) {

	std::cout << RED << "<----------------------------|__OPERATOR__|---------------------------->\n\n" << END;
	std::cout << RED << "                             |__FragTrap__|\n" << END;
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

void FragTrap::rangedAttack(std::string const & target) {

	std::cout << RED << "<--------------------------|__RANGEDATTACK__|-------------------------->\n" << END;
	std::cout << RED << "                           |____FragTrap____|\n" << END;
	std::cout << RED << "FR4G-TP" << END << " <";
	std::cout << this->_name;
	std::cout << "> attacks <";
	std::cout << target;
	std::cout << "> at range, causing <";
	std::cout << this->_rangedAttackDamage;
	std::cout << "> points of damage!\n\n";
}

void FragTrap::meleeAttack(std::string const & target) {

	std::cout << RED << "<--------------------------|__MELEEATTACK___|--------------------------->\n" << END;
	std::cout << RED << "                           |____FragTrap____|\n" << END;
	std::cout << RED << "FR4G-TP" << END << " <";
	std::cout << this->_name;
	std::cout << "> attacks <";
	std::cout << target;
	std::cout << " at melee, causing ";
	std::cout << this->_meleeAttackDamage;
	std::cout << "> points of damage!\n\n";
}

void FragTrap::takeDamage(unsigned int amount) {
	
	std::cout << RED << "<--------------------------|__TAKE_DAMAGE___|--------------------------->\n" << END;
	std::cout << RED << "                           |____FragTrap____|\n" << END;
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
		std::cout << RED << "FR4G-TP " << END << "<";
		std::cout << this->_name;
		this->_hitPoints = dmg;
		std::cout << "> take damage <";
		std::cout << amount;
		std::cout << "> points.\n";
		std::cout << "- It hurted me!!!\n";
		std::cout << RED << "P.S.:\n" << END << "Before = " << tmp << " health points.\nAfter = " << dmg << " points.\n\n";
	}
	else
		std::cout << RED << "FR4G-TP" << END << "I.. I don't take damage! I live you...\n\n";
}

void FragTrap::beRepaired(unsigned int amount) {

	std::cout << RED << "<---------------------------|__BE_REPAIRED__|-------------------------->\n" << END;
	std::cout << RED << "                            |____FragTrap___|\n" << END;
	int rprd = amount;
	
	rprd = rprd + this->_hitPoints;
	if (rprd > this->_hitPoints)
	{
		if (rprd < 0)
			rprd = 0;
		if (rprd > this->_maxHitPoints)
			rprd = this->_maxHitPoints;
		std::cout << RED << "FR4G-TP " << END;	
		std::cout << "Earlier <" << this->_name << "> has hit points <" << this->_hitPoints; 
		this->_hitPoints = rprd;
		std::cout << "> points.\n<"<< this->_name << "> was repaired.. And naw.. It has got <";
		std::cout << this->_hitPoints << "> points.\n\n";	
	}
	else
	{
		std::cout << RED << "FR4G-TP " << END;
		std::cout << "How should I react?!\n" << "P.s.: Invalid parameter." << "\n\n";
	}
}

void FragTrap::generationRandomAttacks(void)
{
	int t1 =  rand() % 5;
	
	if (t1 == 0)
		std::cout << "You used energy to waste\n\n";
	else if (t1 == 1)
		meleeAttack("RandomEnemy");
	else if (t1 == 2)
		rangedAttack("RandomEnemy");
	else if (t1 == 3)
	{
		std::cout << "You were able to make 2 attacks at the same time!\n";
		meleeAttack("RandomEnemy");
		rangedAttack("RandomEnemy");	
	}
	else if (t1 == 4)
	{
		std::cout << "You were able to make 2 attacks at the same time!\n";
		rangedAttack("RandomEnemy");
		meleeAttack("RandomEnemy");
	}
}

void FragTrap::printf_speech(void)
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

	std::cout << RED << "FR4G-TP " << END << line1[t1];
	std::cout << " " << line2[t2]  << std::endl; 
	std::cout << line3[t3] << std::endl << std::endl;
}

void FragTrap::vaulthunter_dot_exe(std::string const & target) {

	std::cout << RED << "<----------------------|__VAULTHUNTER_DOT_EXE__|----------------------->\n" << END;					
	std::cout << RED << "                           |____FragTrap____|\n" << END;
	int tmp = 0;
	if (this->_energyPoints < 25)
	{
		std::cout << RED << "FR4G-TP " << END << "<";
		std::cout << this->_name;
		std::cout << "> is out of energy!\n\n";
		return ; 
	}
	printf_speech();
	this->_hitPoints = this->_maxHitPoints;
	std::cout << "Oh.. <" << this->_name << "> attac!! to <" << target << ">! \n";
	generationRandomAttacks();	
	tmp = this->_energyPoints;
	this->_energyPoints = this->_energyPoints - 25;
	std::cout << "P.S.:\nBefore <" << tmp << "> energy points.\nAfter  <" << this->_energyPoints << "> energy points.\n\n";
}