/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sameye <sameye@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/09 12:44:43 by sameye            #+#    #+#             */
/*   Updated: 2022/02/09 14:17:38 by sameye           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Cure.hpp"

Cure::Cure(void)
{
	std::cout << "Cure constructor called" << std::endl;
	this->_type = "cure";
	return ;
}

Cure::Cure(Cure const &copy)
{
	std::cout << "Cure copy constructor called" << std::endl;
	*this = copy;
	return ;
}

Cure::~Cure(void)
{
	std::cout << "Cure destructor called" << std::endl;
	return ;
}

Cure &Cure::operator=(Cure const &rhs)
{
	(void)rhs;
	return (*this);
}

AMateria	*Cure::clone() const
{
	return (new Cure());
}

void		Cure::use(ICharacter &target)
{
	std::cout << "* heals " << target.getName() << " *" << std::endl;
	return ;
}
