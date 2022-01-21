/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Karen.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sameye <sameye@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/20 17:15:57 by sameye            #+#    #+#             */
/*   Updated: 2022/01/21 12:54:25 by sameye           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


# ifndef KAREN_HPP
# define KAREN_HPP
# include <iostream>

class	Karen
{
	public:
		Karen(void);
		~Karen(void);
		void	complain(std::string level);
		
	private:
		void	debug(void);
		void	info(void);
		void	warning(void);
		void	error(void);
		std::string _level[4];
		void	(Karen::*fnct_ptrs[4])(void);
};

#endif
