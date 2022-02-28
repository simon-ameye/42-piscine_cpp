/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sameye <sameye@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/21 18:37:09 by sameye            #+#    #+#             */
/*   Updated: 2022/02/28 16:36:40 by sameye           ###   ########.fr       */
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
	//const Fixed x(6);
	//const Fixed y(3);
	//std::cout << Fixed::max(x, y) << std::endl;
}
