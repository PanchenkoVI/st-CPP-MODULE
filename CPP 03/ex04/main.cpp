/*
* Created: 2021/03/28
*/

#include "FragTrap.hpp"
#include "ScavTrap.hpp"
#include "ClapTrap.hpp"
#include "NinjaTrap.hpp"
#include "SuperTrap.hpp"

int main(void)
{
	std::cout << "        <--------------------|-----------|------------------->" << std::endl;
	std::cout << "    <------------------------|__WELCOME__|----------------------->" << std::endl;
	std::cout << "        <--------------------|-----------|------------------->" << std::endl << std::endl;
	SuperTrap sp("SuperTr");
	
	sp.rangedAttack("enemyR");
	sp.meleeAttack("enemyM");


	NinjaTrap ng("ng");
	ng.rangedAttack("enemyR");
	ng.meleeAttack("enemyM");


	sp.beRepaired(10);
	sp.rangedAttack("enemyR");

	sp.takeDamage(20);

	sp.vaulthunter_dot_exe("enemyR");
	sp.vaulthunter_dot_exe("enemyR");
	sp.vaulthunter_dot_exe("enemyR");
	sp.vaulthunter_dot_exe("enemyR");
	sp.vaulthunter_dot_exe("enemyR");

	std::cout << "    <------------------------|___________|----------------------->" << std::endl;
	std::cout << "    <------------------------|___________|----------------------->" << std::endl << std::endl;
	return (0);
}