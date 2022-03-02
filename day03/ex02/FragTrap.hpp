/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sameye <sameye@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/27 18:23:09 by sameye            #+#    #+#             */
/*   Updated: 2022/03/02 14:58:44 by sameye           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_HPP
#define FRAGTRAP_HPP

#include "ClapTrap.hpp"
#include <iostream>

class FragTrap : virtual public ClapTrap
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

		void	highFivesGuys(void) const;

/* ************************************************************************** */
/*      Operator overload                                                     */
/* ************************************************************************** */

		FragTrap	&operator=(FragTrap const &res);
};


#endif