/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sameye <sameye@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/22 19:02:07 by sameye            #+#    #+#             */
/*   Updated: 2022/03/14 13:52:36 by sameye           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_HPP
#define ARRAY_HPP

#include <exception>
#include <iostream>

template <typename T>
class Array
{
	public :
	/**************** Constructors & Destructors ****************/
	Array(void) : _n(0), _array(new T[0]()) {}
	Array(unsigned int n) : _n(n), _array(new T[n]()) {}
	Array(const Array &copy) : _n(copy._n), _array(new T[_n]())
	{
		for (unsigned int i = 0; i < _n; i++)
		{
			_array[i] = copy._array[i];
		}
	}
	~Array(void)
	{
		delete [] _array;
	}

	/**************** Operators overload ****************/
	Array &operator=(const Array &rhs)
	{
		if (_array != NULL)
			delete [] _array;
		_n = rhs._n;
		_array = new T[_n];
		for (unsigned int i = 0; i < _n; i++)
		{
			_array[i] = rhs._array[i];
		}
		return (*this);
	}

	T &operator[](unsigned int i)
	{
		if (i >= _n)
			throw(SegmentationFaultAttempt());
		else
			return (_array[i]);
	}

	/**************** Exceptions ****************/
	class SegmentationFaultAttempt : public std::exception
	{
		virtual const char *what() const throw()
		{
			return("Out of bounds");
		}
	};

	/**************** Member function ****************/
	unsigned int size(void)
	{
		return (_n);
	}

	private :
	unsigned int _n;
	T *_array;
};
#endif