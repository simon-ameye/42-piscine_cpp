/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sameye <sameye@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/09 12:44:59 by sameye            #+#    #+#             */
/*   Updated: 2022/02/09 14:40:08 by sameye           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# ifndef ICE_HPP
# define ICE_HPP
# include <iostream>
# include "AMateria.hpp"
# include "Character.hpp"

class Ice : public AMateria
{
	public:
		Ice();
		Ice(Ice const &src);
		~Ice();
		Ice			&operator=(Ice const &rhs);
		AMateria	*clone() const;
		void		use(ICharacter &target);
};
#endif
