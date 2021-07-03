/*
* Created: 2021/03/28
*/

#include "FragTrap.hpp"
#include "ScavTrap.hpp"

int		main(void)
{
	std::cout << "        <--------------------|__WELCOME__|--------------------->\n";
	std::cout << "                              <--------->\n\n";
	FragTrap ft("FragTrap");
	//FragTrap ft;

	ft.rangedAttack("Enemy-ra");
	// ft.meleeAttack("Enemy-ma");

	ft.takeDamage(10);
	// ft.takeDamage(10);
	// ft.takeDamage(20);
	// ft.takeDamage(-10);
	// ft.takeDamage(-111111);
	// ft.takeDamage(1111111110);

	// ft.takeDamage(15);
	// ft.beRepaired(5);

	// ft.takeDamage(1000);
	// ft.beRepaired(20000);

	// ft.takeDamage(1000);
	// ft.beRepaired(222);

	// ft.vaulthunter_dot_exe("Enemy");
	// ft.vaulthunter_dot_exe("Enemy");
	// ft.vaulthunter_dot_exe("Enemy");
	// ft.vaulthunter_dot_exe("Enemy");
	// ft.vaulthunter_dot_exe("Enemy");
	// ft.vaulthunter_dot_exe("Enemy");
	//-------------------------------->
	ScavTrap st("ScavTrap");
	//ScavTrap st;

	st.rangedAttack("Enemy-ra");
	st.meleeAttack("Enemy-ma");

	st.takeDamage(10);
	st.takeDamage(10);
	st.takeDamage(20);
	st.takeDamage(-10);
	st.takeDamage(-111111);
	st.takeDamage(1111111110);

	st.takeDamage(15);
	st.beRepaired(5);

	st.takeDamage(1000);
	st.beRepaired(20000);

	st.takeDamage(1000);
	st.beRepaired(222);

	st.challengeNewcomer("Enemy");
	st.challengeNewcomer("Enemy");
	st.challengeNewcomer("Enemy");
	st.challengeNewcomer("Enemy");
	st.challengeNewcomer("Enemy");
	st.challengeNewcomer("Enemy");

	return (0);
}