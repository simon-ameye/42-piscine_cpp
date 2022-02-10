/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sameye <sameye@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/10 12:56:11 by sameye            #+#    #+#             */
/*   Updated: 2022/02/10 20:12:31 by sameye           ###   ########.fr       */
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
	AForm *formPresidential = intern.makeForm("presidential pardon", "presidential target");
	AForm *formShrubbery = intern.makeForm("shrubbery creation", "shrubbery target");
	AForm *formRobotomy = intern.makeForm("robotomy request", "robotomy target");
	AForm *inexitentForm = intern.makeForm("notexisting", "notexisting target");
	Bureaucrat bureaucrat("bureaucrate", 1);
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
