/*
* Created: 2021/03/31
*/

#ifndef PRESIDENTIAL_PARDON_FORM_HPP
# define PRESIDENTIAL_PARDON_FORM_HPP

#include "Form.hpp"

class PresidentialPardonForm : public Form
{
	private:
		std::string _name;

	public:
		PresidentialPardonForm();
		PresidentialPardonForm(const std::string &);
		PresidentialPardonForm(const PresidentialPardonForm &);
		virtual ~PresidentialPardonForm();		
		PresidentialPardonForm &operator = (const PresidentialPardonForm &);

		void execute(Bureaucrat const &) const;
};

#endif