/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sameye <sameye@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/27 18:23:04 by sameye            #+#    #+#             */
/*   Updated: 2022/01/31 15:07:40 by sameye           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

/* ************************************************************************** */
/*      Constructors                                                          */
/* ************************************************************************** */

DiamondTrap::DiamondTrap(void)
{
	std::cout << "DiamondTrap constructor called" << std::endl;
	this->_name = "no name";
	ClapTrap::_name = "no name_clap_name";
	this->_hit_points = FragTrap::_hit_points;
	this->_energy_points = ScavTrap::_energy_points;
	this->_attack_damage = FragTrap::_attack_damage;
	return ;
}

DiamondTrap::DiamondTrap(std::string name)
{
	std::cout << "DiamondTrap constructor called" << std::endl;
	this->_name = name;
	ClapTrap::_name = name + "_clap_name";
	this->_hit_points = FragTrap::_hit_points;
	this->_energy_points = ScavTrap::_energy_points;
	this->_attack_damage = FragTrap::_attack_damage;
	return ;
}

DiamondTrap::DiamondTrap(DiamondTrap const& instance)
{
	std::cout << "DiamondTrap Copy constructor called" << std::endl;
	*this = instance;
	return ;
}

/* ************************************************************************** */
/*      Destructors                                                           */
/* ************************************************************************** */

DiamondTrap::~DiamondTrap(void)
{
	std::cout << "DiamondTrap Destructor called" << std::endl;
	return ;
}

/* ************************************************************************** */
/*      Member functions                                                      */
/* ************************************************************************** */

void	DiamondTrap::attack(std::string const &target)
{
	ScavTrap::attack(target);
}

void	DiamondTrap::whoAmI(void) const
{
	std::cout << "My name is " << this->_name << " and my Clap name is " << ClapTrap::_name << std::endl;
}

/* ************************************************************************** */
/*      Operator overload                                                     */
/* ************************************************************************** */

DiamondTrap &DiamondTrap::operator=(DiamondTrap const &rhs)
{
	this->_name = rhs._name;
	this->_hit_points = rhs._hit_points;
	this->_energy_points = rhs._energy_points;
	this->_attack_damage = rhs._attack_damage;
	return (*this);
}
