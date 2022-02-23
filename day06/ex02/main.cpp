/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sameye <sameye@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/18 10:39:56 by sameye            #+#    #+#             */
/*   Updated: 2022/02/18 11:21:11 by sameye           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include <iostream> //std::
#include <cstdlib> //rand srand
#include <unistd.h> //usleep
#include <ctime>

class Base { public: virtual ~Base(void){}};
class A : public Base {};
class B : public Base {};
class C : public Base {};

Base *generate(void)
{
	Base *class_pointer;
	int random_number;

	std::cout << "\n\n---------- class generation ----------" << std::endl;
	random_number = rand() % 3;
	switch (random_number)
	{
	case 0:
		class_pointer = new A();
		std::cout << "generated a class A" << std::endl;
		break;
	case 1:
		class_pointer = new B();
		std::cout << "generated a class B" << std::endl;
		break;
	case 2:
		class_pointer = new C();
		std::cout << "generated a class C" << std::endl;
		break;
	}
	return class_pointer;
}

void identify(Base* p)
{
	Base *unused; 
	std::cout << "---------- class identification with pointer ----------" << std::endl;
	unused = dynamic_cast<A*>(p);
	if (unused)
		std::cout << "A class identified" << std::endl;
	unused = dynamic_cast<B*>(p);
	if (unused)
		std::cout << "B class identified" << std::endl;
	unused = dynamic_cast<C*>(p);
	if (unused)
		std::cout << "C class identified" << std::endl;
	(void) unused;
}

void identify(Base& p)
{
	std::cout << "---------- class identification with reference ----------" << std::endl;
	try 
	{
		Base &unused = dynamic_cast<A &>(p);
		std::cout << "A class identified" << std::endl;
		(void)unused;
	}
	catch (std::exception &e)
	{
		std::cout << " Not A" << std::endl;
	}
	try 
	{
		Base &unused = dynamic_cast<B &>(p);
		std::cout << "B class identified" << std::endl;
		(void)unused;
	}
	catch (std::exception &e)
	{
		std::cout << " Not B" << std::endl;
	}
	try 
	{
		Base &unused = dynamic_cast<C &>(p);
		std::cout << "C class identified" << std::endl;
		(void)unused;
	}
	catch (std::exception &e)
	{
		std::cout << " Not C" << std::endl;
	}
}

int main(void)
{
	std::srand(time(nullptr));
	for (int i = 0; i < 10; i++)
	{
		Base *random_class = generate();
		Base &class_reference = *random_class;
		identify(random_class);
		identify(class_reference);
		delete random_class;
	}
}