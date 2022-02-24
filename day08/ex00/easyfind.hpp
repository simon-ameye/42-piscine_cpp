/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sameye <sameye@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/23 16:42:27 by sameye            #+#    #+#             */
/*   Updated: 2022/02/23 17:30:37 by sameye           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EASYFIND_HPP
#define EASYFIND_HPP

# include <algorithm>
# include <iterator>
# include <iostream>
# include <list>
# include <vector>
# include <string>

template <typename T>
typename T::iterator easyfind(T &haystack, int needle)
{
	return (std::find(haystack.begin(), haystack.end(), needle));
}

#endif