/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sameye <sameye@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/31 17:23:49 by sameye            #+#    #+#             */
/*   Updated: 2022/01/31 19:43:54 by sameye           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include <unistd.h>

int main(void)
{
	std::cout << "\n\n---------HEAP TEST---------\n\n" << std::endl;

	const Animal* heapDog = new Dog();
	const Animal* heapCat = new Cat();
	delete heapDog;
	delete heapCat;

	std::cout << "\n\n---------STACK + DEEP TEST---------\n\n" << std::endl;

	Dog dog;
	Cat cat;
	Cat catCopy(cat);
	Dog dogCopy(dog);

	std::cout << "\n\n---------ARRAY TEST---------\n\n" << std::endl;

	Animal *animals[100];
	for(int i = 0; i < 100; i++)
	{
		if (i % 2 == 0)
			animals[i] = new Cat;
		else
			animals[i] = new Dog;
	}
	for(int i = 0; i < 100; i++)
	{
		animals[i]->makeSound();
		delete animals[i];
	}
}
