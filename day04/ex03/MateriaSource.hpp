/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sameye <sameye@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/09 12:45:07 by sameye            #+#    #+#             */
/*   Updated: 2022/02/09 14:40:19 by sameye           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# ifndef MATERIASOURCE_HPP
# define MATERIASOURCE_HPP
# include <iostream>
#include "IMateriaSource.hpp"


class MateriaSource : public IMateriaSource
{
	protected:
		AMateria	*source[4];
	public:
		MateriaSource();
		MateriaSource(MateriaSource const &copy);
		~MateriaSource();
		MateriaSource &operator=(MateriaSource const &rhs);
		void		learnMateria(AMateria *materia);
		AMateria*	createMateria(std::string const &type);
};

#endif