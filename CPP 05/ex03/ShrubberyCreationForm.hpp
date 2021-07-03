/*
* Created: 2021/03/31
*/

#ifndef SHRUBBERY_CREATION_FORM_HPP
# define SHRUBBERY_CREATION_FORM_HPP

#include <fstream>
#include "Form.hpp"

class ShrubberyCreationForm : public Form
{
	private:
		std::string	_name;

	public:
		ShrubberyCreationForm();
		ShrubberyCreationForm(std::string const &);
		ShrubberyCreationForm(ShrubberyCreationForm const &);
		ShrubberyCreationForm & operator = (ShrubberyCreationForm const &);
		virtual ~ShrubberyCreationForm();

		void execute(Bureaucrat const &) const;
};

#endif