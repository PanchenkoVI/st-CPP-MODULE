/*
* Created: 2021/03/31
*/

#ifndef INTERN_HPP
# define INTERN_HPP

#include "Form.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"

class Intern
{

	public:
		Intern();
		virtual ~Intern();
		Intern(Intern const &);

		Intern &operator= (Intern const &);

		class WrongNameOfTypeForm : public std::exception
		{
			public:
				WrongNameOfTypeForm();
				virtual const char* what() const throw();
		};
		Form * ft_test(std::string const &, std::string const &, int, int *, Form *);
		Form * makeForm(std::string const &, std::string const &);
};

Form * makeFormRobotomy(std::string const &);
Form * makeFormShrubbery(std::string const &);
Form * makeFormPresidential(std::string const &);

#endif