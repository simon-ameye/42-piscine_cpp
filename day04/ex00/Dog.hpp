/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sameye <sameye@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/31 16:49:05 by sameye            #+#    #+#             */
/*   Updated: 2022/01/31 17:11:24 by sameye           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
#define DOG_HPP

#include "Animal.hpp"

class Dog : public Animal
{
	private:

	public:
	Dog(void);
	Dog(Animal const& instance);
	~Dog(void);
	Dog	&operator=(Dog const &right_hand_side);

	virtual void makeSound(void)const;
};

#endif