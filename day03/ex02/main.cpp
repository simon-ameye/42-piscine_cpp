/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sameye <sameye@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/27 16:01:58 by sameye            #+#    #+#             */
/*   Updated: 2022/01/27 20:03:11 by sameye           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "ClapTrap.hpp"
#include "ScavTrap.hpp"

int	main(void)
{
	ClapTrap	jean_mi("jean_mi");
	ScavTrap	nicolo("Scavy");
	ScavTrap	raymond;
	ScavTrap	copyScav(nicolo);
	ClapTrap	copyClap(jean_mi);
	nicolo.get_info();
	jean_mi.get_info();
	nicolo.attack("jean_mi");
	jean_mi.takeDamage(nicolo.get_damage());
	nicolo.get_info();
	jean_mi.get_info();
	raymond.guardGate();
	return (0);
}