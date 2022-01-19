/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sameye <sameye@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/19 12:22:25 by sameye            #+#    #+#             */
/*   Updated: 2022/01/19 15:58:04 by sameye           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"
#include <iostream>

Zombie* zombieHorde( int N, std::string name )
{
	Zombie *horde;
	int i;

	horde = new Zombie[N];
	for (i = 0; i < N; i++)
		horde[i].give_name(name);
	return (horde);
}
