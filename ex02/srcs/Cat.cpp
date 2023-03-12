/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pfrances <pfrances@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/03 21:57:59 by pfrances          #+#    #+#             */
/*   Updated: 2023/03/11 19:18:15 by pfrances         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat( void ) : AAnimal() {
	this->type = "Cat";
	this->MyBrain = new Brain();
	std::cout << "[Cat] default constructor called." << std::endl;
}

Cat::Cat(const Cat& other) : AAnimal(other) {
	this->MyBrain = new Brain();
	for (int i = 0; i < 100; i++) {
		this->MyBrain->ideas[i] = other.MyBrain->ideas[i];
	}
	std::cout << "[Cat] copy constructor called." << std::endl;
}

Cat&	Cat::operator=(const Cat& other) {
	if (this != &other) {
		this->MyBrain = other.MyBrain;
		this->type = other.type;
	}
	std::cout << "[Cat] asignment called." << std::endl;
	return *this;
}

Cat::~Cat( void ) {
	delete this->MyBrain;
	std::cout << "[Cat] destructor called." << std::endl;
}

void	Cat::makeSound( void ) const {
	std::cout << "[Cat] *meow meow* " << std::endl;
}

void	Cat::getIdeas( void ) const {
	for (int i = 0; i < 100; i++) {
		if (this->MyBrain->ideas[i].empty())
			return ;
		std::cout << "[" << i <<  "] : " << this->MyBrain->ideas[i] << std::endl;
	}
}

void	Cat::setIdeas( std::string NewIdea ) {
	int i = 0;

	while (i < 100)
	{
		if (this->MyBrain->ideas[i].empty()) {
			this->MyBrain->ideas[i] = NewIdea;
			return ;
		}
		i++;
	}
	std::cout << "Brain is full !!." << std::endl;
}
