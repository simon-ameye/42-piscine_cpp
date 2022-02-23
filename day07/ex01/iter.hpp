/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sameye <sameye@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/22 16:25:05 by sameye            #+#    #+#             */
/*   Updated: 2022/02/22 18:16:14 by sameye           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ITER_HPP
#define ITER_HPP

#include <iostream>

template <typename T>
void iter(T *array, int const size, void function (T &sample))
{
	for (int i = 0; i <= size - 1; i++)
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