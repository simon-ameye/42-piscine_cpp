/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sameye <sameye@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/10 17:05:54 by sameye            #+#    #+#             */
/*   Updated: 2022/03/04 12:54:13 by sameye           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AFORM_HPP
#define AFORM_HPP

#include <iostream>
#include "Bureaucrat.hpp"

class Bureaucrat;

class AForm
{
	private:
		std::string const	_name;
		bool				_isSigned;
		int const			_gradeToSign;
		int const			_gradeToExecute;
		std::string			_target;
		void				_sign(int grade);
		AForm(void);

	protected:
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

		class NoSignatureException : public std::exception
		{
			public:
				virtual const char* what() const throw();
		};

	public:
							AForm(std::string name, int gradeToSign, int gradeToexecute);
							AForm(AForm const& instance);
		virtual				~AForm(void);
		AForm				&operator=(AForm const &right_hand_side);
		std::string			getName(void) const;
		int					getGradeToSign(void) const;
		int					getGradeToExecute(void) const;
		bool				getIsSigned(void) const;
		std::string			getTarget(void) const;
		void				setTarget(std::string target);
		void				beSigned(Bureaucrat const &bureaucrat);
		virtual bool		execute(Bureaucrat const &executor) const = 0;
};

std::ostream &operator<<(std::ostream &outputFile, AForm const &i);

#endif
