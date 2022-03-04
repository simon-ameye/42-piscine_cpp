/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sameye <sameye@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/10 12:56:11 by sameye            #+#    #+#             */
/*   Updated: 2022/03/04 13:24:12 by sameye           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "Bureaucrat.hpp"
#include "AForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "Intern.hpp"

int main(void)
{
	Intern intern;
	std::cout << "\n********************creation of presidential form by intern********************" << std::endl;
	AForm *formPresidential = intern.makeForm("presidential pardon", "presidential target");
	std::cout << "\n********************creation of shrubbery form by intern********************" << std::endl;
	AForm *formShrubbery = intern.makeForm("shrubbery creation", "shrubbery target");
	std::cout << "\n********************creation of robotomy form by intern********************" << std::endl;
	AForm *formRobotomy = intern.makeForm("robotomy request", "robotomy target");
	std::cout << "\n********************creation of notexisting form by intern********************" << std::endl;
	AForm *inexitentForm = intern.makeForm("notexisting", "notexisting target");
	std::cout << "\n********************creation of bureaucrat********************" << std::endl;
	Bureaucrat bureaucrat("bureaucrate", 1);
	std::cout << "\n********************sign and execute********************" << std::endl;
	bureaucrat.executeForm(*formPresidential);
	bureaucrat.signForm(*formPresidential);
	bureaucrat.executeForm(*formPresidential);
	bureaucrat.executeForm(*formShrubbery);
	bureaucrat.signForm(*formShrubbery);
	bureaucrat.executeForm(*formShrubbery);
	bureaucrat.executeForm(*formRobotomy);
	bureaucrat.signForm(*formRobotomy);
	bureaucrat.executeForm(*formRobotomy);
	delete formPresidential;
	delete formRobotomy;
	delete formShrubbery;
	delete inexitentForm;
	return (0);
}
