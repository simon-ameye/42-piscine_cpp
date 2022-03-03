/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAnimal.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sameye <sameye@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/31 16:48:52 by sameye            #+#    #+#             */
/*   Updated: 2022/03/03 13:21:34 by sameye           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AANIMAL_HPP
#define AANIMAL_HPP

#include <iostream>

class AAnimal
{
	private:

	protected:
		std::string _type;
		AAnimal(std::string typeName);

	public:
		AAnimal(void);
		AAnimal(AAnimal const& instance);
		virtual ~AAnimal(void);
		AAnimal	&operator=(AAnimal const &right_hand_side);
		virtual void makeSound(void)const = 0;
};
#endif