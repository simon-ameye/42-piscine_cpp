/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sameye <sameye@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/22 16:06:11 by sameye            #+#    #+#             */
/*   Updated: 2022/02/22 16:24:12 by sameye           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include <iostream>
# include "whatever.hpp"

class Awesome
{
    public:
    	Awesome( int n = 0 ) : _n( n ) {}
    	bool operator==( Awesome const & rhs ) { return (this->_n == rhs._n); }
    	bool operator!=( Awesome const & rhs ) { return (this->_n != rhs._n); }
		bool operator>( Awesome const & rhs ) { return (this->_n > rhs._n); }
    	bool operator<( Awesome const & rhs ) { return (this->_n < rhs._n); }
    	bool operator>=( Awesome const & rhs ) { return (this->_n >= rhs._n); }
    	bool operator<=( Awesome const & rhs ) { return (this->_n <= rhs._n); }
	private:
    	int _n;
};

int main( void )
{
	int a = 2;
	int b = 3;
	::swap( a, b );
	std::cout << "a = " << a << ", b = " << b << std::endl;
	std::cout << "min( a, b ) = " << ::min( a, b ) << std::endl;
	std::cout << "max( a, b ) = " << ::max( a, b ) << std::endl;
	std::string c = "chaine1";
	std::string d = "chaine2";
	::swap(c, d);
	std::cout << "c = " << c << ", d = " << d << std::endl;
	std::cout << "min( c, d ) = " << ::min( c, d ) << std::endl;
	std::cout << "max( c, d ) = " << ::max( c, d ) << std::endl;
	return 0;
}