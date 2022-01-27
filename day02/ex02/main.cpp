/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sameye <sameye@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/21 18:37:09 by sameye            #+#    #+#             */
/*   Updated: 2022/01/27 15:48:21 by sameye           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Fixed.hpp"

int main(void)
{

	Fixed a;
	Fixed const b(Fixed(5.05f) * Fixed(2));
	std::cout << a << std::endl;
	std::cout << ++a << std::endl;
	std::cout << a << std::endl;
	std::cout << a++ << std::endl;
	std::cout << a << std::endl;
	std::cout << b << std::endl;
	std::cout << Fixed::max(a, b) << std::endl;

	//Fixed a(3);
	//Fixed b(5.5f);
	//std::cout << "a*b " << a * b << " a-b " << a - b << " a/b " << a / b << " a+b " << a + b << std::endl;
	//std::cout << Fixed(a < b) << Fixed(a > b) << Fixed(a == b) << Fixed(a != b) << std::endl;
}
