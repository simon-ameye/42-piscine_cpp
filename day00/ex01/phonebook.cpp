/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sameye <sameye@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/14 16:27:27 by sameye            #+#    #+#             */
/*   Updated: 2022/01/15 02:28:06 by sameye           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Phonebook.class.hpp"

static void	remove_string(std::string input)
{
	std::string::size_type i;

	i = 0;
	while (i < input.length())
	{
		std::cout<<'\b';
		std::cout<<" ";
		std::cout<<'\b';
		i++;
	}
}

int	main(void)
{
	std::string input;
	Phonebook phonebook;

	while (1)
	{
		std::cout << "Please enter ADD, SEARCH or EXIT : ";
		getline(std::cin, input, '\n');
		if (input == "ADD")
			phonebook.add_contact();
		else if (input == "SEARCH")
			phonebook.search();
		else if (input == "EXIT")
			return 0;
		else
			remove_string(input);
	}
	return (0);
}

/*
TODO : 
contacts disponibles non vides
Toute autre entrée est supprimée.
*/