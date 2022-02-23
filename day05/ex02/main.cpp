/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sameye <sameye@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/10 12:56:11 by sameye            #+#    #+#             */
/*   Updated: 2022/02/10 19:41:18 by sameye           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <unistd.h>
#include "Bureaucrat.hpp"
#include "AForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"

int main(void)
{
	std::cout << "\n**********FORMS CREATION**********" << std::endl;

	PresidentialPardonForm form1("form1");
	ShrubberyCreationForm form2("form2");
	RobotomyRequestForm form3("form3");

	std::cout << "\n**********EXECUTE NOT SIGNED FORMS**********" << std::endl;

	Bureaucrat	bu1;
	Bureaucrat	bu2("bu2", 1);

	bu1.executeForm(form1);
	bu2.executeForm(form1);
	bu2.executeForm(form2);
	bu2.executeForm(form3);

	std::cout << "\n**********SIGN FORMS**********" << std::endl;

	bu1.signForm(form1);
	std::cout << form1 << std::endl;
	bu2.signForm(form1);
	bu2.signForm(form3);
	bu2.signForm(form2);
	
	std::cout << "\n**********EXECUTE FORMS**********" << std::endl;

	bu1.executeForm(form1);
	bu2.executeForm(form1);
	bu2.executeForm(form3);
	bu2.executeForm(form2);

	std::cout << "\n**********INCREMENT DECREMENT CHECK**********" << std::endl;

	std::cout << bu1 << std::endl;
	std::cout << bu2 << std::endl;
	
	try
	{
		bu2.incrementGrade();
	}
	catch(const std::exception& e)
	{
		std::cout << e.what();
	}

	try
	{
		bu1.decrementGrade();
	}
	catch(const std::exception& e)
	{
		std::cout << e.what();
	}

	std::cout << bu2 << std::endl;
	std::cout << bu1 << std::endl;

	return (0);
}