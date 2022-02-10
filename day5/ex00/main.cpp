/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sameye <sameye@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/10 12:56:11 by sameye            #+#    #+#             */
/*   Updated: 2022/02/10 15:15:35 by sameye           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <unistd.h>
#include "Bureaucrat.hpp"

int main(void)
{
	std::cout << "\n********HEAP STACK TEST********" << std::endl;

	Bureaucrat bureaucrat1;
	Bureaucrat *bureaucrat2 = new Bureaucrat("bureaucrat2", 45);
	Bureaucrat bureaucrat3("bureaucrat3", 1);
	std::cout << bureaucrat1 << std::endl;
	std::cout << *bureaucrat2 << std::endl;
	std::cout << bureaucrat3 << std::endl;

	std::cout << "\n********COPY DEEP TEST********" << std::endl;

	Bureaucrat *bureaucrat2Copy = new Bureaucrat(*bureaucrat2);
	std::cout << *bureaucrat2Copy << std::endl;
	delete bureaucrat2;
	std::cout << *bureaucrat2Copy << std::endl;
	delete bureaucrat2Copy;
	
	std::cout << "\n********HI LOW CREATION GRADES TEST********" << std::endl;

	try
	{
		Bureaucrat bureaucrat4("bureaucrat4", 0);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}

	try
	{
		Bureaucrat bureaucrat5("bureaucrat5", 151);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}

	std::cout << "\n********INCREMENT DECREMENT TEST********" << std::endl;

	std::cout << bureaucrat3 << std::endl;
	try
	{
		bureaucrat3.incrementGrade();
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}
	std::cout << bureaucrat3 << std::endl;

	std::cout << bureaucrat1 << std::endl;
	try
	{
		bureaucrat1.decrementGrade();
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}
	std::cout << bureaucrat1 << std::endl;

	return (0);
}