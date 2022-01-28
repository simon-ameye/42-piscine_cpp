/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sameye <sameye@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/27 18:23:04 by sameye            #+#    #+#             */
/*   Updated: 2022/01/28 18:29:15 by sameye           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

/* ************************************************************************** */
/*      Constructors                                                          */
/* ************************************************************************** */

DiamondTrap::DiamondTrap(std::string name) 
	: ClapTrap(name + "_clap_name"), FragTrap(name), ScavTrap(name)
{
	std::cout << "DiamondTrap constructor called" << std::endl;
	this->_name = name;
	this->ScavTrap::_hit_points=this->FragTrap::_hit_points;
	this->_energy_points = 8;
	return ;
}

/* ************************************************************************** */
/*      Destructors                                                           */
/* ************************************************************************** */

/* ************************************************************************** */
/*      Member functions                                                      */
/* ************************************************************************** */

void		DiamondTrap::_set_attributes(std::string name)
{
	this->_name = name;
	this->_hit_points = FragTrap::hitPointsInit; 
	this->_energyPoints = ScavTrap::energyPointsInit;
	this->_attackDamage = FragTrap::attackDamageInit;
}

/* ************************************************************************** */
/*      Operator overload                                                     */
/* ************************************************************************** */
