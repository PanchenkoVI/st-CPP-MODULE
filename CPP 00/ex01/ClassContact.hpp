/*
* Created: 2021/03/24
*/

#ifndef CONTACT_H
# define CONTACT_H

#include "ClassPhonebook.hpp"
#include <iostream>
#include <string>
#include <iomanip>

class Contact
{
	private:
		std::string		first_name;
		std::string		last_name;
		std::string		nickname;
		std::string		login;
		std::string		postal_address;
		std::string		email_address;
		std::string		phone_number;
		std::string		birthday_date;
		std::string		favorite_meal;
		std::string		underwear_color;
		std::string		darkest_secret;
	
	public:
		void	ft_add(void);
		void 	ft_search(void);
		void	printContact() const;
		void	set_all (std::string, std::string, std::string, std::string, std::string, std::string, std::string, std::string, std::string, std::string, std::string);
		std::string	get_firstname (void);
		std::string	get_lastname (void);
		std::string	get_nickname (void);
		std::string	get_login (void);
		std::string	get_postaladdress (void);
		std::string	get_emailaddress (void);
		std::string	get_phonenumber (void);
		std::string	get_birthdaydate (void);
		std::string	get_favoritemeal (void);
		std::string	get_underwearcolor (void);
		std::string	get_darkestsecret (void);
};

int main(void);

#endif