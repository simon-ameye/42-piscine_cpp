/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sameye <sameye@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/27 16:03:59 by sameye            #+#    #+#             */
/*   Updated: 2022/01/27 20:01:56 by sameye           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

/* ************************************************************************** */
/*      Constructors                                                          */
/* ************************************************************************** */

ClapTrap::ClapTrap(void)
{
	this->_name = "no name";
	this->_hit_points = 10;
	this->_energy_points = 10;
	this->_attack_damage = 0;
	std::cout << "Constructor called" << std::endl;
}

ClapTrap::ClapTrap(std::string name)
{
	this->_name = name;
	this->_hit_points = 10;
	this->_energy_points = 10;
	this->_attack_damage = 0;
	std::cout << "Constructor called" << std::endl;
}

ClapTrap::ClapTrap(ClapTrap const &copy)
{
	std::cout << "Copy constructor called" << std::endl;
	*this = copy;
	return ;
}

/* ************************************************************************** */
/*      Destructors                                                           */
/* ************************************************************************** */

ClapTrap::~ClapTrap(void)
{
	std::cout << "Destructor called" << std::endl;
	return ;
}

/* ************************************************************************** */
/*      Member functions : getters setters                                    */
/* ************************************************************************** */

void			ClapTrap::set_damage(unsigned int amount)
{
	this->_attack_damage = amount;
}

int				ClapTrap::get_damage(void) const
{
	return this->_attack_damage;
}

int				ClapTrap::get_energyPoints(void) const
{
	return this->_energy_points;
}

int				ClapTrap::get_hit_points(void) const
{
	return (this->_hit_points);
}

std::string		ClapTrap::get_name(void) const
{
	return (this->_name);
}

void	ClapTrap::get_info(void) const
{
	std::cout << "name:\t\t" << _name << std::endl;
	std::cout << "Hit points:\t" << _hit_points << std::endl;
	std::cout << "Energy points:\t" << _energy_points << std::endl;
	std::cout << "Attack damage:\t" << _attack_damage << std::endl;
}

/* ************************************************************************** */
/*      Member functions                                                      */
/* ************************************************************************** */

void	ClapTrap::attack(const std::string& target)
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
		std::cout << "ClapTrap " << this->_name << " attacks " << target << ", causing " << this->_attack_damage << " points of damage!" << std::endl;
	}
}

void	ClapTrap::takeDamage(unsigned int amount)
{
	std::cout << "ClapTrap " << this->_name << " took " << amount << " points of damage!" << std::endl;
	this->_hit_points -= amount;
	if (this->_hit_points <= 0)
		std::cout << "ClapTrap " << _name << " is dead!" << std::endl;
	if (this->_hit_points < 0)
		this->_hit_points = 0;
}

void	ClapTrap::beRepaired(unsigned int amount)
{
	if (this->_energy_points <= 0)
	{
		std::cout << _name << " doesn't have enough hit points to repair." << std::endl;
	}
	else if (this->_hit_points <= 0)
	{
		std::cout << _name << " is already dead." << std::endl;
	}
	else
	{
		this->_hit_points += amount;
		this->_energy_points--;
		std::cout << "ClapTrap " << _name << " has regained " << amount << " hit points back" << std::endl;
	}
}

/* ************************************************************************** */
/*      Operator overload                                                     */
/* ************************************************************************** */

ClapTrap &ClapTrap::operator=(ClapTrap const &right_hand_side)
{
	this->_name = right_hand_side.get_name();
	this->_hit_points = right_hand_side.get_hit_points();
	this->_energy_points = right_hand_side.get_hit_points();
	this->_attack_damage = right_hand_side.get_damage();
	return (*this);
}