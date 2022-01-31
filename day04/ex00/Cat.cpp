/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sameye <sameye@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/31 16:48:55 by sameye            #+#    #+#             */
/*   Updated: 2022/01/31 19:20:12 by sameye           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"
#include "Animal.hpp"

Cat::Cat(void) : Animal("Cat")
{
	std::cout << "cat constructor called" << std::endl;
	return ;
}

Cat::Cat(Cat const& instance) : Animal(instance)
{
	*this = instance;
	std::cout << "cat copy called" << std::endl;
	return ;
}

Cat::~Cat(void)
{
	std::cout << "cat destructor called" << std::endl;
	return ;
}

Cat	&Cat::operator=(Cat const &right_hand_side)
{
	this->_type = right_hand_side.getType();
	return *this;
}


void Cat::makeSound(void)const
{
	std::cout << "miaou" << std::endl;
	return ;
}