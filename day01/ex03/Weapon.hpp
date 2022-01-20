/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sameye <sameye@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/19 16:50:39 by sameye            #+#    #+#             */
/*   Updated: 2022/01/20 13:30:55 by sameye           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_HPP
# define WEAPON_HPP

#include <iostream>

class Weapon
{
	public:
							Weapon(void);
							Weapon(std::string type);
							~Weapon(void);
		std::string	&getType(void);
		void				setType(std::string type);

	private:
		std::string			_type;
};

#endif