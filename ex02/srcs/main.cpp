/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pfrances <pfrances@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/01 21:38:04 by pfrances          #+#    #+#             */
/*   Updated: 2023/03/11 19:24:56 by pfrances         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AAnimal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"

#include <iostream>

int main(void)
{
	AAnimal* Dog1 = new Dog();
	AAnimal* Cat1 = new Cat();
	// AAnimal* AAnimal1 = new AAnimal(); //<- Compile error
	// delete AAnimal1;

	std::cout << std::endl;

	Cat Cat2 = Cat();
	Cat Cat3(Cat2);

	std::cout << std::endl;

	Cat2.setIdeas("abc");
	Cat2.setIdeas("def");
	Cat2.getIdeas();

	std::cout << std::endl;

	Cat3.setIdeas("111");
	Cat3.getIdeas();

	std::cout << std::endl;

	Cat1->makeSound();
	Dog1->makeSound();

	std::cout << std::endl;

	delete Dog1;
	delete Cat1;

	std::cout << std::endl;

	// AAnimal Animal1; // <== compile error

	return 0;
}
