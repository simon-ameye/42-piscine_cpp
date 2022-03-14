/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sameye <sameye@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/22 16:25:02 by sameye            #+#    #+#             */
/*   Updated: 2022/03/14 12:32:12 by sameye           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "iter.hpp"
#include <iostream>
#include <string.h>

int main(void)
{
	int int_tab[20];
	for (int i = 0; i <= 19; i++)
	{
		int_tab[i] = i * 3;
	}

	std::string str_tab[3];
	str_tab[0] = "hello";
	str_tab[1] = "world";
	str_tab[2] = "amazing";

	iter(int_tab, 20, function);
	iter(str_tab, 3, function);
	return 0;
}
