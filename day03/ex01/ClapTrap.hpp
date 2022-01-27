/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sameye <sameye@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/27 16:04:01 by sameye            #+#    #+#             */
/*   Updated: 2022/01/27 20:01:36 by sameye           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP

#include <iostream>

class ClapTrap
{

	public:

/* ************************************************************************** */
/*      Constructors                                                          */
/* ************************************************************************** */

							ClapTrap(void);
							ClapTrap(std::string name);
							ClapTrap(ClapTrap const &copy);

/* ************************************************************************** */
/*      Destructors                                                           */
/* ************************************************************************** */

							~ClapTrap(void);

/* ************************************************************************** */
/*      Member functions : getters setters                                    */
/* ************************************************************************** */

	void					set_damage(unsigned int amount);
	int						get_damage(void) const;
	int						get_energyPoints(void) const;
	int						get_hit_points(void) const;
	std::string				get_name(void) const;
	void					get_info(void) const;

/* ************************************************************************** */
/*      Member functions                                                      */
/* ************************************************************************** */

	void					attack(const std::string& target);
	void					takeDamage(unsigned int amount);
	void					beRepaired(unsigned int amount);

/* ************************************************************************** */
/*      Operator overload                                                     */
/* ************************************************************************** */

	ClapTrap				&operator=(ClapTrap const &right_hand_side);

	protected:

/* ************************************************************************** */
/*      Vars                                                                  */
/* ************************************************************************** */
	std::string				_name;
	int						_hit_points;
	int						_energy_points;
	int						_attack_damage;

	private:

};

#endif