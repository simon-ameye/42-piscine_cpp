/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sameye <sameye@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/19 16:50:02 by sameye            #+#    #+#             */
/*   Updated: 2022/01/19 20:58:43 by sameye           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon(std::string Weapon)
{
	this->type = Weapon;
}

Weapon::Weapon(void)
{
	return ;
}

Weapon::~Weapon()
{
	return ;
}

std::string const	&Weapon::getType(void)
{
	std::string const	&res = this->type;
	return (res);
}

void				Weapon::setType(std::string type)
{
	this->type = type;
}
