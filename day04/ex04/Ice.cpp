/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sameye <sameye@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/09 12:44:57 by sameye            #+#    #+#             */
/*   Updated: 2022/02/09 14:39:59 by sameye           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Ice.hpp"

Ice::Ice()
{
	std::cout << "Ice constructor called" << std::endl;
	this->_type = "ice";
	return ;
}

Ice::Ice(Ice const &copy)
{
	std::cout << "Ice copy constructor called" << std::endl;
	*this = copy;
	return ;
}

Ice::~Ice(void)
{
	std::cout << "Ice destructor called" << std::endl;
	return ;
}

Ice	&Ice::operator=(Ice const &rhs)
{
	(void)rhs;
	return (*this);
}

AMateria	*Ice::clone() const
{
	return (new Ice());
}

void		Ice::use(ICharacter &target)
{
	std::cout << "* shoots an ice bolt at " << target.getName() << " *" << std::endl;
	return ;
}
