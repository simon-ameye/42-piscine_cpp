/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Phonebook.class.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sameye <sameye@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/14 16:49:43 by sameye            #+#    #+#             */
/*   Updated: 2022/02/25 13:41:05 by sameye           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_CLASS_HPP
# define PHONEBOOK_CLASS_HPP

# include "Contact.class.hpp"
# include <string>
# include <iostream>
# include <iomanip>

const int MAX_CONTACTS = 8;
const int FIELD_WIDTH = 10;

class Phonebook
{
	public:
						Phonebook(void);
						~Phonebook(void);
		void			add_contact(void);
		void			search(void);
	
	private:
		int				_contact_nb;
		Contact			_contacts[MAX_CONTACTS];
		std::string		_get_input(std::string prompt);
		void			_show_phonebook(void);
		void			_show_truncate_contact(Contact contact, int index);
		void			_show_contact(Contact contact);
		void			_print_truncate_str(std::string str);
		int				_atoi(std::string str);

};

#endif