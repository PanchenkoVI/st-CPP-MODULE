/*
* Created: 2021/03/30
*/

#include "Squad.hpp"

Squad::Squad() {

	units = NULL;
	count = 0;
}

Squad::Squad(Squad const &str) {

	int i = 0;
	units = NULL;
	count = 0;
	while (i < str.getCount())
	{
		this->push(str.getUnit(i)->clone());
		i++;
	}
}

Squad::~Squad() {

	if (!units)
		return ;
	else
	{
		int i = 0;	
		while (i < count)
		{
			delete units[i];
			i++;
		}
		delete units;
	}
}

Squad & Squad::operator= (Squad const & str) {

	int i = 0;
	if (units)
	{
		while (i < count)
		{
			delete units[i];
			i++;
		}
		delete units;
		units = 0;
	}
	count = 0;
	i = 0;
	while (i < str.getCount())
	{
		push(str.getUnit(i)->clone());	
		i++;	
	}
	return *this;
}

ISpaceMarine* Squad::getUnit(int i) const {

	if (count == 0)
		return (0);
	if (i < 0)
		return (0);
	if (i >= count)
		return (0);
	return (units[i]);
}

int Squad::push(ISpaceMarine *human) {

	int  i = 0;
	
	if (!human)
		return (count);
	if (!units)
	{
		units = new ISpaceMarine*[1];
		units[0] = human;
		count = 1;
	}
	else
	{
		while (i < count)
		{
			if (units[i] == human)
				return (count);
			i++;
		}	
		ISpaceMarine **cpy = new ISpaceMarine*[count + 1];
		i = 0;
		while (i < count)
		{
			cpy[i] = units[i];			
			i++;
		}
		delete[] units;
		units = cpy;
		units[count] = human;
		count++;
	}
	return (count);
}

int Squad::getCount(void) const {

	return (this->count);
}