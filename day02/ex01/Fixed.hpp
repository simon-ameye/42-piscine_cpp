/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sameye <sameye@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/21 18:37:03 by sameye            #+#    #+#             */
/*   Updated: 2022/01/21 19:47:12 by sameye           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

# include <iostream>

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
		float				toFloat(void) const;
		int					toInt(void) const;
		int					getRawBits(void) const;
		void				setRawBits(int const raw);

	private:
//variables
		int					_raw_bits;
		int	static const	_fractional_bits;
};
//overload non member functions
std::ostream				&operator<<(std::ostream &output, Fixed const &rhs);
#endif