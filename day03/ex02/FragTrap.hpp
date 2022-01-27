/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sameye <sameye@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/27 18:23:09 by sameye            #+#    #+#             */
/*   Updated: 2022/01/27 20:26:26 by sameye           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_HPP
#define FRAGTRAP_HPP

#include "ClapTrap.hpp"
#include <iostream>

class FragTrap : public ClapTrap
{
	private:

	public:
		FragTrap(void);
		FragTrap(std::string name);
		FragTrap(FragTrap const& instance);
		~FragTrap(void);

/* ************************************************************************** */
/*      Member functions                                                      */
/* ************************************************************************** */

		void	attack(std::string const & target);
		void	highFivesGuys(void) const;

/* ************************************************************************** */
/*      Operator overload                                                     */
/* ************************************************************************** */

		FragTrap	&operator=(FragTrap const &right_hand_side);
};


#endif