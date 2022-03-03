/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sameye <sameye@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/09 12:44:47 by sameye            #+#    #+#             */
/*   Updated: 2022/02/09 14:39:40 by sameye           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# ifndef CURE_HPP
# define CURE_HPP
# include <iostream>
# include "AMateria.hpp"
# include "Character.hpp"

class Cure : public AMateria
{
	public:
		Cure();
		Cure(Cure const &src);
		~Cure();
		Cure		&operator=(Cure const &rhs);
		AMateria	*clone() const;
		void		use(ICharacter &target);
};
# endif
