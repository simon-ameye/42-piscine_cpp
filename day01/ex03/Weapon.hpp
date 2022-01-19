/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sameye <sameye@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/19 16:50:39 by sameye            #+#    #+#             */
/*   Updated: 2022/01/19 20:47:23 by sameye           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_HPP
# define WEAPON_HPP

#include <string>
#include <iostream>

class Weapon
{
	public:
							Weapon(void);
							Weapon(std::string Weapon);
							~Weapon(void);
		std::string const	&getType(void);
		void				setType(std::string type);

	private:
		std::string			type;
};

#endif