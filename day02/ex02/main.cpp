/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sameye <sameye@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/21 18:37:09 by sameye            #+#    #+#             */
/*   Updated: 2022/01/25 17:25:40 by sameye           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Fixed.hpp"

int main(void)
{
	Fixed a(3);
	Fixed b(5.5f);
	std::cout << "a*b " << a * b << " a-b " << a - b << " a/b " << a / b << " a+b " << a + b << std::endl;
	std::cout << Fixed(a < b) << Fixed(a > b) << Fixed(a == b) << Fixed(a != b) << std::endl;
}
