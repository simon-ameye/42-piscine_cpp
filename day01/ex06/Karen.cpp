/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Karen.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sameye <sameye@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/20 17:15:59 by sameye            #+#    #+#             */
/*   Updated: 2022/01/21 14:57:19 by sameye           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Karen.hpp"

Karen::Karen(void)
{
	this->_level[DEBUG_VAL] = "DEBUG";
	this->_level[INFO_VAL] = "INFO";
	this->_level[WARNING_VAL] = "WARNING";
	this->_level[ERROR_VAL] = "ERROR";
	return ;
}

Karen::~Karen(void)
{
	return ;
}

void	Karen::complain(std ::string level)
{
	int i = 0;

	while (i <= 4 && this->_level[i] != level)
		i++;
	switch (i)
	{
		case (DEBUG_VAL):
			this->debug();
		case (INFO_VAL):
			this->info();
		case (WARNING_VAL):
			this->warning();
		case (ERROR_VAL):
			this->error();
			break;
		default :
			this->somethingelse();
	}
}

void	Karen::debug(void)
{
	std::cout << "[ DEBUG ]\nI love to get extra bacon for my 7XL-double-cheese-triple-pickle-special-ketchup burger. I just love it!\n" << std::endl;
}

void	Karen::info(void)
{
	std::cout << "[ INFO ]\nI cannot believe adding extra bacon cost more money. You don’t put enough!. If you did I would not have to ask for it!\n" << std::endl;
}

void	Karen::warning(void)
{
	std::cout << "[ WARNING ]\nI think I deserve to have some extra bacon for free. I’ve been coming here for years and you just started working here last month.\n" << std::endl;
}

void	Karen::error(void)
{
	std::cout << "[ ERROR ]\nThis is unacceptable, I want to speak to the manager now.\n" << std::endl;
}

void	Karen::somethingelse(void)
{
	std::cout << "[ Probably complaining about insignificant problems ]" << std::endl;
}
