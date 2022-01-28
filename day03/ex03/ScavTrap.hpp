/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sameye <sameye@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/27 18:23:09 by sameye            #+#    #+#             */
/*   Updated: 2022/01/28 14:43:20 by sameye           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_HPP
#define SCAVTRAP_HPP

#include "ClapTrap.hpp"
#include <iostream>

class ScavTrap : public ClapTrap
{
	private:

	public:
		ScavTrap(void);
		ScavTrap(std::string name);
		ScavTrap(ScavTrap const& instance);
		~ScavTrap(void);

/* ************************************************************************** */
/*      Member functions                                                      */
/* ************************************************************************** */

		void	attack(std::string const & target);
		void	guardGate(void) const;

/* ************************************************************************** */
/*      Operator overload                                                     */
/* ************************************************************************** */

		ScavTrap	&operator=(ScavTrap const &right_hand_side);
};

#endif