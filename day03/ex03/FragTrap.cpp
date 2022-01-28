/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sameye <sameye@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/27 18:23:04 by sameye            #+#    #+#             */
/*   Updated: 2022/01/27 20:22:08 by sameye           ###   ########.fr       */
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
	std::cout << "FragTrap " << get_name() << " wants to high five!"<< std::endl;
}


void	FragTrap::attack(const std::string& target)
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
		std::cout << "FragTrap " << this->_name << " attacks " << target << ", causing " << this->_attack_damage << " points of damage!" << std::endl;
	}
}

/* ************************************************************************** */
/*      Operator overload                                                     */
/* ************************************************************************** */

FragTrap &FragTrap::operator=(FragTrap const &right_hand_side)
{
	this->_name = right_hand_side.get_name();
	this->_hit_points = right_hand_side.get_hit_points();
	this->_energy_points = right_hand_side.get_hit_points();
	this->_attack_damage = right_hand_side.get_damage();
	return (*this);
}
