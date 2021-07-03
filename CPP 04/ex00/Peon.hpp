/*
* Created: 2021/03/30
*/

#ifndef PEON_HPP
# define PEON_HPP

#include <iostream>

#include "Victim.hpp"

class Peon: public Victim
{	
	Peon();
	public:
		Peon(Peon const & line);	
		Peon(std::string const &str);
		virtual ~Peon();

		Peon & operator=(Peon const & str);
		
		void getPolymorphed(void) const;
};

#endif