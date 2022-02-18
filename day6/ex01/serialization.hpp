/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   serialization.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sameye <sameye@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/18 09:46:09 by sameye            #+#    #+#             */
/*   Updated: 2022/02/18 10:09:16 by sameye           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SERIALIZATION_HPP
#define SERIALIZATION_HPP

#include <iostream>
#include <stdint.h>

typedef struct	s_Data
{
	std::string	string1;
	int			int1;
	std::string	string2;
	float		float1;
}				Data;

uintptr_t serialize(Data* ptr);
Data* deserialize(uintptr_t raw);

#endif
