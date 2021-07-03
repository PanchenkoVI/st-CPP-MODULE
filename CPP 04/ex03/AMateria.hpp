/*
* Created: 2021/03/30
*/

#ifndef AMATERIA_HPP
# define AMATERIA_HPP

class ICharacter;

#include "ICharacter.hpp"

#include <string>
#include <iostream>

class AMateria 
{
	private:
		AMateria();
		std::string _type;
		unsigned int _xp;

	public:
		AMateria(std::string const & type);
		AMateria(const AMateria &);
		AMateria& operator=(const AMateria &);
		virtual ~AMateria();

		std::string const & getType() const; //Returns the materia type
		unsigned int getXP() const; //Returns the Materia's XP

		virtual AMateria* clone() const = 0;
		virtual void use(ICharacter& target);

	protected:
		void setXP(unsigned int xp);
};

#endif