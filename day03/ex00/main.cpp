/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sameye <sameye@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/27 16:01:58 by sameye            #+#    #+#             */
/*   Updated: 2022/01/31 14:59:10 by sameye           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

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

int	main(void)
{
	Clap();
}
