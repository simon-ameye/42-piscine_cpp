/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sameye <sameye@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/21 18:37:03 by sameye            #+#    #+#             */
/*   Updated: 2022/01/25 18:23:38 by sameye           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

# include <iostream>
# include <cmath>

class Fixed
{
	public:

/* ************************************************************************** */
/*      Constructors                                                          */
/* ************************************************************************** */

							Fixed(void);
							Fixed(Fixed const &ref_instance);
							Fixed(const int nb);
							Fixed(const float nb);

/* ************************************************************************** */
/*      Destructors                                                           */
/* ************************************************************************** */

							~Fixed(void);

/* ************************************************************************** */
/*      Overload member functions                                             */
/* ************************************************************************** */

		Fixed				&operator=(Fixed const &rhs);
		bool				operator>(Fixed const &rhs) const;
		bool				operator<(Fixed const &rhs) const;
		bool				operator>=(Fixed const &rhs) const;
		bool				operator<=(Fixed const &rhs) const;
		bool				operator==(Fixed const &rhs) const;
		bool				operator!=(Fixed const &rhs) const;
		Fixed				operator+(Fixed const &rhs);
		Fixed				operator-(Fixed const &rhs);
		Fixed				operator*(Fixed const &rhs);
		Fixed				operator/(Fixed const &rhs);
		Fixed				&operator++(void);
		Fixed				operator++(int);
		Fixed				&operator--(void);
		Fixed				operator--(int);

/* ************************************************************************** */
/*      Member functions                                                      */
/* ************************************************************************** */

		int					getRawBits(void) const;
		void				setRawBits(int const raw);
		float				toFloat(void) const;
		int					toInt(void) const;
		static Fixed const	&min(Fixed const &n1, Fixed const &n2);
		static Fixed const	&max(Fixed const &n1, Fixed const &n2);

	private:

/* ************************************************************************** */
/*      Defined variables                                                     */
/* ************************************************************************** */

		int					_raw_bits;
		int	static const	_fractional_bits;
};

/* ************************************************************************** */
/*      Overload non member functions                                         */
/* ************************************************************************** */

std::ostream				&operator<<(std::ostream &output, Fixed const &rhs);
#endif