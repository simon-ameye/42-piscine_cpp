/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sameye <sameye@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/31 16:51:36 by sameye            #+#    #+#             */
/*   Updated: 2022/01/31 17:14:30 by sameye           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGCAT_HPP
#define WRONGCAT_HPP

#include "WrongAnimal.hpp"

class WrongCat : public WrongAnimal
{
	private:

	public:
	WrongCat(void);
	WrongCat(WrongCat const& instance);
	~WrongCat(void);
	WrongCat	&operator=(WrongCat const &right_hand_side);

	void makeSound(void)const;
};

#endif
