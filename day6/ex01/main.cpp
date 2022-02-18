/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sameye <sameye@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/18 09:41:04 by sameye            #+#    #+#             */
/*   Updated: 2022/02/18 10:34:48 by sameye           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "serialization.hpp"

static void print_data(Data *data)
{
	std::cout << "float1" << data->float1 << std::endl;
	std::cout << "int1" << data->int1 << std::endl;
	std::cout << "string1" << data->string1 << std::endl;
	std::cout << "string2" << data->string2 << std::endl;
}

int main(void)
{
	Data *data_ptr = new(Data);
	Data *deserialized_data_ptr;
	uintptr_t serialized_data;

	data_ptr->float1 = 42.42f;
	data_ptr->int1 = 42;
	data_ptr->string1 = "42!";
	data_ptr->string2 = "!!42!!";

	std::cout << "-------Original data:-------" << std::endl;
	print_data(data_ptr);

	std::cout << "-------Serialized data:-------" << std::endl;
	serialized_data = serialize(data_ptr);
	std::cout << "Serialized ptr : " << serialized_data << std::endl;
	
	std::cout << "-------Deserialized data:-------" << std::endl;
	deserialized_data_ptr = deserialize(serialized_data);
	print_data(deserialized_data_ptr);

	return (EXIT_SUCCESS);
}
