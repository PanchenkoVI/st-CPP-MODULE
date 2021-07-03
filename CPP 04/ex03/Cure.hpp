/*
* Created: 2021/03/30
*/

#ifndef CURE_HPP
# define CURE_HPP

#include "AMateria.hpp"

#include <iostream>

class Cure: public AMateria {
	public:
		Cure();
		Cure(const Cure &);
		Cure& operator=(const Cure &);
		virtual ~Cure();

		virtual AMateria* clone() const;
		virtual void use(ICharacter& target);
};


#endif