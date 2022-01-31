/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sameye <sameye@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/31 16:48:16 by sameye            #+#    #+#             */
/*   Updated: 2022/01/31 17:33:22 by sameye           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Animal.hpp"

Animal::Animal(void) : _type("generic")
{
	std::cout << "animal constructor called: " << this->_type << std::endl;
	return ;
}

Animal::Animal(std::string _typeName) : _type(_typeName)
{
	std::cout << "animal constructor called: " << this->_type << std::endl;
	return ;
}

Animal::Animal(Animal const& instance)
{
	*this = instance;
	std::cout << this->_type << " Animal copied" << std::endl;
	return ;
}

Animal::~Animal(void)
{
	std::cout << this->_type << " Animal destroyed" << std::endl;
	return ;
}

Animal	&Animal::operator=(Animal const &right_hand_side)
{
	this->_type = right_hand_side._type;
	return *this;
}

std::string Animal::getType(void)const
{
	return (this->_type);
}

void Animal::makeSound(void)const
{
	std::cout << "..." << std::endl;
	return ;
}
