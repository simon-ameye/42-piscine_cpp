/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sameye <sameye@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/31 16:49:05 by sameye            #+#    #+#             */
/*   Updated: 2022/02/07 18:17:06 by sameye           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
#define DOG_HPP

#include "AAnimal.hpp"
#include "Brain.hpp"
#include <iostream>

class Dog : public AAnimal
{
	private:
	Brain *_brain;

	public:
	Dog(void);
	Dog(Dog const& instance);
	~Dog(void);
	Dog	&operator=(Dog const &right_hand_side);
	virtual void makeSound(void)const;
};

#endif