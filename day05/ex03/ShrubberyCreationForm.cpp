/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sameye <sameye@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/10 16:44:04 by sameye            #+#    #+#             */
/*   Updated: 2022/02/10 19:25:48 by sameye           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"
#include <iostream>
#include <fstream>

ShrubberyCreationForm::ShrubberyCreationForm(std::string target) : AForm("ShrubberyCreationForm", 145, 137)
{
	this->setTarget(target);
	std::cout << *this << std::endl;
	return ;
}

void		ShrubberyCreationForm::_createFile(void)const
{
	std::string line;
	std::string name = this->getTarget() + "_shrubbery";
	std::ofstream outputFile(name.c_str());
	std::ifstream inputFile("trees.txt");

	if(inputFile && outputFile)
	{
		while(getline(inputFile, line))
			outputFile << line << std::endl;
		std::cout << name << " was created" << std::endl;
	}
	else
		std::cout << "Error creating file" << std::endl;
	outputFile.close();
	inputFile.close();
}

bool		ShrubberyCreationForm::execute(Bureaucrat const &executor) const
{
	if (AForm::execute(executor))
	{
		this->_createFile();
		return (true);
	}
	return (false);
}

std::ostream &operator<<(std::ostream &outputFile, ShrubberyCreationForm const &i)
{
	outputFile	<< "name : " << i.getName() << " grade to sign: " << i.getGradeToSign() << " grade to execute: " << i.getGradeToExecute() << " target : " << i.getTarget() << " is signed : ";
	if (i.getIsSigned())
		outputFile << "yes";
	else
		outputFile << "no";
	return (outputFile);
}

ShrubberyCreationForm	&ShrubberyCreationForm::operator=(ShrubberyCreationForm const &right_hand_side)
{
	(void)right_hand_side;
	return (*this);
}
