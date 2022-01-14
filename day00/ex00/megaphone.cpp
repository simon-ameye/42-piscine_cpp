/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sameye <sameye@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/14 12:55:47 by sameye            #+#    #+#             */
/*   Updated: 2022/01/14 14:19:23 by sameye           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

void	megaphone(char *s)
{
	while (*s)
	{
		std::cout << (char)toupper(*s);
		s++;
	}
}

int	main(int ac, char **av)
{
	(void)ac;

	if (*av)
		av++;
	if (!*av)
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *";
	while (*av)
	{
		megaphone(*av);
		av++;
	}
	std::cout << std::endl;
}