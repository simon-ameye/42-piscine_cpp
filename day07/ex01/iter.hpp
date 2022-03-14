/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sameye <sameye@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/22 16:25:05 by sameye            #+#    #+#             */
/*   Updated: 2022/03/14 12:32:45 by sameye           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ITER_HPP
#define ITER_HPP

#include <iostream>

template <typename T>
void iter(T const *array, unsigned int const size, void function (T const &sample))
{
	for (unsigned int i = 0; i <= size - 1; i++)
	{
		function(array[i]);
	}
}

template <typename T>
void function(T &sample)
{
	std::cout << "printed element : " << sample << std::endl;
}

#endif
