/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sameye <sameye@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/31 16:51:34 by sameye            #+#    #+#             */
/*   Updated: 2022/01/31 17:18:55 by sameye           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

WrongCat::WrongCat(void) : WrongAnimal("WrongCat")
{
	std::cout << "wrongcat constructor called" << std::endl;
	return ;
}

WrongCat::WrongCat(WrongCat const& instance)
{
	*this = instance;
	std::cout << "wrongcat copied" << std::endl;
	return ;
}

WrongCat::~WrongCat(void)
{
	std::cout << "wrongcat destructor called" << std::endl;
	return ;
}

WrongCat	&WrongCat::operator=(WrongCat const &right_hand_side)
{
	this->_type = right_hand_side.getType();
	return *this;
}


void WrongCat::makeSound(void)const
{
	std::cout << "wrongmiaou" << std::endl;
	return ;
}
