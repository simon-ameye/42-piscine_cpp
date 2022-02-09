/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAnimal.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sameye <sameye@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/31 16:48:16 by sameye            #+#    #+#             */
/*   Updated: 2022/02/07 18:15:32 by sameye           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "AAnimal.hpp"

AAnimal::AAnimal(void) : _type("generic")
{
	std::cout << "animal constructor called: " << this->_type << std::endl;
	return ;
}

AAnimal::AAnimal(std::string _typeName) : _type(_typeName)
{
	std::cout << "animal constructor called: " << this->_type << std::endl;
	return ;
}

AAnimal::AAnimal(AAnimal const& instance)
{
	*this = instance;
	std::cout << this->_type << " Animal copied" << std::endl;
	return ;
}

AAnimal::~AAnimal(void)
{
	std::cout << this->_type << " Animal destroyed" << std::endl;
	return ;
}

AAnimal	&AAnimal::operator=(AAnimal const &right_hand_side)
{
	this->_type = right_hand_side._type;
	return *this;
}

void AAnimal::makeSound(void)const
{
	std::cout << "..." << std::endl;
	return ;
}
