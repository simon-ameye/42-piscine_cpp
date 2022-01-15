/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.class.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sameye <sameye@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/14 14:47:43 by sameye            #+#    #+#             */
/*   Updated: 2022/01/15 00:09:28 by sameye           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_CLASS_HPP
# define CONTACT_CLASS_HPP

# include <string>
# include <iostream>
# include <iomanip>

class	Contact
{
public:
					Contact(void);
					~Contact(void);
	void			set_first_name(std::string);
	void			set_last_name(std::string);
	void			set_nickname(std::string);
	void			set_phone_number(std::string);
	void			set_darkest_secret(std::string);
	std::string		get_first_name(void);
	std::string		get_last_name(void);
	std::string		get_nickname(void);
	std::string		get_phone_number(void);
	std::string		get_darkest_secret(void);

private:
	std::string		_first_name;
	std::string		_last_name;
	std::string		_nickname;
	std::string		_phone_number;
	std::string		_darkest_secret;
};


#endif