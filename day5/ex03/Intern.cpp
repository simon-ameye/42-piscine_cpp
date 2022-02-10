/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sameye <sameye@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/10 19:52:07 by sameye            #+#    #+#             */
/*   Updated: 2022/02/10 20:10:36 by sameye           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <cstring>
#include <cctype>
#include "Intern.hpp"
#include "PresidentialPardonForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"

#define TOTAL_FORMS 3

Intern::Intern(void)
{
	std::cout << "intern created" << std::endl;
}

Intern::~Intern(void)
{
	std::cout << "intern destroyed" << std::endl;
}

Intern::Intern(Intern const& instance)
{
	*this = instance;
	std::cout << "intern copied" << std::endl;
}

Intern	&Intern::operator=(Intern const &right_hand_side)
{
	(void)right_hand_side;
	return (*this);
}

int	Intern::_form_finder(std::string name)
{
	std::string namesArray[TOTAL_FORMS] = {"shrubbery creation", "robotomy request", "presidential pardon"};
	for(int i = 0; i < 3; i++)
	{
		if(name == namesArray[i])
		{
			return (i);
		}
	}
	return (-1);
}


AForm	*Intern::makeForm(std::string name, std::string target)
{
	switch (Intern::_form_finder(name))
	{
		case 0:
			return (new ShrubberyCreationForm(target));
			break;
		case 1:
			return (new RobotomyRequestForm(target));
			break;
		case 2:
			return (new PresidentialPardonForm(target));
			break;
	}
	return (NULL);
}
