/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pfrances <pfrances@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/01 21:38:04 by pfrances          #+#    #+#             */
/*   Updated: 2023/03/11 18:15:11 by pfrances         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"

#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

#include <iostream>

int main(void)
{
	const Animal* Animal1 = new Animal();
	const Animal* Dog1 = new Dog();
	const Animal* Cat1 = new Cat();

	std::cout << std::endl;

	std::cout << "Dog1 : " << Dog1->getType() << std::endl;
	std::cout << "Cat1 : " << Cat1->getType() << std::endl;
	std::cout << "Animal1 : " << Animal1->getType() << std::endl;

	std::cout << std::endl;

	Cat1->makeSound();
	Dog1->makeSound();
	Animal1->makeSound();

	std::cout << std::endl;

	delete Cat1;
	delete Dog1;
	delete Animal1;

	std::cout << std::endl;

	const WrongAnimal* WrongPattern = new WrongCat();

	std::cout << std::endl;

	std::cout << "WrongPattern : " << WrongPattern->getType() << " " << std::endl;

	WrongPattern->makeSound();

	std::cout << std::endl;

	delete WrongPattern;

	std::cout << std::endl;

	return 0;
}
