/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sameye <sameye@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/27 18:23:09 by sameye            #+#    #+#             */
/*   Updated: 2022/03/02 15:07:39 by sameye           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DIAMONDTRAP_HPP
#define DIAMONDTRAP_HPP

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"
#include <iostream>

class DiamondTrap : virtual public ScavTrap, virtual public FragTrap
{
	private:
		std::string		_name;

	public:
		DiamondTrap(void);
		DiamondTrap(std::string name);
		DiamondTrap(DiamondTrap const& instance);
		~DiamondTrap(void);

/* ************************************************************************** */
/*      Member functions                                                      */
/* ************************************************************************** */

		void	attack(std::string const & target);
		void	whoAmI(void) const;

/* ************************************************************************** */
/*      Operator overload                                                     */
/* ************************************************************************** */

		DiamondTrap	&operator=(DiamondTrap const &right_hand_side);
};


#endif