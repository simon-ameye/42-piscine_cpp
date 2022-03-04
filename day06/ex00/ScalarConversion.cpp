/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConversion.cpp                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sameye <sameye@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/11 17:50:22 by sameye            #+#    #+#             */
/*   Updated: 2022/03/04 12:59:21 by sameye           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConversion.hpp"

ScalarConversion::ScalarConversion(void)
{
}

ScalarConversion::~ScalarConversion(void)
{
}

ScalarConversion &ScalarConversion::operator=(ScalarConversion const &rhs)
{
	this->_str = rhs._str;
	this->_type = rhs._type;
	return *this;
}

ScalarConversion::ScalarConversion(char *str) : _str(str)
{
	_get_type();
	_convert_input();
	_convert_output();
}

void ScalarConversion::_get_type(void)
{
	if (_is_pseudo_literal())
		this->_type = PSEUDOLITERAL;
	else if (_is_int())
		this->_type = INT;
	else if (_is_char())
		this->_type = CHAR;
	else if (_is_float())
		this->_type = FLOAT;
	else if (_is_double())
		this->_type = DOUBLE;
	else
		throw ScalarConversion::TypeNotFound();
}

int ScalarConversion::_is_pseudo_literal(void)
{
	std::string str = this->_str;
	if (str == "-inff" || str == "+inff" || str == "nanf")
		return (true);
	if (str == "-inf" || str == "+inf" || str == "nan")
		return (true);
	return (false);
}

int ScalarConversion::_is_char(void)
{
	if (this->_str[0] < '!')
		return (false);
	if (this->_str[0] > '~')
		return (false);
	if (this->_str[1] != 0)
		return (false);
	return (true);
}

int ScalarConversion::_is_int(void)
{
	int i = 0;
	if (this->_str[i] == '-' || this->_str[i] == '+')
		i++;
	if (!_jump_num_block(i, this->_str))
		return (false);
	if (this->_str[i])
		return (false);
	return (true);
}

int ScalarConversion::_is_float(void)
{
	int i = 0;
	int ip = 0;
	if (this->_str[i] == '-' || this->_str[i] == '+')
		i++;
	ip = i;
	_jump_num_block(i, this->_str);
	if (this->_str[i] != '.')
		return (false);
	i++;
	_jump_num_block(i, this->_str);
	if (i <= ip + 1)
		return (false);
	if (this->_str[i] != 'f' || this->_str[i+1])
		return (false);
	return (true);
}

int ScalarConversion::_is_double(void)
{
	int i = 0;
	int ip = 0;
	if (this->_str[i] == '-' || this->_str[i] == '+')
		i++;
	ip = i;
	_jump_num_block(i, this->_str);
	if (this->_str[i] != '.')
		return (false);
	i++;
	_jump_num_block(i, this->_str);
	if (i <= ip + 1)
		return (false);
	if (this->_str[i])
		return (false);
	return (true);
}

int ScalarConversion::_jump_num_block(int &i, char *str)
{
	int i_init = i;
	while (str[i] >= '0' && str[i] <= '9')
		i++;
	if(i_init == i)
		return (false);
	return (true);
}

void ScalarConversion::_convert_input(void)
{
	std::string str = this->_str;
	switch (this->_type)
	{
	case CHAR:
		this->_char = this->_str[0];
		break;
	case INT:
		try
		{
			this->_int = std::stoi(str);
		}
		catch (...)
		{
			throw(ScalarConversion::InputOverflow());
		}
		break;
	case FLOAT:
		try
		{
			this->_float = std::stof(str);
		}
		catch (...)
		{
			throw(ScalarConversion::InputOverflow());
		}
		break;
	case DOUBLE:
		try
		{
			this->_double = std::stod(str);
		}
		catch (...)
		{
			throw(ScalarConversion::InputOverflow());
		}
		break;
	}
}

void ScalarConversion::_convert_output(void)
{
	switch (this->_type)
	{
	case CHAR:
		_convert_output_from_char();
		break;
	case INT:
		_convert_output_from_int();
		break;
	case FLOAT:
		_convert_output_from_float();
		break;
	case DOUBLE:
		_convert_output_from_double();
		break;
	case PSEUDOLITERAL:
		break;
	}
}

void ScalarConversion::_convert_output_from_char(void)
{
	this->_int = static_cast<int>(this->_char);
	this->_float = static_cast<float>(this->_char);
	this->_double = static_cast<double>(this->_char);
}

void ScalarConversion::_convert_output_from_int(void)
{
	this->_char = static_cast<char>(this->_int);
	this->_float = static_cast<float>(this->_int);
	this->_double = static_cast<double>(this->_int);
}

void ScalarConversion::_convert_output_from_float(void)
{
	this->_char = static_cast<char>(this->_float);
	this->_int = static_cast<int>(this->_float);
	this->_double = static_cast<double>(this->_float);
}

void ScalarConversion::_convert_output_from_double(void)
{
	this->_char = static_cast<char>(this->_double);
	this->_int = static_cast<int>(this->_double);
	this->_float = static_cast<float>(this->_double);
}

void ScalarConversion::_set_strings(void)
{
	char char_res[2];
	char_res[0] = this->_char;
	char_res[1] = '\0';
	if (this->_char >= '!' && this->_char <= '~')
		this->_char_str = char_res;
	else
		this->_char_str = "Non displayable";

	this->_int_str = std::to_string(this->_int);
	this->_float_str = std::to_string(this->_float);
	this->_double_str = std::to_string(this->_double);
}

void ScalarConversion::_set_strings_pseudo_literal(void)
{
	std::string str = this->_str;
	if(str == "+inf" || str == "+inff")
	{
		this->_char_str = "impossible";
		this->_int_str = "impossible";
		this->_float_str = "+inf";
		this->_double_str = "+inf";
	}
	else if(str == "-inf" || str == "-inff")
	{
		this->_char_str = "impossible";
		this->_int_str = "impossible";
		this->_float_str = "-inf";
		this->_double_str = "-inf";
	}
	else if(str == "nan" || str == "nanf")
	{
		this->_char_str = "impossible";
		this->_int_str = "impossible";
		this->_float_str = "nan";
		this->_double_str = "nan";
	}
}

void ScalarConversion::_check_overflow(void)
{
	if (this->_double > std::numeric_limits<char>::max() || this->_double < std::numeric_limits<char>::min())
		this->_char_str = "overflow for type : c";
	if (this->_double > std::numeric_limits<int>::max() || this->_double < std::numeric_limits<int>::min())
		this->_int_str = "overflow for type : i";
	if (this->_double > std::numeric_limits<float>::max() || this->_double < -std::numeric_limits<float>::max())
		this->_float_str = "overflow for type : ";
}

void ScalarConversion::display(void)
{
	if (this->_type == PSEUDOLITERAL)
		ScalarConversion::_set_strings_pseudo_literal();
	else
		ScalarConversion::_set_strings();
	ScalarConversion::_check_overflow();
	std::cout << "char: '" << this->_char_str << "'" << std::endl;
	std::cout << "int: " << this->_int_str << std::endl;
	std::cout << "float: " << this->_float_str << "f" << std::endl;
	std::cout << "double: " << this->_double_str << std::endl;
}

const char* ScalarConversion::TypeNotFound::what() const throw()
{
	return ("value is neither int, float, double or printable char");
}

const char* ScalarConversion::InputOverflow::what() const throw()
{
	return ("input value overflow, conversion inpossible");
}
