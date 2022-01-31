/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sameye <sameye@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/27 16:01:58 by sameye            #+#    #+#             */
/*   Updated: 2022/01/31 14:55:54 by sameye           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "FragTrap.hpp"
#include "ScavTrap.hpp"
#include "DiamondTrap.hpp"

void Clap(void)
{
	std::cout << "----------ClapTrap----------" << std::endl;
	ClapTrap ClapUnNamed;
	ClapUnNamed.get_info();
	ClapTrap ClapMike("ClapMike");
	ClapMike.get_info();
	ClapTrap ClapJoe;
	ClapJoe = ClapMike;
	ClapJoe.get_info();
	ClapUnNamed.attack("ClapMike");
	ClapMike.takeDamage(0);
	ClapUnNamed.beRepaired(3);
	ClapUnNamed.get_info();
	ClapMike.get_info();
	ClapUnNamed.attack("ClapMike");
	ClapMike.takeDamage(0);
	ClapUnNamed.get_info();
	ClapMike.get_info();
}

void Scav(void)
{
	std::cout << "----------ScavTrap----------" << std::endl;
	ScavTrap Scav("Joe");
	Scav.attack("Jack");
	Scav.takeDamage(5);
	Scav.guardGate();
	Scav.beRepaired(10);
	Scav.get_info();
}

void Frag(void)
{
	std::cout << "\n----------FragTrap----------" << std::endl;
	FragTrap Frag("Jack");
	Frag.attack("Joe");
	Frag.takeDamage(5);
	Frag.highFivesGuys();
	Frag.beRepaired(10);
	Frag.takeDamage(500);
	Frag.get_info();
}

void Diam(void)
{
	std::cout << "\n----------DiamondTrap----------" << std::endl;
	DiamondTrap diamondtrap("Mike");
	diamondtrap.attack("Joe");
	diamondtrap.takeDamage(5);
	diamondtrap.takeDamage(5);
	diamondtrap.highFivesGuys();
	diamondtrap.beRepaired(10);
	diamondtrap.whoAmI();
	diamondtrap.get_info();
}

int	main(void)
{
	Clap();
	Scav();
	Frag();
	Diam();
}
