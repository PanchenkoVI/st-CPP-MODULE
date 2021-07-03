/*
* Created: 2021/03/31
*/

#include "Bureaucrat.hpp"
#include "Form.hpp"

int		main(void)
{
	Bureaucrat	br1("Alla", 1);
	Bureaucrat	br2("BOBY", 25);
	Bureaucrat	br3("KATY", 149);

	Form		test1("TEST-123", 20, 50);
	Form		test2("TEST-321", 5, 10);

	std::cout << br1 << std::endl;
	std::cout << br2 << std::endl;
	std::cout << br3 << std::endl;
	std::cout << test1;
	std::cout << test2;

	br3.signForm(&test2);
	br2.signForm(&test2);
	br1.signForm(&test2);
	std::cout << "#=============>" << std::endl;
	br3.signForm(&test2);
	br2.signForm(&test2);
	br1.signForm(&test2);
	std::cout << "#=============>" << std::endl;
	br3.signForm(&test1);
	br2.signForm(&test1);
	br1.signForm(&test1);
	br3.signForm(&test1);
	
	std::cout << "<----|BAD FORM|---->" << std::endl;
	try
	{
		std::cout << "12-160" <<  std::endl;		
		Form	letter("letter", 12, 160);
	}
	catch (std::exception & e)
	{
		std::cout << RED << e.what() << END << std::endl;
	}
	try
	{
		std::cout << "12-0" <<  std::endl;	
		Form	letter("letter", 12, 0);
	}
	catch (std::exception & e)
	{
		std::cout << RED << e.what() << END << std::endl;
	}

	return (0);
}