/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sameye <sameye@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/31 16:51:31 by sameye            #+#    #+#             */
/*   Updated: 2022/01/31 17:11:58 by sameye           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGANIMAL_HPP
#define WRONGANIMAL_HPP

#include <iostream>

class WrongAnimal
{
private:

protected:
	std::string _type;
	WrongAnimal(std::string typeName);

public:
	WrongAnimal(void);
	WrongAnimal(WrongAnimal const& instance);
	virtual ~WrongAnimal(void);
	WrongAnimal	&operator=(WrongAnimal const &right_hand_side);

	void makeSound(void)const;
	std::string getType(void)const;
};

#endif