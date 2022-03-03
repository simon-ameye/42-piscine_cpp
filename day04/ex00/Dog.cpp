/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sameye <sameye@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/31 16:48:59 by sameye            #+#    #+#             */
/*   Updated: 2022/03/03 12:31:14 by sameye           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Dog.hpp"

Dog::Dog(void) : Animal("Dog")
{
	std::cout << "dog constructor called" << std::endl;
	return ;
}

Dog::Dog(Dog const& instance) : Animal(instance)
{
	*this = instance;
	std::cout << "dog copied" << std::endl;
	return ;
}

Dog::~Dog(void)
{
	std::cout << "dog destructor called" << std::endl;
	return ;
}

Dog	&Dog::operator=(Dog const &right_hand_side)
{
	this->_type = right_hand_side.getType();
	return *this;
}

void Dog::makeSound(void)const
{
	std::cout << "ouaf ouaf" << std::endl;
	return ;
}
