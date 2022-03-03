/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sameye <sameye@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/31 17:23:49 by sameye            #+#    #+#             */
/*   Updated: 2022/03/03 12:52:37 by sameye           ###   ########.fr       */
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
	std::cout << "----------------copy-----------------" << std::endl;
	Dog otherdog;
	Dog copyDog(otherdog);
	Cat otherCat;
	Cat copyCat(otherCat);

	std::cout << "----------------dog-----------------" << std::endl;
	const Animal* dog = new Dog();
	std::cout << dog->getType() << std::endl;
	dog->makeSound();
	delete dog;

	std::cout << "----------------cat-----------------" << std::endl;
	std::cout << "----------------cat used as animal-----------------" << std::endl;
	const Animal* cat = new Cat();
	std::cout << cat->getType() << std::endl;
	cat->makeSound();
	std::cout << "----------------cat used as cat-----------------" << std::endl;
	Cat cat2;
	cat2.makeSound();
	delete cat;

	std::cout << "----------------animal-----------------" << std::endl;
	const Animal* animal = new Animal();
	std::cout << animal->getType() << std::endl;
	animal->makeSound();
	delete animal;

	std::cout << "----------------wrongcat-----------------" << std::endl;
	const WrongAnimal* wrongcat = new WrongCat();
	std::cout << wrongcat->getType() << std::endl;
	WrongCat wrongcat2;
	std::cout << "----------------wrongcat used as wrong animal-----------------" << std::endl;
	wrongcat->makeSound();
	std::cout << "----------------wrongcat used as wrong cat-----------------" << std::endl;
	wrongcat2.makeSound();
	delete wrongcat;
}