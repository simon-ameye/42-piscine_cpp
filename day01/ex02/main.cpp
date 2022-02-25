/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sameye <sameye@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/19 16:12:07 by sameye            #+#    #+#             */
/*   Updated: 2022/02/25 15:40:45 by sameye           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

int main(void)
{
	std::string string = "HI THIS IS BRAIN";
	std::string *stringPTR = &string;
	std::string &stringREF = string;

	std::cout << &string << std::endl; //Address of the string using the address of the string
	std::cout << stringPTR << std::endl; //Address of the string using the pointer
	std::cout << &stringREF << std::endl; //Address of the string using the reference

	std::cout << string << std::endl; //String using the pointer
	std::cout << *stringPTR << std::endl; //String using the pointer
	std::cout << stringREF << std::endl; //String using the ref
}