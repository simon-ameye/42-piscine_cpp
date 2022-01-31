/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sameye <sameye@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/27 18:23:04 by sameye            #+#    #+#             */
/*   Updated: 2022/01/31 15:06:39 by sameye           ###   ########.fr       */
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
	std::cout << "ScavTrap " << this->_name << " have enterred in Gate keeper mode"<< std::endl;
}


void	ScavTrap::attack(const std::string& target)
{
	if (this->_energy_points <= 0)
		std::cout << this->_name << " doesn't have enough Hit points to attack." << std::endl;
	else if (this->_hit_points <= 0)
		std::cout << this->_name << " is already dead." << std::endl;
	else
	{
		this->_energy_points--;
		std::cout << "Scavtrap " << this->_name << " attacks " << target << ", causing " << this->_attack_damage << " points of damage!" << std::endl;
	}
}


/* ************************************************************************** */
/*      Operator overload                                                     */
/* ************************************************************************** */

ScavTrap &ScavTrap::operator=(ScavTrap const &rhs)
{
	this->_name = rhs._name;
	this->_hit_points = rhs._hit_points;
	this->_energy_points = rhs._energy_points;
	this->_attack_damage = rhs._attack_damage;
	return (*this);
}
