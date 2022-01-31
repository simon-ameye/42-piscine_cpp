/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sameye <sameye@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/27 16:01:58 by sameye            #+#    #+#             */
/*   Updated: 2022/01/31 15:01:44 by sameye           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "FragTrap.hpp"

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

int	main(void)
{
	Clap();
	Frag();
}
