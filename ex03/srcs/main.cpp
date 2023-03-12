/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pfrances <pfrances@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/01 21:38:04 by pfrances          #+#    #+#             */
/*   Updated: 2023/03/12 18:08:02 by pfrances         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"
#include "Cure.hpp"
#include "Ice.hpp"
#include "ICharacter.hpp"
#include "Character.hpp"
#include "IMateriaSource.hpp"
#include "MateriaSource.hpp"

#include <iostream>

int main()
{
	IMateriaSource* src = new MateriaSource();
	src->learnMateria(new Ice());
	src->learnMateria(new Cure());

	Character* me = new Character("me");

	AMateria* tmp;

	tmp = src->createMateria("ice");

	me->equip(tmp);
	tmp = src->createMateria("cure");

	me->equip(tmp);
	Character* bob = new Character("bob");

	tmp = src->createMateria("cure");
	bob->equip(tmp);
	// me->unequip(0);
	// me->unequip(1);

	ICharacter* my_cpy = new Character(*me);

	me->use(0, *bob);
	me->use(1, *bob);

	me->unequip(1);

	my_cpy->use(1, *bob);
	me->use(1, *bob);

	delete my_cpy;
	delete bob;
	delete me;
	delete src;

	return 0;
}

