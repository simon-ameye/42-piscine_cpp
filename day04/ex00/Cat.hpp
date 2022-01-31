/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sameye <sameye@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/31 16:48:57 by sameye            #+#    #+#             */
/*   Updated: 2022/01/31 17:09:35 by sameye           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
#define CAT_HPP

#include "Animal.hpp"

class Cat : public Animal
{
	private:

	public:
	Cat(void);
	Cat(Cat const& instance);
	~Cat(void);
	Cat	&operator=(Cat const &right_hand_side);

	virtual void makeSound(void)const;
};

#endif