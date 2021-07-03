/*
* Created: 2021/03/26
*/

#include <iostream>
#include <string>

int main(void)
{
	std::string line = "HI THIS IS BRAIN";
	std::string	*ptr = &line;
	std::string	&rfr = line;

	std::cout << *ptr << std::endl;
	std::cout << rfr << std::endl;

	return (0);
}
