/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.class.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sameye <sameye@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/14 14:47:40 by sameye            #+#    #+#             */
/*   Updated: 2022/01/14 17:18:58 by sameye           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.class.hpp"

Contact::Contact(void) {return ;}
Contact::~Contact(void) {return ;}

void			Contact::set_first_name(std::string str)
{
	this->_first_name = str;
	return ;
}

void			Contact::set_last_name(std::string str)
{
	this->_last_name = str;
	return ;
}

void			Contact::set_nickname(std::string str)
{
	this->_nickname = str;
	return ;
}

void			Contact::set_phone_number(std::string str)
{
	this->_phone_number = str;
	return ;
}

void			Contact::set_darkest_secret(std::string str)
{
	this->_darkest_secret = str;
	return ;
}

std::string		Contact::get_first_name(void)
{
	return (this->_first_name);
}

std::string		Contact::get_last_name(void)
{
	return (this->_last_name);
}

std::string		Contact::get_nickname(void)
{
	return (this->_nickname);
}

std::string		Contact::get_phone_number(void)
{
	return (this->_phone_number);
}

std::string		Contact::get_darkest_secret(void)
{
	return (this->_darkest_secret);
}
