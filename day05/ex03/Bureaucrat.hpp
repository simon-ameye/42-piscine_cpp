/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sameye <sameye@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/10 12:56:09 by sameye            #+#    #+#             */
/*   Updated: 2022/03/04 12:55:50 by sameye           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
#define BUREAUCRAT_HPP

#include <iostream>
#include "AForm.hpp"

class AForm;

class Bureaucrat
{
	private:
		std::string const	_name;
		int					_grade;
		void				_checkGrade(void);
		void				_checkGrade(int grade);

	class GradeTooHighException : public std::exception
	{
		public:
			virtual const char* what() const throw();
	};

	class GradeTooLowException : public std::exception
	{
		public:
			virtual const char* what() const throw();
	};

	public:
		Bureaucrat(void);
		Bureaucrat(std::string name, int grade);
		Bureaucrat(Bureaucrat const& instance);
		~Bureaucrat(void);

		Bureaucrat	&operator=(Bureaucrat const &right_hand_side);

		std::string	getName(void) const;
		int			getGrade(void) const;
		void		incrementGrade(void);
		void		decrementGrade(void);
		void		signForm(AForm &form);
		void		executeForm(AForm const & form);
};

std::ostream &operator<<(std::ostream &outputFile, Bureaucrat const &i);

#endif
