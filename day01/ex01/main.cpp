/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sameye <sameye@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/17 17:23:45 by sameye            #+#    #+#             */
/*   Updated: 2022/01/19 16:02:48 by sameye           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main(void)
{
	Zombie *horde;
	int i;

	horde = zombieHorde(10, "Jean Tonique");
	for (i = 0; i < 10; i++)
	{
		horde[i].announce();
	}
	delete [] horde;
}