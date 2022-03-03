/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sameye <sameye@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/31 16:51:28 by sameye            #+#    #+#             */
/*   Updated: 2022/03/03 12:45:02 by sameye           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal(void) : _type("generic")
{
	std::cout << "wronganimal constructor called: " << this->_type << std::endl;
	return ;
}

WrongAnimal::WrongAnimal(std::string _typeName) : _type(_typeName)
{
	std::cout << "wronganimal constructor called: " << this->_type << std::endl;
	return ;
}

WrongAnimal::WrongAnimal(WrongAnimal const& instance)
{
	*this = instance;
	std::cout << this->_type << " WrongAnimal duplicated" << std::endl;
	return ;
}

WrongAnimal::~WrongAnimal(void)
{
	std::cout << this->_type << " WrongAnimal destroyed" << std::endl;
	return ;
}

WrongAnimal	&WrongAnimal::operator=(WrongAnimal const &right_hand_side)
{
	this->_type = right_hand_side.getType();
	return *this;
}

std::string WrongAnimal::getType(void)const
{
	return (this->_type);
}

void WrongAnimal::makeSound(void)const
{
	std::cout << "wrong ..." << std::endl;
	return ;
}
