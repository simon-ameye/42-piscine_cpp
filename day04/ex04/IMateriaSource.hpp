/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   IMateriaSource.hpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sameye <sameye@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/09 12:44:55 by sameye            #+#    #+#             */
/*   Updated: 2022/02/09 14:39:49 by sameye           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# ifndef IMateriaSource_HPP
# define IMateriaSource_HPP
# include <iostream>
# include "AMateria.hpp"

class	IMateriaSource
{
	public:
		virtual ~IMateriaSource() {}
		virtual void learnMateria(AMateria*) = 0;
		virtual AMateria* createMateria(std::string const & type) = 0;
};
#endif