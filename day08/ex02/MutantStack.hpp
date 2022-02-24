/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sameye <sameye@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/24 18:49:12 by sameye            #+#    #+#             */
/*   Updated: 2022/02/24 19:41:24 by sameye           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MUTANTSTACK_HPP
#define MUTANTSTACK_HPP

#include <stack>
template <typename T>
class MutantStack : public std::stack<T>
{
	public:
	MutantStack(void)
	{
		return ;
	}

	MutantStack(const MutantStack<T> &copy)
	{
		*this = copy;
	}

	MutantStack<T>& operator=(const MutantStack<T> &rhs)
	{
		this->c = rhs.c;
		return *this;
	}

	~MutantStack(void)
	{
		return ;
	}

	typedef typename std::stack<T>::container_type::iterator iterator; //adds new type called iterator
	iterator begin() //adds begin function to type iterator
	{
		return this->c.begin(); //just sets the c.begin() publicly available
	}

	iterator end()
	{
		return this->c.end();
	}
};

#endif