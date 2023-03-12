/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pfrances <pfrances@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/01 21:38:04 by pfrances          #+#    #+#             */
/*   Updated: 2023/03/12 22:19:29 by pfrances         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"

#include <iostream>

int main(void)
{
	Animal* Dog1 = new Dog();
	Animal* Cat1 = new Cat();

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

	Cat Cat4 = Cat2;

	Cat4.setIdeas("test");
	Cat4.getIdeas();

	std::cout << std::endl;

	delete Dog1;
	delete Cat1;

	std::cout << std::endl;

	return 0;
}
