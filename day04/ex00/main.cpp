/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sameye <sameye@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/31 17:23:49 by sameye            #+#    #+#             */
/*   Updated: 2022/01/31 17:50:43 by sameye           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"
#include <unistd.h>

int main(void)
{
	std::cout << "----------------constructors-----------------";
	const Animal* animal = new Animal();
	const Animal* dog = new Dog();
	const Animal* cat = new Cat();
	const WrongAnimal* wrongcat = new WrongCat();

	std::cout << "----------------copy-----------------";
	Dog copyDog(*dog);
	Cat otherCat;
	Cat copyCat(otherCat);

	std::cout << "----------------dog-----------------";
	std::cout << dog->getType() << std::endl;
	dog->makeSound();
	delete dog;

	std::cout << "----------------cat-----------------";
	std::cout << cat->getType() << std::endl;
	cat->makeSound();
	delete cat;

	std::cout << "----------------animal-----------------";
	std::cout << animal->getType() << std::endl;
	animal->makeSound();
	delete animal;

	std::cout << "----------------wrongcat-----------------";
	std::cout << wrongcat->getType() << std::endl;
	wrongcat->makeSound();
	delete wrongcat;
}