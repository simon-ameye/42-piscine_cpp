/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sameye <sameye@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/23 17:47:21 by sameye            #+#    #+#             */
/*   Updated: 2022/02/24 18:21:27 by sameye           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

Span::Span(void) : _n(0)
{
	return ;
}

Span::Span(unsigned int n) : _n(n)
{
	return ;
}

Span::Span(const Span &copy)
{
	_n = copy._n;
	_vector = copy._vector;
	return ;
}

Span::~Span(void)
{
	return ;
}

Span &Span::operator=(const Span &rhs)
{
	_n = rhs._n;
	_vector = rhs._vector;
	return (*this);
}

void Span::addNumber(int val)
{
	if (_vector.size() >= _n)
		throw Span::StorageFull();
	_vector.push_back(val);
	std::cout << "add number success" << std::endl;
}

void Span::addRange(int a, int z)
{
	if (_vector.size() + z - a >= _n)
		throw Span::StorageFull();
	for (int i = a; i <= z; i++)
		_vector.push_back(i);
	std::cout << "add range success" << std::endl;
}

int Span::shortestSpan(void)
{
	if (_vector.size() <= 1)
		throw Span::NotEnoughElements();
	std::vector<int> sorted_vector = _vector;
	std::sort(sorted_vector.begin(), sorted_vector.end());
	std::vector<int> vector_spans(sorted_vector.size() - 1, 0);
	for (unsigned int i = 0; i <= vector_spans.size() - 1; i++)
		vector_spans[i] = sorted_vector[i + 1] - sorted_vector[i];
	return (*std::min_element(vector_spans.begin(), vector_spans.end()));
}

int Span::longestSpan(void)
{
	if (_vector.size() <= 1)
		throw Span::NotEnoughElements();
	return (*std::max_element(_vector.begin(), _vector.end()) - *std::min_element(_vector.begin(), _vector.end()));
}
