/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sameye <sameye@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/21 18:37:06 by sameye            #+#    #+#             */
/*   Updated: 2022/02/28 16:33:57 by sameye           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

/* ************************************************************************** */
/*      Defined variables                                                     */
/* ************************************************************************** */

int const	Fixed::_fractional_bits = 8;

/* ************************************************************************** */
/*      Constructors                                                          */
/* ************************************************************************** */

Fixed::Fixed(void)
{
	//std::cout << "Default constructor called" << std::endl;
	this->_raw_bits = 0;
}

Fixed::Fixed(Fixed const &ref_instance)
{
	//std::cout << "Copy constructor called" << std::endl;
	*this = ref_instance;
}

Fixed::Fixed(const int nb)
{
	//std::cout << "Int constructor called" << std::endl;
	this->_raw_bits = nb * (1 << Fixed::_fractional_bits);
}

Fixed::Fixed(const float nb)
{
	//std::cout << "Float constructor called" << std::endl;
	this->_raw_bits = roundf(nb * (1 << Fixed::_fractional_bits));
}

/* ************************************************************************** */
/*      Destructors                                                           */
/* ************************************************************************** */

Fixed::~Fixed(void)
{
	//std::cout << "Destructor called" << std::endl;
}

/* ************************************************************************** */
/*      Overload member functions                                             */
/* ************************************************************************** */

Fixed	&Fixed::operator=(Fixed const &rhs)
{

	//std::cout << "Assignation operator called" << std::endl;
	this->_raw_bits = rhs.getRawBits();
	return (*this);
}

bool	Fixed::operator>(Fixed const &rhs) const
{
	return (this->_raw_bits > rhs.getRawBits());
}

bool	Fixed::operator<(Fixed const &rhs) const
{
	return (this->_raw_bits < rhs.getRawBits());	
}

bool	Fixed::operator>=(Fixed const &rhs) const
{
	return (this->_raw_bits >= rhs.getRawBits());
}

bool	Fixed::operator<=(Fixed const &rhs) const
{
	return (this->_raw_bits <= rhs.getRawBits());
}

bool	Fixed::operator==(Fixed const &rhs) const
{
	return (this->_raw_bits == rhs.getRawBits());
}

bool	Fixed::operator!=(Fixed const &rhs) const
{
	return (this->_raw_bits != rhs.getRawBits());
}

Fixed	Fixed::operator+(Fixed const &rhs)
{
	Fixed res;
	res.setRawBits(this->_raw_bits + rhs.getRawBits());
	return (res);
}

Fixed	Fixed::operator-(Fixed const &rhs)
{
	Fixed res;
	res.setRawBits(this->_raw_bits - rhs.getRawBits());
	return (res);
}

Fixed	Fixed::operator*(Fixed const &rhs)
{
	Fixed res;
	res.setRawBits(this->_raw_bits * rhs.getRawBits() / (1 << Fixed::_fractional_bits));
	return (res);
}

Fixed	Fixed::operator/(Fixed const &rhs)
{
	Fixed res;
	res.setRawBits(this->_raw_bits / rhs.getRawBits() * (1 << Fixed::_fractional_bits));
	return (res);
}

Fixed	&Fixed::operator++(void)
{
	this->_raw_bits++;
	return (*this);
}

Fixed	Fixed::operator++(int)
{
	Fixed res(*this);
	this->_raw_bits++;
	return (res);
}

Fixed	&Fixed::operator--(void)
{
	this->_raw_bits--;
	return (*this);
}

Fixed	Fixed::operator--(int)
{
	Fixed res(*this);
	this->_raw_bits--;
	return (res);
}

/* ************************************************************************** */
/*      Member functions                                                      */
/* ************************************************************************** */

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

Fixed const	&Fixed::min(Fixed const &n1, Fixed const &n2)
{
	return (n1._raw_bits < n2._raw_bits ? n1 : n2);
}

Fixed const	&Fixed::max(Fixed const &n1, Fixed const &n2)
{
	return (n1._raw_bits > n2._raw_bits ? n1 : n2);
}

Fixed	&Fixed::min(Fixed &n1, Fixed &n2)
{
	return (n1._raw_bits < n2._raw_bits ? n1 : n2);
}

Fixed	&Fixed::max(Fixed &n1, Fixed &n2)
{
	return (n1._raw_bits > n2._raw_bits ? n1 : n2);
}

/* ************************************************************************** */
/*      Overload non member functions                                         */
/* ************************************************************************** */

std::ostream &operator<<(std::ostream &output, Fixed const &rhs)
{
	output << rhs.toFloat();
	return (output);
}
