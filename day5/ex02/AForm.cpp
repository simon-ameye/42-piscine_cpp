/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sameye <sameye@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/10 17:05:52 by sameye            #+#    #+#             */
/*   Updated: 2022/02/10 19:33:08 by sameye           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AForm.hpp"
#include "Bureaucrat.hpp"
#include <iostream>

AForm::AForm(std::string name, int gradeToSign, int gradeToexecute) : _name(name), _isSigned(false), _gradeToSign(gradeToSign), _gradeToExecute(gradeToexecute)
{
	std::cout << "AForm created. " << std::endl;
	return ;
}

AForm::AForm(AForm const& instance) : _name(instance.getName()), _gradeToSign(instance.getGradeToSign()), _gradeToExecute(instance.getGradeToExecute())
{
	std::cout << "AForm copied. " << std::endl;
	*this = instance;
	return ;
}

AForm::~AForm(void)
{
	std::cout << "AForm destroyed. " << std::endl;
	return ;
}

AForm	&AForm::operator=(AForm const &right_hand_side)
{
	this->_isSigned = right_hand_side.getIsSigned();
	return (*this);
}

std::string	AForm::getName(void) const
{
	return (this->_name);
}

int			AForm::getGradeToSign(void) const
{
	return (this->_gradeToSign);
}

int			AForm::getGradeToExecute(void) const
{
	return (this->_gradeToExecute);
}

bool		AForm::getIsSigned(void) const
{
	return (this->_isSigned);
}

std::string	AForm::getTarget(void) const
{
	return (this->_target);
}

void		AForm::setTarget(std::string target)
{
	this->_target = target;
}

void		AForm::beSigned(Bureaucrat const &bureaucrat)
{
	if (bureaucrat.getGrade() > this->getGradeToSign())
		throw AForm::GradeTooLowException();
	else
		this->_isSigned = true;
	return ;
}

bool		AForm::execute(Bureaucrat const &executor) const
{
	if (!this->_isSigned)
	{
		throw AForm::NoSignatureException();
		return false;
	}
	if (executor.getGrade() > this->getGradeToExecute())
	{
		throw AForm::GradeTooLowException();
		return false;
	}
	return true;
}

std::ostream &operator<<(std::ostream &outputFile, AForm const &i)
{
	outputFile	<< "name : " << i.getName() << " grade to sign : " << i.getGradeToSign() << " grade to execute : " << i.getGradeToExecute() << " i signed : ";
	if (i.getIsSigned())
		outputFile << "yes";
	else
		outputFile << "no";
	return (outputFile);
}