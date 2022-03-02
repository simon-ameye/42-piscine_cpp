/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sameye <sameye@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/27 18:23:04 by sameye            #+#    #+#             */
/*   Updated: 2022/03/02 14:58:51 by sameye           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

/* ************************************************************************** */
/*      Constructors                                                          */
/* ************************************************************************** */

FragTrap::FragTrap(void)
{
	this->_name = "no name";
	this->_hit_points = 100;
	this->_energy_points = 100;
	this->_attack_damage = 30;
	std::cout << "FragTrap Constructor called" << std::endl;	
}

FragTrap::FragTrap(std::string name)
{
	this->_name = name;
	this->_hit_points = 100;
	this->_energy_points = 100;
	this->_attack_damage = 30;
	std::cout << "FragTrap Constructor called" << std::endl;	
}

FragTrap::FragTrap(FragTrap const &copy)
{
	std::cout << "FragTrap Copy constructor called" << std::endl;
	*this = copy;
	return ;
}

/* ************************************************************************** */
/*      Destructors                                                           */
/* ************************************************************************** */

FragTrap::~FragTrap(void)
{
	std::cout << "FragTrap Destructor called" << std::endl;
	return ;
}

/* ************************************************************************** */
/*      Member functions                                                      */
/* ************************************************************************** */

void	FragTrap::highFivesGuys(void) const
{
	std::cout << "FragTrap " << this->_name << " wants to high five!"<< std::endl;
}

/* ************************************************************************** */
/*      Operator overload                                                     */
/* ************************************************************************** */

FragTrap &FragTrap::operator=(FragTrap const &rhs)
{
	this->_name = rhs._name;
	this->_hit_points = rhs._hit_points;
	this->_energy_points = rhs._energy_points;
	this->_attack_damage = rhs._attack_damage;
	return (*this);
}
