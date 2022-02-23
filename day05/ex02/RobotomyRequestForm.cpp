/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sameye <sameye@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/10 16:44:10 by sameye            #+#    #+#             */
/*   Updated: 2022/02/10 19:25:58 by sameye           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"
#include <iostream>
#include <time.h>
#include <cstdlib>
#include <math.h>

RobotomyRequestForm::RobotomyRequestForm(std::string target) : AForm("RobotomyRequestForm", 72, 45)
{
	this->setTarget(target);
	std::cout << *this << std::endl;
	return ;
}

bool		RobotomyRequestForm::execute(Bureaucrat const &executor) const
{
	if (AForm::execute(executor))
	{
		std::srand((unsigned int)time(NULL));
		if ((rand() % 2) != 0)
			std::cout << "Robotomization failure" << std::endl;
		else
			std::cout << "Robotomization success " << this->getTarget() << std::endl;
		return (true);
	}
	return (false);
}

std::ostream &operator<<(std::ostream &outputFile, RobotomyRequestForm const &i)
{
	outputFile	<< "name : " << i.getName() << " grade to sign: " << i.getGradeToSign() << " grade to execute: " << i.getGradeToExecute() << " target : " << i.getTarget() << " is signed : ";
	if (i.getIsSigned())
		outputFile << "yes";
	else
		outputFile << "no";
	return (outputFile);
}

RobotomyRequestForm	&RobotomyRequestForm::operator=(RobotomyRequestForm const &right_hand_side)
{
	(void)right_hand_side;
	return (*this);
}