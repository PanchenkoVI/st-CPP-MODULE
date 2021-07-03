/*
* Created: 2021/03/31
*/

#ifndef FORM_HPP
# define FORM_HPP

#include <iostream>
#include "Bureaucrat.hpp"

class Bureaucrat;

class Form
{
	private:
		bool _sign;
		int _min_exe;		
		int _min_sign;
		std::string _name;

	public:
		Form();
		Form(const std::string &, const int , const int );
		virtual ~Form();
		Form(const Form &other);
		Form &operator = (const Form &other);

		class GradeTooHighException : public std::exception
		{
		public:
			GradeTooHighException();
			virtual const char* what() const throw();
		};

		class GradeTooLowException : public std::exception
		{
		public:
			GradeTooLowException();
			virtual const char* what() const throw();
		};

		void beSigned(Bureaucrat *);
		void setSign(bool);
		bool isSign() const;
		const std::string & getName() const;

		int getSign() const;
		int getExe() const;
		virtual void		execute(Bureaucrat const &) const = 0;
};

std::ostream			&operator<<(std::ostream &, const Form &);

#endif
