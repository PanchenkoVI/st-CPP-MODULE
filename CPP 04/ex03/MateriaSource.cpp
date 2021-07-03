/*
* Created: 2021/03/30
*/

#include "MateriaSource.hpp"
#include "AMateria.hpp"

MateriaSource::MateriaSource() {

	int i = 0;
	while (i < 4)
	{
		_mmmm[i] = 0;
		i++;
	}
}

void MateriaSource::learnMateria(AMateria* m) {

	int i = 0;

	if (m) 
	{
		while (i < 4)
		{
			if (!_mmmm[i]) 
			{
				_mmmm[i] = m->clone();
				break;
			}
			i++;
		}
	}
}

MateriaSource::~MateriaSource() {
	
	int i = 0;

	while (i < 4)
	{
		if (_mmmm[i])
			delete _mmmm[i];
		i++;
	}
}

AMateria * MateriaSource::createMateria(const std::string & type) {

	int i = 0;

	while (i < 4)
	{
		if (_mmmm[i] && _mmmm[i]->getType() == type)
			return _mmmm[i]->clone();		
		i++;
	}
	return 0;
}