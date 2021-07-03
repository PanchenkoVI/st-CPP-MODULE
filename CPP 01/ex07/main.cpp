/*
* Created: 2021/03/26
*/

#include <string>
#include <fstream>
#include <cstring>
#include <iostream>

int  main(int argc, char **argv)
{
	if (argc > 4 || argc < 4)
	{
		std::cout << "Bad arguments";
		std::cout << std::endl;
		return (EXIT_FAILURE);
	}
	std::string filename = argv[1], s1 = argv[2], s2 = argv[3];
	std::ifstream flnm(filename);
	if (flnm.fail())
	{
		std::cout << std::strerror(errno);
		std::cout << std::endl;
		return (errno);
	}
	std::string new_name = filename + ".replace";	
	std::ofstream new_file(new_name);
	if (new_file.fail())
	{
		std::cout << std::strerror(errno);
		std::cout << std::endl;
		return (errno);		
	}
	std::string line;
	while (std::getline(flnm, line))
	{
		while (line.find(s1) != std::string::npos)
			line.replace(line.find(s1), s1.length(), s2);
		new_file << line << std::endl;
	}
	new_file.close();
	flnm.close();
	return (0);
}