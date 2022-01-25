/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sameye <sameye@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/21 18:37:09 by sameye            #+#    #+#             */
/*   Updated: 2022/01/25 15:34:09 by sameye           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Fixed.hpp"

int main(void)
{
Fixed a;
Fixed const b(10);
Fixed const c(42.42f);
Fixed const d(b);
a = Fixed(1234.4321f);
std::cout << "a is " << a << std::endl;
std::cout << "b is " << b << std::endl;
std::cout << "c is " << c << std::endl;
std::cout << "d is " << d << std::endl;
std::cout << "a is " << a.toInt() << " as integer" << std::endl;
std::cout << "b is " << b.toInt() << " as integer" << std::endl;
std::cout << "c is " << c.toInt() << " as integer" << std::endl;
std::cout << "d is " << d.toInt() << " as integer" << std::endl;

/*
Fixed e;
std::cout << "getRawBits " << e.getRawBits() << "e is " << e << std::endl;
e.setRawBits(344);
std::cout << "getRawBits " << e.getRawBits() << "e is " << e << std::endl;
std::cout << "toFloa t" << e.toFloat() << "toInt " << e.toInt() << std::endl;
Fixed g;
g = e;
std::cout << "getRawBits " << g.getRawBits() << "e is " << g << std::endl;
return 0;
*/
}
