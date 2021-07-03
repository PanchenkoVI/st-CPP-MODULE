/*
* Created: 2021/03/30
*/

#ifndef CHARACTER_HPP
# define CHARACTER_HPP

# include "ICharacter.hpp"

# include <string>

class Character: public ICharacter 
{
	private:
		Character();
		void clear();
		std::string _name;
		AMateria* _am[4];

	public:
		Character(const std::string &);
		Character(const Character &);
		Character &operator=(const Character &);
		virtual ~Character();

		virtual void unequip(int);
		virtual void equip(AMateria*);
		virtual void use(int idx, ICharacter& target);
		virtual const std::string & getName() const;
};

#endif