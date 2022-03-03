/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sameye <sameye@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/20 15:01:53 by sameye            #+#    #+#             */
/*   Updated: 2022/03/02 16:47:34 by sameye           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include <sstream>
#include <fstream>

#define	RETURN_SUCCESS 0
#define	READ_FAILURE 1
#define	INPUT_FAILURE 2
#define	OUTPUT_FAILURE 3
#define	WRONG_ARGUMENTS 4

int	ft_return(int sig)
{
	if (sig == RETURN_SUCCESS)
		return (RETURN_SUCCESS);
	else if (sig == INPUT_FAILURE)
		std::cout << "Error: Failed to open Input file" << std::endl;
	else if (sig == OUTPUT_FAILURE)
		std::cout << "Error: Failed to open/create Output file" << std::endl;
	else if (sig == READ_FAILURE)
		std::cout << "Error: Failed to read Input file" << std::endl;
	else if (sig == WRONG_ARGUMENTS)
		std::cout << "Error: Wrong arguments" << std::endl;
	return (sig);
}

void ft_replace_occurences(std::string &buffer_str, std::string const &s1, std::string const &s2)
{
	size_t			pos;

	while (1)
	{
		pos = buffer_str.find(s1);
		if (pos == std::string::npos)
			break;
		buffer_str.erase(pos, s1.length());
		buffer_str.insert(pos, s2);
	}
}

int	ft_get_streams(std::string const &src_file, std::string const &s1, std::string const &s2)
{
	std::stringstream buffer;
	std::string		dst_file;

	dst_file = (src_file + ".replace");
	std::ifstream	src_stream(src_file.c_str());
	if (src_stream.fail())
		return (INPUT_FAILURE);
	std::ofstream	dst_stream(dst_file.c_str(), std::ios::trunc);
	if (dst_stream.fail())
		return (OUTPUT_FAILURE);
	buffer << src_stream.rdbuf();
	if (buffer.fail())
		return (READ_FAILURE);
	std::string buffer_str = buffer.str();
	buffer.clear();
	ft_replace_occurences(buffer_str, s1, s2);
	dst_stream << buffer_str;
	return (RETURN_SUCCESS);
}

int	main(int ac, char **av)
{
	if (ac != 4 || !av[2] || !av[3])
		return (ft_return(WRONG_ARGUMENTS));
	return (ft_return(ft_get_streams(av[1], av[2], av[3])));
}
