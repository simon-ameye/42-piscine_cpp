/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sameye <sameye@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/22 19:02:05 by sameye            #+#    #+#             */
/*   Updated: 2022/03/14 14:12:15 by sameye           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Array.hpp"
#include <iostream>
#include <string.h>

template <typename T>
void print_array(T &array, unsigned int n)
{
	for (unsigned int i = 0; i < n; i++)
	{
		try
		{
			std::cout << array[i] << " ";
		}
		catch (std::exception &e)
		{
			std::cout << e.what() << " ";
		}
	}
	std::cout << std::endl;
}

int	main(void)
{
	std::cout << "\n************test with empty array : ************" << std::endl;
	Array <int>test0(void);

	std::cout << "\n************test with int : ************" << std::endl;
	Array <int>test(42);

	std::cout << "\n************default values : ************" << std::endl;
	print_array(test, 42);

	std::cout << "\n************set values : ************" << std::endl;
	test[5] = - 424242;
	test[30] = 42424242;
	print_array(test, 42);

	std::cout << "\n************access beyond bounds : ************" << std::endl;
	try
	{
		std::cout << test[45];
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
	try
	{
		test[43] = 9;
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
	print_array(test, 45);

	std::cout << "\n************copy test : ************" << std::endl;
	Array <int>test2(3);
	test2 = test;
	print_array(test2, 42);

	std::cout << "\n************copy test : ************" << std::endl;
	Array <int>test3(test);
	print_array(test3, 42);

	std::cout << "\n************test with std::string : ************" << std::endl;
	Array <std::string>test4(42);
	test4[5] = "YOO";
	test4[25] = "HEEEY";
	print_array(test4, 42);
}
