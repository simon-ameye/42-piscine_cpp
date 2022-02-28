/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sameye <sameye@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/21 18:37:06 by sameye            #+#    #+#             */
/*   Updated: 2022/02/28 14:56:42 by sameye           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

int const	Fixed::_fractional_bits = 8;

Fixed::Fixed(void)
{
	std::cout << "Default constructor called" << std::endl;
	this->_raw_bits = 0;
}

Fixed::Fixed(Fixed const &ref_instance)
{
	std::cout << "Copy constructor called" << std::endl;
	*this = ref_instance;
}

Fixed::Fixed(const int nb)
{
	std::cout << "Int constructor called" << std::endl;
	this->_raw_bits = nb * (1 << Fixed::_fractional_bits);
	//this->_raw_bits = nb;
}

Fixed::Fixed(const float nb)
{
	std::cout << "Float constructor called" << std::endl;
	this->_raw_bits = roundf(nb * (1 << Fixed::_fractional_bits));
	//this->_raw_bits = nb;
}

Fixed::~Fixed(void)
{
	std::cout << "Destructor called" << std::endl;
}

Fixed	&Fixed::operator=(Fixed const &rhs)
{

	std::cout << "Copy assignment operator called" << std::endl;
	this->_raw_bits = rhs.getRawBits();
	return (*this);
}

std::ostream &operator<<(std::ostream &output, Fixed const &rhs)
{
	output << rhs.toFloat();
	return (output);
}

int	Fixed::getRawBits(void) const
{
	//std::cout << "getRawBits member function called" << std::endl;
	return (this->_raw_bits);
}

void	Fixed::setRawBits(int const raw)
{
	//std::cout << "setRawBits member function called" << std::endl;
	this->_raw_bits = raw;
}

float	Fixed::toFloat(void) const
{
	return ((float)(this->_raw_bits) / (1 << this->_fractional_bits));
}

int	Fixed::toInt(void) const
{
	return (this->_raw_bits / (1 << this->_fractional_bits));
}
