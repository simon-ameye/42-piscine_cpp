/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.hpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sameye <sameye@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/10 16:44:19 by sameye            #+#    #+#             */
/*   Updated: 2022/02/10 18:49:54 by sameye           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PRESIDENTIALPARDONFORM_HPP
#define PRESIDENTIALPARDONFORM_HPP

#include "AForm.hpp"

class PresidentialPardonForm : public AForm
{
	private:

								PresidentialPardonForm		(void);

	public:
								PresidentialPardonForm		(std::string target);
								PresidentialPardonForm		(PresidentialPardonForm const& instance);
								~PresidentialPardonForm		(void) {};
		bool					execute						(Bureaucrat const &executor) const;
		PresidentialPardonForm	&operator=					(PresidentialPardonForm const &right_hand_side);
};

std::ostream &operator<<(std::ostream &outputFile, PresidentialPardonForm const &i);

#endif