/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sameye <sameye@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/14 16:27:27 by sameye            #+#    #+#             */
/*   Updated: 2022/01/17 12:27:06 by sameye           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Phonebook.class.hpp"

int	main(void)
{
	std::string input;
	Phonebook phonebook;

	while (1)
	{
		std::cout << "\n---------MAIN MENU---------" << std::endl;
		std::cout << "Please enter ADD, SEARCH or EXIT : ";
		getline(std::cin, input, '\n');
		if (input == "ADD")
			phonebook.add_contact();
		else if (input == "SEARCH")
			phonebook.search();
		else if (input == "EXIT")
			return 0;
		else
			std::cout << "Wrong command" << std::endl;
	}
	return (0);
}
