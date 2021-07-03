/*
* Created: 2021/03/24
*/

#include "ClassPhonebook.hpp"
#include "ClassContact.hpp"

void			print_contact(Contact contact)
{
	std::cout << "First name: " << contact.get_firstname() << std::endl;
	std::cout << "Last name: " << contact.get_lastname() << std::endl;
	std::cout << "Nickname: " << contact.get_nickname() << std::endl;
	std::cout << "Login: " << contact.get_login() << std::endl;
	std::cout << "Postal address: " << contact.get_postaladdress() << std::endl;
	std::cout << "Email address: " << contact.get_emailaddress() << std::endl;
	std::cout << "Phone number: " << contact.get_phonenumber() << std::endl;
	std::cout << "Birthday date: " << contact.get_birthdaydate() << std::endl;
	std::cout << "Favorite meal: " << contact.get_favoritemeal() << std::endl;
	std::cout << "Underwear color: " << contact.get_underwearcolor() << std::endl;
	std::cout << "Darkest secret: " << contact.get_darkestsecret() << std::endl;
}
std::string	Contact::get_firstname (void)
{
	return (first_name);
}
std::string	Contact::get_lastname (void)
{
	return (last_name);
}
std::string	Contact::get_nickname (void)
{
	return (nickname);
}
std::string	Contact::get_login (void)
{
	return (login);
}
std::string	Contact::get_postaladdress (void)
{
	return (postal_address);
}
std::string	Contact::get_emailaddress (void)
{
	return (email_address);
}
std::string	Contact::get_phonenumber (void)
{
	return (phone_number);
}
std::string	Contact::get_birthdaydate (void)
{
	return (birthday_date);
}
std::string	Contact::get_favoritemeal (void)
{
	return (favorite_meal);
}
std::string	Contact::get_underwearcolor (void)
{
	return (underwear_color);
}
std::string	Contact::get_darkestsecret (void)
{
	return (darkest_secret);
}
void	ft_window_info(Contact phonebook[8], int i, int n)
{
	std::string		tmp;
	int				flag;	

	std::cout << "\t|         " << i << "|";
	tmp = phonebook[i].get_firstname();
	flag = 0;	
	if (tmp.length() > 10)
	{
		tmp = tmp.substr(0, 9);
		flag = 1;	
	}
	if (flag == 1)
		std::cout << std::setw(9) << tmp << ".|";
	else
		std::cout << std::setw(10) << tmp << "|";
	tmp = phonebook[i].get_lastname();
	flag = 0;	
	if (tmp.length() > 10)
	{
		tmp = tmp.substr(0, 9);
		flag = 1;	
	}
	if (flag == 1)
		std::cout << std::setw(9) << tmp << ".|";
	else
		std::cout << std::setw(10) << tmp << "|";
	tmp = phonebook[i].get_nickname();
	flag = 0;	
	if (tmp.length() > 10)
	{
		tmp = tmp.substr(0, 9);
		flag = 1;	
	}
	if (flag == 1)
		std::cout << std::setw(9) << tmp << ".|" << std::endl;
	else
		std::cout << std::setw(10) << tmp << "|" << std::endl;
	if (n == 1)
		std::cout << "\t<=========<|>========<|>========<|>=========>\n" << std::endl;	
	else
		std::cout << "\t<---------<|>--------<|>--------<|>--------->" << std::endl;
}
void 	Contact::set_all (std::string x, std::string s, std::string xx, std::string c, std::string  cf, std::string ea, std::string pn, std::string bd, std::string fm, std::string uc, std::string ds)
{
	first_name = x;
	last_name = s;
	nickname = xx;
	login = c;
	postal_address = cf;
	email_address = ea;
	phone_number = pn;
	birthday_date = bd;
	favorite_meal = fm;
	underwear_color = uc;
	darkest_secret  = ds;
}
static	Contact ft_add(void)
{
	Contact contact;

	std::cout << "Plese, enter next information.\n" << "First name: ";
	std::string first_name; 	
	std::getline(std::cin, first_name);	
	std::cout << "Last name: ";
	std::string last_name; 
	std::getline(std::cin, last_name);
	std::cout << "Nickname: ";
	std::string nickname;
	std::getline(std::cin, nickname);
	std::cout << "Login: ";
	std::string login;
	std::getline(std::cin, login);
	std::cout << "Postal address: ";
	std::string postal_address;
	std::getline(std::cin, postal_address);
	std::cout << "Email address: ";
	std::string email_address;
	std::getline(std::cin, email_address);
	std::cout << "Phone number: ";
	std::string phone_number;
	std::getline(std::cin, phone_number);
	std::cout << "Birthday date: ";
	std::string birthday_date;
	std::getline(std::cin, birthday_date);
	std::cout << "Favorite meal: ";
	std::string favorite_meal;
	std::getline(std::cin, favorite_meal);
	std::cout << "Underwear color: ";
	std::string underwear_color;
	std::getline(std::cin, underwear_color);
	std::cout << "Darkest secret: ";
	std::string darkest_secret;
	std::getline(std::cin, darkest_secret);
	std::cout << "Contact added in phonebook. ID - ";

	contact.set_all(first_name, last_name, nickname, login, postal_address, email_address, phone_number, birthday_date, favorite_meal, underwear_color, darkest_secret);
	return (contact);
}

void	ft_window(void)
{
	std::cout << "\t<=========<|>========<|>========<|>=========>" << std::endl;
	std::cout << "\t|    ID    |First Name| Last Name| Nickname |" << std::endl;
	std::cout << "\t<=========<|>========<|>========<|>=========>" << std::endl;	
}

int ft_crcl(int lol, int i)
{
	std::string id;

	while (21)
	{
		std::cout << "ID - ";
		std::getline(std::cin, id);
		
		if (id != "")
		{
			lol = -77;
			for (int lll = 0; lll != -7; lll++)
			{				
				if (id[lll] == '\0')
					break ;
				else if (isdigit(id[lll]) == 0)
				{
					lol = -7;
					break ;							
				}
			}
			if (lol == -77)
				lol = std::stoi(id);			
		if (i == 0 && lol != 0)
			std::cout << "Error : invalid ID - " << id << ".  Phonebook has 1 contact. Please, enter - \"0\"." << std::endl;						
		else if (lol == -7)
			std::cout << "Error : invalid ID - " << id << ". You can't user alpha in you ID. Please, enter ONLY numbers from 0 to " << i << "." << std::endl;
		else if (lol > i)
			std::cout << "Error : Phonebook hasn't ID - " << id << ". Please, you can enter numbers from 0 to " << i << "." << std::endl;	
		else
			break ;		
		}
		else
			std::cout << "Error : invalid ID. Please, write only a number.\n";

	}
	return (lol);
}

int		ft_print_err_main(int j, int n, int i)
{
	if (n == 1)
	{
		if	(i < 8)
			std::cout << "Please, enter \"ADD\" or \"SEARCH\" or \"EXIT\"." << std::endl;
		else
			std::cout << "Please, enter \"SEARCH\" or \"EXIT\"." << std::endl;
	}
	else if (n == 2)
	{
		std::cout << "You enter add 8 time! Please, enter other command (SEARCH or EXIT)" << std::endl;	
		j = 0;
	}
	else if (n == 3)
	{
		if (i != 8)
			std::cout << "ERROR : Invalid command.\nPlease, enter: \"ADD\" or \"SEARCH\" or \"EXIT\"" << std::endl;
		else
			std::cout << "ERROR : Invalid command.\nPlease, enter: \"SEARCH\" or \"EXIT\"" << std::endl;
		j = 1;
	}
	return (j);
}

int		main(void)
{
	int		i;
	int		j;
	int		l;
	int		lol;
	std::string	line;
	Contact	phonebook[8];

	i = -1;
	j = 0;
	while (21)
	{
		if (j == 0)
			j = ft_print_err_main(j, 1, i);
		std::cout << "Your commnad: ";		
		std::getline(std::cin, line);
		if (line == "ADD" && i == 7)
			j = ft_print_err_main(j, 2, i);
		else if (line == "ADD" && i < 8 )
		{
			i++;	
			phonebook[i] = ft_add();
			std::cout << i << ".\n\n";
			j = 0;
		}
		else if (line == "SEARCH")
		{
			l = 0;
			ft_window();
			if (i >= 0 && i < 8)
			{
				while (l <= i)
				{
					if (l == i)
						ft_window_info(phonebook, l, 1);
					else
						ft_window_info(phonebook, l, 0);
					l++;
				}
			}
			if (i != -1)
			{
				std::cout << "Who do you want to see in contact? Please write in the tracking number only." << std::endl;
				lol = ft_crcl(lol, i);
				print_contact(phonebook[lol]);
			}
			else
				std::cout << "Your phonebook has not contacts. Please, add contacts in phonebook and after you can use commnad \"SEARCH\"." << std::endl << std::endl;
			j = 1;		
		}
		else if (line == "EXIT")
		{
			std::cout << "Exit... " << std::endl;
			break ;
		}
		else
			j = ft_print_err_main(j, 3, i);
	}
	return (0);
}