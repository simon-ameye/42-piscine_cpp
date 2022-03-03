/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sameye <sameye@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/09 12:44:37 by sameye            #+#    #+#             */
/*   Updated: 2022/02/09 13:28:01 by sameye           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# ifndef CHARACTER_HPP
# define CHARACTER_HPP
# include <iostream>
# include "ICharacter.hpp"
# include "AMateria.hpp"

class Character : public ICharacter
{
	protected:
		std::string	name;
		AMateria	*inventory[4];
	public:
		Character();
		Character(std::string name);
		Character(Character const &src);
		~Character();

		Character &operator=(Character const &rhs);
	
		std::string const	&getName() const;
		void	equip(AMateria *m);
		void 	unequip(int index);
		void 	use(int index, ICharacter& target);
};

#endif