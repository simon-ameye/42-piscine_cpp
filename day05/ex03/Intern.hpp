/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sameye <sameye@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/10 19:52:09 by sameye            #+#    #+#             */
/*   Updated: 2022/02/10 20:10:04 by sameye           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef INTERN_HPP
#define INTERN_HPP

#include <iostream>
#include "AForm.hpp"

class Intern
{
private:
	int		_form_finder		(std::string name);

public:
			Intern(void);
			~Intern(void);
			Intern				(Intern const& instance);
	Intern	&operator=			(Intern const &right_hand_side);
	AForm	*makeForm			(std::string name, std::string target);
};

#endif
