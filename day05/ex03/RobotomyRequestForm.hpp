/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.hpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sameye <sameye@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/10 16:44:13 by sameye            #+#    #+#             */
/*   Updated: 2022/02/10 18:48:07 by sameye           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ROBOTOMYREQUESTFORM_HPP
#define ROBOTOMYREQUESTFORM_HPP

#include "AForm.hpp"

class RobotomyRequestForm : public AForm
{
	private:
								RobotomyRequestForm(void);

	public:
								RobotomyRequestForm		(std::string target);
								RobotomyRequestForm		(RobotomyRequestForm const& instance);
								~RobotomyRequestForm	(void) {};
		bool					execute					(Bureaucrat const &executor) const;
		RobotomyRequestForm		&operator=				(RobotomyRequestForm const &right_hand_side);
};

std::ostream &operator<<(std::ostream &outputFile, RobotomyRequestForm const &i);

#endif
