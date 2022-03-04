/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sameye <sameye@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/10 12:56:11 by sameye            #+#    #+#             */
/*   Updated: 2022/03/04 12:06:12 by sameye           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>
#include "Bureaucrat.hpp"
#include "Form.hpp"

int main(void)
{
	std::cout << "\n**********CREATION**********" << std::endl;
	Bureaucrat	bu1;
	Bureaucrat	bu2("bu2", 10);
	Form		fo1("fo1", 10, 10);
	Form		fo2("fo2", 149, 149);
	Form		*fo3 = new Form("fo3", 77, 61);

	std::cout << "\n**********COPY**********" << std::endl;

	Form		*fo3Copy = new Form(*fo3);
	delete fo3;
	std::cout << *fo3Copy << std::endl;
	delete fo3Copy;

	std::cout << "\n**********WRONG FORM CREATION**********" << std::endl;

	try
	{
		Form		fo4("fo4", 777, 1);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}

	try
	{
		Form		fo5("fo5", 777, -1);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}

	std::cout << "\n**********SIGNS TESTS**********" << std::endl;

	std::cout << bu1 << std::endl;
	std::cout << bu2 << std::endl;
	std::cout << fo1 << std::endl;
	std::cout << fo2 << std::endl;
	bu1.signForm(fo1);
	bu1.signForm(fo2);
	bu2.signForm(fo2);
	bu2.signForm(fo1);
	bu2.incrementGrade();
	bu2.incrementGrade();
	bu2.incrementGrade();
	std::cout << bu2 << std::endl;
	bu2.signForm(fo1);
	return (0);
}