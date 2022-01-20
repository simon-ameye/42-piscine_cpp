/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sameye <sameye@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/20 17:15:53 by sameye            #+#    #+#             */
/*   Updated: 2022/01/20 17:29:19 by sameye           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Karen.hpp"

int		main(void)
{
	Karen karen;

	std::cout << "DEBUG level:" << std::endl;
	karen.complain("DEBUG");
	std::cout << "INFO level:" << std::endl;
	karen.complain("INFO");
	std::cout << "WARNING level:" << std::endl;
	karen.complain("WARNING");
	std::cout << "ERROR level:" << std::endl;
	karen.complain("ERROR");
	return (0);
}
