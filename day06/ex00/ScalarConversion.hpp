/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConversion.hpp                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sameye <sameye@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/11 17:50:25 by sameye            #+#    #+#             */
/*   Updated: 2022/03/04 12:58:41 by sameye           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <limits.h>
#include <stdlib.h>
#include <math.h>

#define CHAR 0
#define INT 1
#define FLOAT 2
#define DOUBLE 3
#define PSEUDOLITERAL 4

class ScalarConversion
{
	public:
	ScalarConversion(void);
	~ScalarConversion(void);
	ScalarConversion(ScalarConversion const &instance);
	ScalarConversion &operator=(ScalarConversion const &rhs);

	ScalarConversion(char *str);
	void display(void);
	
	private:
	char *_str;
	int _type;
	char _char;
	int _int;
	float _float;
	double _double;
	std::string _char_str;
	std::string _int_str;
	std::string _float_str;
	std::string _double_str;
	void _get_type(void);
	int _is_char(void);
	int _is_int(void);
	int _is_float(void);
	int _is_double(void);
	int _is_pseudo_literal(void);
	int _jump_num_block(int &i, char *str);
	void _convert_input(void);
	void _convert_output(void);
	void _convert_output_from_char(void);
	void _convert_output_from_int(void);
	void _convert_output_from_float(void);
	void _convert_output_from_double(void);
	void _set_strings_pseudo_literal(void);
	void _check_overflow(void);
	void _set_strings(void);




	class TypeNotFound : public std::exception
	{
		public:
			virtual const char* what() const throw();
	};

	class InputOverflow : public std::exception
	{
		public:
			virtual const char* what() const throw();
	};
};