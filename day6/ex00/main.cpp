/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sameye <sameye@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/11 17:50:26 by sameye            #+#    #+#             */
/*   Updated: 2022/02/15 13:16:01 by sameye           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <iostream>
#include "ScalarConversion.hpp"

int main(int ac, char **av)
{
	if (ac != 2)
	{
		std::cout << "Wrong arguments" << std::endl;
		return (EXIT_FAILURE);
	}
	try
	{
		ScalarConversion value(av[1]);
		value.display();
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}
}