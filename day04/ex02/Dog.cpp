/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sameye <sameye@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/31 16:48:59 by sameye            #+#    #+#             */
/*   Updated: 2022/02/07 18:16:52 by sameye           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog(void) : AAnimal("Dog")
{
	this->_brain = new Brain;
	std::cout << "dog constructor called" << std::endl;
	return ;
}

Dog::Dog(Dog const& instance) : AAnimal(instance)
{
	*this = instance;
	std::cout << "dog copied" << std::endl;
	return ;
}

Dog::~Dog(void)
{
	std::cout << "dog destructor called" << std::endl;
	delete this->_brain;
	return ;
}

Dog	&Dog::operator=(Dog const &right_hand_side)
{
	this->_type = right_hand_side._type;
	this->_brain = new Brain(*right_hand_side._brain);
	return *this;
}

void Dog::makeSound(void)const
{
	std::cout << "ouaf ouaf" << std::endl;
	return ;
}
