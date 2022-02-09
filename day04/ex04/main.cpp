/* ************************************************************************/
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sameye <sameye@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/09 12:45:10 by sameye            #+#    #+#             */
/*   Updated: 2022/02/09 14:30:22 by sameye           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************/

# include "Ice.hpp"
# include "Cure.hpp"
# include "Character.hpp"
# include "ICharacter.hpp"
# include "IMateriaSource.hpp"
# include "MateriaSource.hpp"

int main()
{
	std::cout << "\nCreating characters:" << std::endl;
	std::cout << "------------------------------------------" << std::endl;
	ICharacter* Helen = new Character("Helen");
	ICharacter* John = new Character("John");
	std::cout << "Creating MateriaSource:" << std::endl;
	std::cout << "------------------------------------------" << std::endl;
	IMateriaSource* source = new MateriaSource();
	std::cout <<  "\nLearning:" << std::endl;
	std::cout << "------------------------------------------" << std::endl;
	source->learnMateria(new Cure());
	source->learnMateria(new Ice());
	std::cout << "\nCreating Ice and Cure materias with MateriaSource:" << std::endl;
	std::cout << "------------------------------------------" << std::endl;
	AMateria* mat1;
	AMateria* mat2;
	mat1 = source->createMateria("ice");
	mat2 = source->createMateria("cure");
	std::cout << "\nAdding materias it to Helen's Inventory:" << std::endl;
	std::cout << "------------------------------------------" << std::endl;
	Helen->equip(mat1);
	Helen->equip(mat2);
	std::cout << "\nUsing materias:" << std::endl;
	std::cout << "------------------------------------------" << std::endl;
	Helen->use(0, *John);
	Helen->use(1, *John);
	std::cout << "\nAssigning Materia to John:" << std::endl;
	std::cout << "------------------------------------------" << std::endl;
	John->equip(source->createMateria("ice"));
	AMateria* mat6;
	mat6 = source->createMateria("ice");
	John->equip(mat6);
	std::cout << std::endl;
	std::cout << "\nUnequiping Cure from John:" << std::endl;
	std::cout << "------------------------------------------" << std::endl;
	John->unequip(1);
	std::cout << "\nPutting back cure Materia:" << std::endl; //proof that materia was not deleted
	std::cout << "------------------------------------------" << std::endl;
	John->equip(mat6);
	John->use(1, *John);
	std::cout << "\nMaking character full:" << std::endl;
	std::cout << "------------------------------------------" << std::endl;
	AMateria* mat3;
	AMateria* mat4;
	mat3 = source->createMateria("ice");
	mat4 = source->createMateria("cure");
	John->equip(mat3);
	John->equip(mat4);
	std::cout << "\nMaking the materiaSource full:" << std::endl;
	std::cout << "------------------------------------------" << std::endl;
	source->learnMateria(new Cure());
	source->learnMateria(new Ice());
	source->learnMateria(new Ice());
	source->learnMateria(new Cure());
	std::cout << "\nCreating an unknown type materia:" << std::endl;
	std::cout << "------------------------------------------" << std::endl;
	AMateria *unknown;
	unknown = source->createMateria("unknown");
	std::cout << "\nDeleting Characters and MateriaSource:" << std::endl;
	std::cout << "------------------------------------------" << std::endl;
	delete John;
	delete Helen;
	delete source;
	return (0);
}
