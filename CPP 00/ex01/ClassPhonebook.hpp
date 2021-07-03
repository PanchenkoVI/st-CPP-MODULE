/*
* Created: 2021/03/24
*/

#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

# include "ClassContact.hpp"

class Phonebook {

	private:
		Contact cnt[8];

	public:
		void	ft_add(void);
		void 	ft_search(void);		
};

#endif
