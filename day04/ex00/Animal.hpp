/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sameye <sameye@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/31 16:48:52 by sameye            #+#    #+#             */
/*   Updated: 2022/01/31 17:08:51 by sameye           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
#define ANIMAL_HPP

#include <iostream>

class Animal
{
private:

protected:
	std::string _type;
	Animal(std::string typeName);

public:
	Animal(void);
	Animal(Animal const& instance);
	virtual ~Animal(void);
	Animal	&operator=(Animal const &right_hand_side);

	virtual void makeSound(void)const;
	std::string getType(void)const;
};
#endif