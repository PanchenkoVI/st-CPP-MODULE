/*
* Created: 2021/03/30
*/

#ifndef DEON_HPP
# define DEON_HPP

#include <iostream>

#include "Victim.hpp"

class Deon: public Victim
{
    Deon();
	public:
	    Deon(Deon const &);	
        Deon(std::string const &);
        virtual ~Deon();

        Deon & operator=(Deon const &);
		
	    void getPolymorphed(void) const;
};

#endif