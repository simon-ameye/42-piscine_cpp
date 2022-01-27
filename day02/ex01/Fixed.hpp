/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sameye <sameye@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/21 18:37:03 by sameye            #+#    #+#             */
/*   Updated: 2022/01/27 15:36:21 by sameye           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

# include <iostream>
# include <cmath>

class Fixed
{
	public:
//constructors and destructors
							Fixed(void);
							Fixed(Fixed const &ref_instance);
							Fixed(const int nb);
							Fixed(const float nb);
							~Fixed(void);

//overload member functions
		Fixed				&operator=(Fixed const &rhs);

//member functions
		int					getRawBits(void) const;
		void				setRawBits(int const raw);
		float				toFloat(void) const;
		int					toInt(void) const;

	private:
//variables
		int					_raw_bits;
		int	static const	_fractional_bits;
};
//overload non member functions
std::ostream				&operator<<(std::ostream &output, Fixed const &rhs);
#endif