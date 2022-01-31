/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sameye <sameye@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/31 18:01:40 by sameye            #+#    #+#             */
/*   Updated: 2022/01/31 19:23:18 by sameye           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_HPP
#define BRAIN_HPP

#include <iostream>

class Brain
{
	private:
		static std::string _Ideas[100];
	protected:
	public:
		Brain(void);
		Brain(Brain const& instance);
		~Brain(void);
		void operator=(Brain const &right_hand_side);
};

#endif