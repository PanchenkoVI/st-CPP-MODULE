/*
* Created: 2021/03/31
*/

#ifndef ROBOTOMY_REQUEST_FORM_HPP
# define ROBOTOMY_REQUEST_FORM_HPP

#include "Form.hpp"

class RobotomyRequestForm : public Form
{
	private:
		std::string _name;

	public:
		RobotomyRequestForm();
		RobotomyRequestForm(const std::string &);
		RobotomyRequestForm(const RobotomyRequestForm &);
		RobotomyRequestForm &operator = (const RobotomyRequestForm &);
		virtual ~RobotomyRequestForm();

		void execute(Bureaucrat const &) const;
};

#endif