/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Phonebook.class.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sameye <sameye@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/14 16:49:40 by sameye            #+#    #+#             */
/*   Updated: 2022/01/17 12:32:24 by sameye           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Phonebook.class.hpp"

Phonebook::Phonebook(void)
{
	this ->_contact_nb = 0;
	return ;
}

Phonebook::~Phonebook(void)
{
	return ;
}

std::string		Phonebook::_get_input(std::string prompt)
{
	std::string	input;

	std::cout << "Enter " << prompt << " : ";
	getline(std::cin, input, '\n');
	return (input);
}

void	Phonebook::add_contact(void)
{
	std::string	input;

	std::cout << "\n---------CONTACT CREATOR---------" << std::endl;
	if (_contact_nb == MAX_CONTACTS)
	{
		std::cout << "Phonebook full !" << std::endl;
		return ;
	}
	this->_contacts[this->_contact_nb].set_first_name(_get_input("First name"));
	this->_contacts[this->_contact_nb].set_last_name(_get_input("Last name"));
	this->_contacts[this->_contact_nb].set_nickname(_get_input("Nickname"));
	this->_contacts[this->_contact_nb].set_phone_number(_get_input("Phone number"));
	this->_contacts[this->_contact_nb].set_darkest_secret(_get_input("Darkest secret"));
	this->_contact_nb++;
}

void	Phonebook::search(void)
{
	int			index;
	std::string	input;

	std::cout << "\n---------SEARCH TOOL---------" << std::endl;
	if (_contact_nb == 0)
	{
		std::cout << "No contact to show\n";
		return ;
	}
	_show_phonebook();
	std::cout << "Enter the index of the contact to show : ";
	getline(std::cin, input, '\n');
	index = atoi(input.c_str());
	if (index <= 0 || index > this->_contact_nb)
	{
		std::cout << "Wrong index" << std::endl;
		return ;
	}
	_show_contact(_contacts[index - 1]);
}

void	Phonebook::_print_truncate_str(std::string str)
{
	if (str.size() > FIELD_WIDTH)
		str[FIELD_WIDTH - 1] = '.';
	std::cout << std::setfill(' ') << std::setw(FIELD_WIDTH);
	std::cout << str.substr(0, FIELD_WIDTH);
}

void	Phonebook::_show_truncate_contact(Contact contact, int index)
{
	std::cout << index;
	std::cout << "|";
	_print_truncate_str(contact.get_first_name());
	std::cout << "|";
	_print_truncate_str(contact.get_last_name());
	std::cout << "|";
	_print_truncate_str(contact.get_nickname());
	std::cout << std::endl;
}

void	Phonebook::_show_contact(Contact contact)
{
	std::cout << "First name : " << contact.get_first_name() << std::endl;
	std::cout << "Last name : " << contact.get_last_name() << std::endl;
	std::cout << "Nickname : " << contact.get_nickname() << std::endl;
	std::cout << "Darkest secret : " << contact.get_darkest_secret() << std::endl;
}

void	Phonebook::_show_phonebook(void)
{
	int			index;

	std::cout << "i|first name|last  name| nickname " << std::endl;
	index = 1;
	while (index <= this->_contact_nb)
	{
		_show_truncate_contact(this->_contacts[index - 1], index);
		index++;
	}
}
