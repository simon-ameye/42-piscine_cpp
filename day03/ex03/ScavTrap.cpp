/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sameye <sameye@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/27 18:23:04 by sameye            #+#    #+#             */
/*   Updated: 2022/01/27 20:03:46 by sameye           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

/* ************************************************************************** */
/*      Constructors                                                          */
/* ************************************************************************** */

ScavTrap::ScavTrap(void)
{
	this->_name = "no name";
	this->_hit_points = 100;
	this->_energy_points = 50;
	this->_attack_damage = 20;
	std::cout << "ScavTrap Constructor called" << std::endl;
}

ScavTrap::ScavTrap(std::string name)
{
	this->_name = name;
	this->_hit_points = 100;
	this->_energy_points = 50;
	this->_attack_damage = 20;
	std::cout << "ScavTrap Constructor called" << std::endl;	
}

ScavTrap::ScavTrap(ScavTrap const &copy)
{
	std::cout << "ScavTrap Copy constructor called" << std::endl;
	*this = copy;
	return ;
}

/* ************************************************************************** */
/*      Destructors                                                           */
/* ************************************************************************** */

ScavTrap::~ScavTrap(void)
{
	std::cout << "ScavTrap Destructor called" << std::endl;
	return ;
}

/* ************************************************************************** */
/*      Member functions                                                      */
/* ************************************************************************** */

void	ScavTrap::guardGate(void) const
{
	std::cout << "ScavTrap " << get_name() << " have enterred in Gate keeper mode"<< std::endl;
}


void	ScavTrap::attack(const std::string& target)
{
	if (this->_energy_points <= 0)
	{
		std::cout << this->_name << " doesn't have enough Hit points to attack." << std::endl;
	}
	else if (this->_hit_points <= 0)
	{
		std::cout << this->_name << " is already dead." << std::endl;
	}
	else
	{
		this->_energy_points--;
		std::cout << "Scavtrap " << this->_name << " attacks " << target << ", causing " << this->_attack_damage << " points of damage!" << std::endl;
	}
}


/* ************************************************************************** */
/*      Operator overload                                                     */
/* ************************************************************************** */

ScavTrap &ScavTrap::operator=(ScavTrap const &right_hand_side)
{
	this->_name = right_hand_side.get_name();
	this->_hit_points = right_hand_side.get_hit_points();
	this->_energy_points = right_hand_side.get_hit_points();
	this->_attack_damage = right_hand_side.get_damage();
	return (*this);
}
