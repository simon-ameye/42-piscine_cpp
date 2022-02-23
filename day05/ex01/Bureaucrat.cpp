/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sameye <sameye@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/10 12:56:07 by sameye            #+#    #+#             */
/*   Updated: 2022/02/10 16:39:50 by sameye           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include <iostream>

Bureaucrat::Bureaucrat(void) : _name("Spock"), _grade(150)
{
	std::cout << "Bureaucrat with standard name (Spock) and grade (150) created" << std::endl;
	return ;
}

Bureaucrat::Bureaucrat(std::string name, int grade) : _name(name), _grade(grade)
{
	_checkGrade();
	std::cout << "Bureaucrat " << this->_name << " created with grade " << this->_grade << std::endl;
	return ;
}

Bureaucrat::Bureaucrat(Bureaucrat const& instance) : _name(instance.getName())
{
	*this = instance;
	std::cout << "Bureaucrat " << this->_name << " duplicated" << std::endl;
	return ;
}

Bureaucrat::~Bureaucrat(void)
{
	std::cout << "Bureaucrat " << this->_name << " destroyed" << std::endl;
	return ;
}

Bureaucrat	&Bureaucrat::operator=(Bureaucrat const &right_hand_side)
{
	this->_grade = right_hand_side.getGrade();
	return (*this);
}

void	Bureaucrat::_checkGrade(void)
{
	Bureaucrat::_checkGrade(this->_grade);
}

void	Bureaucrat::_checkGrade(int grade)
{
	if (grade < 1)
		throw Bureaucrat::GradeTooHighException();
	if (grade > 150)
		throw Bureaucrat::GradeTooLowException();
}

std::string	Bureaucrat::getName(void) const
{
	return (this->_name);
}

int	Bureaucrat::getGrade(void) const
{
	return (this->_grade);
}

void		Bureaucrat::incrementGrade(void)
{
	_checkGrade(this->_grade - 1);
	this->_grade--;
}

void		Bureaucrat::decrementGrade(void)
{
	_checkGrade(this->_grade + 1);
	this->_grade++;
}

std::ostream &operator<<(std::ostream &outputFile, Bureaucrat const &i)
{
	outputFile << i.getName() << ", bureaucrat grade " << i.getGrade();
	return (outputFile);
}

void		Bureaucrat::signForm(Form &form)
{
	try
	{
		form.beSigned(*this);
	}
	catch(const std::exception& e)
	{
		std::cerr	<< this->_name
					<< " cannot sign "
					<< form.getName()
					<< " : "
					<< e.what()
					<< std::endl;
		return ;
	}
	std::cout	<< this->_name
				<< " signs "
				<< form.getName()
				<< std::endl;
		return ;
}