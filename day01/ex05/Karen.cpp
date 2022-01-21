/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Karen.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sameye <sameye@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/20 17:15:59 by sameye            #+#    #+#             */
/*   Updated: 2022/01/21 12:54:54 by sameye           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Karen.hpp"

Karen::Karen(void)
{
	this->_level[0] = "DEBUG";
	this->_level[1] = "INFO";
	this->_level[2] = "WARNING";
	this->_level[3] = "ERROR";
	fnct_ptrs[0] = &Karen::debug;
	fnct_ptrs[1] = &Karen::info;
	fnct_ptrs[2] = &Karen::warning;
	fnct_ptrs[3] = &Karen::error;
	return ;
}

Karen::~Karen(void)
{
	return ;
}

void	Karen::complain(std ::string level)
{
	int i = 0;
	while (i < 4)
	{
		if (level == this->_level[i])
			((*this).*fnct_ptrs[i])();
		i++;
	}
}

void	Karen::debug(void)
{
	std::cout << "I love to get extra bacon for my 7XL-double-cheese-triple-pickle-special-ketchup burger. I just love it!" << std::endl;
	((*this).*fnct_ptrs[1])();
}

void	Karen::info(void)
{
	std::cout << "I cannot believe adding extra bacon cost more money. You don’t put enough!. If you did I would not have to ask for it!" << std::endl;
	((*this).*fnct_ptrs[2])();
}

void	Karen::warning(void)
{
	std::cout << "I think I deserve to have some extra bacon for free. I’ve been coming here for years and you just started working here last month." << std::endl;
	((*this).*fnct_ptrs[3])();
}

void	Karen::error(void)
{
	std::cout << "This is unacceptable, I want to speak to the manager now." << std::endl;
}
