/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sameye <sameye@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/23 16:42:25 by sameye            #+#    #+#             */
/*   Updated: 2022/02/23 17:46:02 by sameye           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "easyfind.hpp"

int	main(void)
{
	std::cout << "test with vector filled with int :" << std::endl;
	std::vector<int> test1;
	test1.push_back(10);
	test1.push_back(42);
	test1.push_back(2);
	std::vector<int>::iterator i;
	i = easyfind(test1, 52);
	std::cout << "result : " << (i != test1.end() ? "found" : "not found") << std::endl;
	i = easyfind(test1, 42);
	std::cout << "result : " << (i != test1.end() ? "found" : "not found") << std::endl;

	std::cout << "\ntest with list filled with float :" << std::endl;
	std::vector<float> test2;
	test2.push_back(42.5f);
	test2.push_back(42.0f);
	test2.push_back(876876.0f);
	std::vector<float>::iterator j;
	j = easyfind(test2, 42.0f);
	std::cout << "result : " << (j != test2.end() ? "found" : "not found") << std::endl;
	j = easyfind(test2, 42);
	std::cout << "result : " << (j != test2.end() ? "found" : "not found") << std::endl;
	j = easyfind(test2, 22);
	std::cout << "result : " << (j != test2.end() ? "found" : "not found") << std::endl;

}