/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sameye <sameye@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/23 17:47:16 by sameye            #+#    #+#             */
/*   Updated: 2022/02/24 18:45:10 by sameye           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

int main()
{
	std::cout << "************* mandatory tests *************" << std::endl;
	Span sp = Span(5);
	sp.addNumber(6);
	sp.addNumber(3);
	sp.addNumber(17);
	sp.addNumber(9);
	sp.addNumber(11);
	std::cout << "shortest span : " << sp.shortestSpan() << std::endl;
	std::cout << "longest span : " << sp.longestSpan() << std::endl;

	std::cout << "************* large range *************" << std::endl;
	Span test1 = Span(50000);
	test1.addRange(2, 50000);
	std::cout << "shortest span : " << test1.shortestSpan() << std::endl;
	std::cout << "longest span : " << test1.longestSpan() << std::endl;

	std::cout << "************* overflows *************" << std::endl;
	Span test2 = Span(0);
	try
	{
		test2.addNumber(5);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}

	Span test3 = Span(50000);
	try
	{
		test3.addRange(0, 50000);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}

	std::cout << "************* not enough elements *************" << std::endl;
	Span test4 = Span(20000);
	test4.addNumber(4);
	try
	{
		std::cout << "shortest span : " << test4.shortestSpan() << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	try
	{
		std::cout << "longest span : " << test4.longestSpan() << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}

	std::cout << "************* just enough elements *************" << std::endl;
	test4.addNumber(77);

	try
	{
		std::cout << "shortest span : " << test4.shortestSpan() << std::endl;
		std::cout << "longest span : " << test4.longestSpan() << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
}



