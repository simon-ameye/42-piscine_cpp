/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sameye <sameye@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/10 15:22:25 by sameye            #+#    #+#             */
/*   Updated: 2022/02/10 15:47:19 by sameye           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"
#include "Bureaucrat.hpp"
#include <iostream>

Form::Form(void) : _name("standardForm"), _isSigned(false), _gradeToSign(75), _gradeToExecute(75) 
{
	this->_checkGrade();
	std::cout << "Form created. " << *this << std::endl;
	return ;
}

Form::Form(std::string name, int gradeToSign, int gradeToexecute) : _name(name), _isSigned(false), _gradeToSign(gradeToSign), _gradeToExecute(gradeToexecute) 
{
	this->_checkGrade();
	std::cout << "Form created. " << *this << std::endl;
	return ;
}

Form::Form(Form const& instance) : _name(instance.getName()), _gradeToSign(instance.getGradeToSign()), _gradeToExecute(instance.getGradeToExecute())
{
	*this = instance;
	std::cout << "Form copied. " << *this << std::endl;
	return ;
}

Form::~Form(void)
{
	std::cout << "Form destroyed. " << *this << std::endl;
	return ;
}

Form	&Form::operator=(Form const &right_hand_side)
{
	this->_isSigned = right_hand_side.getIsSigned();
	return (*this);
}

void	Form::_checkGrade(void) const
{
	if (this->_gradeToExecute < 1 || this->_gradeToSign < 1)
		throw Form::GradeTooHighException();
	if (this->_gradeToExecute > 150 || this->_gradeToSign > 150)
		throw Form::GradeTooLowException();
}

std::string	Form::getName(void) const
{
	return (this->_name);
}

int			Form::getGradeToSign(void) const
{
	return (this->_gradeToSign);
}

int			Form::getGradeToExecute(void) const
{
	return (this->_gradeToExecute);
}

bool		Form::getIsSigned(void) const
{
	return (this->_isSigned);
}

void		Form::beSigned(Bureaucrat const &bureaucrat)
{
	if (bureaucrat.getGrade() > this->getGradeToSign())
		throw Form::GradeTooLowException();
	else
		this->_isSigned = true;
	return ;
}

std::ostream &operator<<(std::ostream &outputFile, Form const &i)
{
	outputFile	<< "name : " << i.getName() << " grade to sign : " << i.getGradeToSign() << " grade to execute : " << i.getGradeToExecute() << " is signed : ";
	if (i.getIsSigned())
		outputFile << "yes";
	else
		outputFile << "no";
	return (outputFile);
}