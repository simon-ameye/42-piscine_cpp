/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sameye <sameye@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/17 16:41:15 by sameye            #+#    #+#             */
/*   Updated: 2022/02/28 15:20:28 by sameye           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP
#include <iostream>

class Zombie
{
	public:
		Zombie(void);
		~Zombie(void);
		void	announce(void);
		void	give_name(std::string name);
	
	private:
		std::string _name;
};

void	randomChump(std::string name);
Zombie*	newZombie(std::string name);
Zombie* zombieHorde( int N, std::string name );

#endif