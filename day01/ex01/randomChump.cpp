/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   randomChump.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sameye <sameye@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/19 11:47:05 by sameye            #+#    #+#             */
/*   Updated: 2022/01/19 11:53:26 by sameye           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"
#include <iostream>

void	randomChump(std::string name)
{
	Zombie *zombie = newZombie(name);
	zombie->announce();
	delete zombie;
}