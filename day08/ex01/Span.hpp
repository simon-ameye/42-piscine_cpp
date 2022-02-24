/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sameye <sameye@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/23 17:47:19 by sameye            #+#    #+#             */
/*   Updated: 2022/02/24 17:58:35 by sameye           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_HPP
#define SPAN_HPP
//# include <algorithm>
//# include <iterator>
# include <iostream>
//# include <list>
# include <vector>
# include <algorithm>
//# include <iterator>

//# include <string>

class Span
{
	public :
	/**************** requirement by canical class ****************/
	~Span(void);
	Span(void);
	Span(const Span &copy);
	Span	&operator=(const Span &rhs);

	/**************** constructors ****************/
	Span(unsigned int n);

	/**************** member functions ****************/
	void addNumber(int nb);
	void addRange(int a, int z);
	int shortestSpan(void);
	int longestSpan(void);

	/**************** exception classes ****************/
	class StorageFull : public std::exception
	{
		virtual const char *what() const throw()
		{
			return ("Out of memory");
		}
	};
	class NotEnoughElements : public std::exception
	{
		virtual const char *what() const throw()
		{
			return ("Not enough elements");
		}
	};

	private :
	unsigned int _n; // _N is not available
	std::vector<int> _vector;
};

#endif