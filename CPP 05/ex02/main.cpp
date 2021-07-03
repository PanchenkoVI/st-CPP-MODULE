/*
* Created: 2021/03/31
*/

#include "PresidentialPardonForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "Bureaucrat.hpp"

int		main(void)
{
	Bureaucrat	br4("BR-4", 149);
	Bureaucrat	br3("BR-3", 100);
	Bureaucrat	br2("BR-2", 45);
	Bureaucrat	br1("BR-1", 1);

	std::cout << br4 << std::endl;
	std::cout << br3 << std::endl;
	std::cout << br2 << std::endl;
	std::cout << br1 << std::endl;

	std::cout << "#=================> Shrubbery_Creation_Form:" << std::endl;
	ShrubberyCreationForm scf1("SCF-1");
	//Required grades: sign 145, exec 137.
	br4.signForm(&scf1);
	br3.signForm(&scf1);
	br2.signForm(&scf1);
	br1.signForm(&scf1);

	std::cout << "#=================> Robotomy_Request_Form:" << std::endl;
	RobotomyRequestForm rrf1("RRF-1");
	//Required grades: sign 72, exec 45.
	br4.signForm(&rrf1);
	br3.signForm(&rrf1);
	br2.signForm(&rrf1);
	br1.signForm(&rrf1);

	std::cout << "#=================> Presidential_Pardon_Form:" << std::endl;
	PresidentialPardonForm ppf1("PPF-1");
	//Required grades: sign 25, exec 5.
	br4.signForm(&ppf1);
	br3.signForm(&ppf1);
	br2.signForm(&ppf1);
	br1.signForm(&ppf1);

	std::cout << "#=================> TEST_execute_1" << std::endl;
	try 
	{
		scf1.execute(br4);
	}
	catch (std::exception &e)
	{
		std::cout << RED << e.what() << END << std::endl;
	}

	try 
	{
		scf1.execute(br3);
	}
	catch (std::exception &e)
	{
		std::cout << RED << e.what() << END << std::endl;
	}

	try 
	{
		scf1.execute(br2);
	}
	catch (std::exception &e)
	{
		std::cout << RED << e.what() << END << std::endl;
	}

	try 
	{
		scf1.execute(br1);
	}
	catch (std::exception &e)
	{
		std::cout << RED << e.what() << END << std::endl;
	}

	std::cout << "#=================> TEST_execute_2" << std::endl;
	try 
	{
		rrf1.execute(br4);
	}
	catch (std::exception &e)
	{
		std::cout << RED << e.what() << END << std::endl;
	}

	try 
	{
		rrf1.execute(br3);
	}
	catch (std::exception &e)
	{
		std::cout << RED << e.what() << END << std::endl;
	}

	try 
	{
		rrf1.execute(br2);
	}
	catch (std::exception &e)
	{
		std::cout << RED << e.what() << END << std::endl;
	}

	try 
	{
		rrf1.execute(br1);
	}
	catch (std::exception &e)
	{
		std::cout << RED << e.what() << END << std::endl;
	}
	
	std::cout << "#=================> TEST_execute_3" << std::endl;
	try 
	{
		ppf1.execute(br4);
	}
	catch (std::exception &e)
	{
		std::cout << RED << e.what() << END << std::endl;
	}

	try 
	{
		ppf1.execute(br3);
	}
	catch (std::exception &e)
	{
		std::cout << RED << e.what() << END << std::endl;
	}

	try 
	{
		ppf1.execute(br2);
	}
	catch (std::exception &e)
	{
		std::cout << RED << e.what() << END << std::endl;
	}

	try 
	{
		ppf1.execute(br1);
	}
	catch (std::exception &e)
	{
		std::cout << RED << e.what() << END << std::endl;
	}

	return (0);
}