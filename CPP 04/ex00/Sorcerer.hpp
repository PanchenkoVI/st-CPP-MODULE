/*
* Created: 2021/03/30
*/

#ifndef SORCERER_HPP
# define SORCERER_HPP

#include <iostream>
#include <string>

#include "Victim.hpp"

# define BLUE		"\033[1;34m"
# define FIO		"\033[1;35m"
# define RED		"\033[1;31m"
# define GREEN		"\033[1;32m"
# define END		"\033[0m"

class Sorcerer
{	
	Sorcerer();
	std::string _name;
	std::string _title;

	public:
		Sorcerer(Sorcerer const & line);
		Sorcerer( std::string const & name, std::string const & title);
		virtual ~Sorcerer();

		Sorcerer &operator=(Sorcerer const & line);

		std::string const & getTitle(void) const;
		std::string const & getName(void) const;

		void polymorph(Victim const &) const;
};

std::ostream &operator<<(std::ostream & line, Sorcerer const & src);

#endif