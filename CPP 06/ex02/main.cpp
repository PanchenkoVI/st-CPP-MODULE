/*
* Created: 2021/04/02
*/

#include "Base.hpp"

Base::~Base() {
}

void identify_from_pointer(Base *p)
{
	if (dynamic_cast<A*>(p))
		std::cout << RED << "|" << GREEN << "   A   " << RED << "|" << END << std::endl;
	else if (dynamic_cast<B*>(p))
		std::cout << RED << "|"<< GREEN  << "   B   " << RED << "|" << END << std::endl;
	else if (dynamic_cast<C*>(p))
		std::cout << RED << "|"<< GREEN  << "   C   " << RED << "|" << END  << std::endl;
}

Base *generate(void)
{
	int index = rand() % 3000;
	if (index < 1000)
		return (new A);
	if (index < 2000)
		return (new B);
	return (new C);
}

void identify_from_reference(Base &p)
{
	identify_from_pointer(&p);
}

int		main(void)
{
	srand(time(NULL));

	Base *base1 = generate();
	Base *base2 = generate();
	Base *base3 = generate();

	std::cout << RED << "<===|===>" << END << std::endl;
	identify_from_pointer(base1);
	identify_from_reference(*base1);
	std::cout << RED << "<===|===>" << END << std::endl;
	identify_from_pointer(base2);
	identify_from_reference(*base2);
	std::cout << RED << "<===|===>" << END << std::endl;
	identify_from_pointer(base3);
	identify_from_reference(*base3);
	std::cout << RED << "<===|===>" << END << std::endl;

	delete base1;
	delete base2;
	delete base3;

	return (0);
}