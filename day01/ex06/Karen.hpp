/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Karen.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sameye <sameye@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/20 17:15:57 by sameye            #+#    #+#             */
/*   Updated: 2022/01/21 14:59:01 by sameye           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


# ifndef KAREN_HPP
# define KAREN_HPP
# include <iostream>

typedef enum e_action_val
{
	DEBUG_VAL,
	INFO_VAL,
	WARNING_VAL,
	ERROR_VAL,
	SOMETHINGELSE_VAL
}	t_action_val;


class	Karen
{
	public:
				Karen(void);
				~Karen(void);
		void	complain(std::string level);
		
	private:
		void		debug(void);
		void		info(void);
		void		warning(void);
		void		error(void);
		void		somethingelse(void);
		std::string	_level[4];
};

#endif
