/*
* Created: 2021/03/30
*/

#ifndef MATERIASOURCE_HPP
# define MATERIASOURCE_HPP

#include "IMateriaSource.hpp"

#include <string>
#include <iostream>

class MateriaSource: public IMateriaSource {

	private:
		AMateria* _mmmm[4];

	public:
		MateriaSource();
		MateriaSource(const MateriaSource & );
		virtual ~MateriaSource();
		MateriaSource & operator= (const MateriaSource & );

		virtual void learnMateria(AMateria* m);
		virtual AMateria* createMateria(std::string const & );

};
#endif