/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sameye <sameye@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/27 16:01:58 by sameye            #+#    #+#             */
/*   Updated: 2022/01/27 17:37:49 by sameye           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "ClapTrap.hpp"

int	main(void)
{
	ClapTrap kim("kim");
	ClapTrap james("james");

	std::cout << kim.get_name() << " is now doing 4 damages" << std::endl;
	kim.set_damage(4);
	kim.attack(james.get_name());
	james.takeDamage(kim.get_damage());
	kim.attack(james.get_name());
	james.takeDamage(kim.get_damage());
	kim.getInfo();
	james.getInfo();
	std::cout << james.get_name() << " gets repaired" << std::endl;
	james.beRepaired(4);
	kim.getInfo();
	james.getInfo();
	std::cout << james.get_name() << " is now doing 12 damages." << std::endl;
	james.set_damage(12);
	james.attack(kim.get_name());
	kim.takeDamage(james.get_damage());
	kim.getInfo();
	james.getInfo();
	return (0);
}