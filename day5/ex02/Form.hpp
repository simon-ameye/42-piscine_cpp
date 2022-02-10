/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sameye <sameye@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/10 15:22:28 by sameye            #+#    #+#             */
/*   Updated: 2022/02/10 16:40:28 by sameye           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef FORM_HPP
#define FORM_HPP

#include <iostream>
#include "Bureaucrat.hpp"

class Bureaucrat;

class Form
{
	private:
		std::string const	_name;
		bool				_isSigned;
		int const			_gradeToSign;
		int const			_gradeToExecute;
		void				_sign(int grade);
		void				_checkGrade(void) const;

	class GradeTooHighException : public std::exception
	{
		public:
			virtual const char* what() const throw()
			{
				return ("form Exception : Grade too high");
			}
	};

	class GradeTooLowException : public std::exception
	{
		public:
			virtual const char* what() const throw()
			{
				return ("form Exception : Grade too low");
			}
	};

	public:
		Form(void);
		Form(std::string name, int gradeToSign, int gradeToexecute);
		Form(Form const& instance);
		~Form(void);

		Form	&operator=(Form const &right_hand_side);

		std::string	getName(void) const;
		int			getGradeToSign(void) const;
		int			getGradeToExecute(void) const;
		bool		getIsSigned(void) const;
		void		beSigned(Bureaucrat const &bureaucrat);
};

std::ostream &operator<<(std::ostream &outputFile, Form const &i);

#endif