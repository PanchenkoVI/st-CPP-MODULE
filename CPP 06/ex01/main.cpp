/*
* Created: 2021/04/02
*/

#include "Data.hpp"

void    *serialize(void)
{
	const std::string cs1 = "abcdefghijklmopqrstuvxyz";
	const std::string cs2 = "ABCDEFGHIJKLMOPQRSTUVXYZ";
	char *ch1 = new char[20];
	char *ch2 = new char[20];
	int n = 0;

	//==========> STR-1
	while (n < 10)
	{
		ch1[n] = cs1[rand() % cs1.length()];
		n++;		
	}
	while (n < 19)
	{
		ch1[n] = cs2[rand() % cs2.length()];
		n++;
	}
	ch1[n] = '\0';
	std::string s1(ch1);
	//==========> STR-2
	n = 0;
	while (n < 10)
	{
		ch2[n] = cs2[rand() % cs2.length()];
		n++;		
	}
	while (n < 19)
	{
		ch2[n] = cs1[rand() % cs1.length()];
		n++;
	}
	ch2[n] = '\0';
	std::string s2(ch2);
	//==========> INT
	int i = rand() % 10000;

	std::cout << "\t<====|====|" << RED << "SERIALIZE" << END "|====|====>" << std::endl;
	std::cout << "<====|====|====|====|====|====|====|====|====>" << std::endl;
	std::cout << "|STR1| " << RED << s1 << "\t(sizeof = " << sizeof(s1) << ")" << END << "|" << std::endl;
	std::cout << "|INT | " << RED << i << "\t\t\t(sizeof = " << sizeof(i) << ")" << END  << " |" << std::endl;
	std::cout << "|STR2| " << RED << s2 << "\t(sizeof = " << sizeof(s2) << ")" << END << "|" << std::endl;
	std::cout << "<====|====|====|====|====|====|====|====|====>" << std::endl << std::endl;

	char *raw = new char[52];

	memcpy(reinterpret_cast<void*>(raw), reinterpret_cast<void*>(&s1), 24);
	memcpy(reinterpret_cast<void*>(raw + 24), reinterpret_cast<void*>(&i), 4);
	memcpy(reinterpret_cast<void*>(raw + 24 + 4), reinterpret_cast<void*>(&s2), 24);
	
	delete[] ch1;
	delete[] ch2;

	return (reinterpret_cast<void *>(raw));
}

Data *deserialize(void *raw)
{
	Data *data = new Data;
	char *c = reinterpret_cast<char *>(raw);

	memcpy(reinterpret_cast<void*>(&(data->_str1)), reinterpret_cast<void*>(c), 24);
	memcpy(reinterpret_cast<void*>(&(data->_ind)), reinterpret_cast<void*>(c + 24), 4);
	memcpy(reinterpret_cast<void*>(&(data->_str2)), reinterpret_cast<void*>(c + 28), 24);

	return (data);
}

int		main(void)
{
	srand(time(NULL));
	void *raw = serialize();
	Data *data = deserialize(raw);
	
	std::cout << GREEN << "\t<====|====|" << RED << "DESERIALIZE" << GREEN << "|====|====>" << END << std::endl;
	std::cout << GREEN << "<====|====|====|====|====|====|====|====|====>" << END << std::endl;
	std::cout << GREEN << "|STR1| " << RED << data->_str1 << "\t(sizeof = " << sizeof(data->_str1) << ")" << END << "|" << std::endl;
	std::cout << GREEN << "|INT | " << RED << data->_ind << "\t\t\t(sizeof = " << sizeof(data->_ind) << ")" << END  << " |" << std::endl;
	std::cout << GREEN << "|STR2| " << RED << data->_str2 << "\t(sizeof = " << sizeof(data->_str2) << ")" << END << "|" << std::endl;
	std::cout << GREEN << "<====|====|====|====|====|====|====|====|====>" << END << std::endl;

	delete static_cast<char*>(raw);
	delete data;

	return (0);
}