/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sameye <sameye@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/17 17:23:45 by sameye            #+#    #+#             */
/*   Updated: 2022/01/17 17:47:26 by sameye           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main(void)
{
	Zombie zombie_segolene_royal;
	Zombie *pt_zombie_francois_hollande;

	zombie_segolene_royal.give_name("Segolene Royal");
	zombie_segolene_royal.announce();

	pt_zombie_francois_hollande = newZombie("Francois Hollande");
	pt_zombie_francois_hollande->announce();

	randomChump("Jacques Chirac");

	delete(pt_zombie_francois_hollande);
}