/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sameye <sameye@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/17 16:41:12 by sameye            #+#    #+#             */
/*   Updated: 2022/01/17 17:46:28 by sameye           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"
#include <iostream>

Zombie::Zombie(void)
{
	return ;
}

Zombie::~Zombie(void)
{
	std::cout << this->_name << " has been destroyed" << std::endl;
}

void Zombie::announce(void)
{
	std::cout << _name << " BraiiiiiiinnnzzzZ..." << std::endl;
}

void Zombie::give_name(std::string name)
{
		this->_name = name;
}

Zombie*	newZombie(std::string name)
{
	Zombie*	newZombie	= new Zombie();
	newZombie->give_name(name);
	return (newZombie);
}

void	randomChump(std::string name)
{
	Zombie *zombie = newZombie(name);
	zombie->announce();
	delete zombie;
}
