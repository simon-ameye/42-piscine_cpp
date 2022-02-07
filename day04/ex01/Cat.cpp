/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sameye <sameye@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/31 16:48:55 by sameye            #+#    #+#             */
/*   Updated: 2022/02/07 17:42:58 by sameye           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat(void) : Animal("Cat")
{
	this->_brain = new Brain;
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
	delete this->_brain;
	return ;
}

Cat	&Cat::operator=(Cat const &right_hand_side)
{
	this->_type = right_hand_side._type;
	this->_brain = new Brain(*right_hand_side._brain);
	return *this;
}

void Cat::makeSound(void)const
{
	std::cout << "miaou" << std::endl;
	return ;
}
