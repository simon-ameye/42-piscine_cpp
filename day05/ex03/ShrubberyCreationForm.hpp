/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.hpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sameye <sameye@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/10 16:44:08 by sameye            #+#    #+#             */
/*   Updated: 2022/02/10 18:42:43 by sameye           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SHRUBBERYCREATIONFORM_HPP
#define SHRUBBERYCREATIONFORM_HPP

#include "AForm.hpp"

class ShrubberyCreationForm : public AForm
{
	private:
		ShrubberyCreationForm(void);
		void	_createFile(void) const;
	public:
		ShrubberyCreationForm(std::string target);
		ShrubberyCreationForm(ShrubberyCreationForm const& instance);
		~ShrubberyCreationForm(void) {};
		bool					execute(Bureaucrat const &executor) const;
		ShrubberyCreationForm	&operator=(ShrubberyCreationForm const &right_hand_side);
};

std::ostream &operator<<(std::ostream &outputFile, ShrubberyCreationForm const &i);

#endif