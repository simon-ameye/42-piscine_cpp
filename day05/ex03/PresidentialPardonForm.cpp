/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sameye <sameye@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/10 16:44:15 by sameye            #+#    #+#             */
/*   Updated: 2022/03/04 12:45:51 by sameye           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"
#include <iostream>

PresidentialPardonForm::PresidentialPardonForm(void) : AForm("PresidentialPardonForm", 25, 5)
{
	std::cout << *this << std::endl;
	return ;
}

PresidentialPardonForm::PresidentialPardonForm(std::string target) : AForm("PresidentialPardonForm", 25, 5)
{
	this->setTarget(target);
	std::cout << *this << std::endl;
	return ;
}

bool		PresidentialPardonForm::execute(Bureaucrat const &executor) const
{
	if (AForm::execute(executor))
	{
		std::cout << this->getTarget() << " has been pardoned by Zafod Beeblebrox" << std::endl;
		return (true);
	}
	return (false);
}

std::ostream &operator<<(std::ostream &outputFile, PresidentialPardonForm const &i)
{
	outputFile	<< "name : " << i.getName() << " grade to sign: " << i.getGradeToSign() << " grade to execute: " << i.getGradeToExecute() << " target : " << i.getTarget() << " is signed : ";
	if (i.getIsSigned())
		outputFile << "yes";
	else
		outputFile << "no";
	return (outputFile);
}

PresidentialPardonForm	&PresidentialPardonForm::operator=(PresidentialPardonForm const &right_hand_side)
{
	(void)right_hand_side;
	return (*this);
}
