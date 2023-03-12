/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pfrances <pfrances@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/03 21:57:59 by pfrances          #+#    #+#             */
/*   Updated: 2023/03/12 22:47:00 by pfrances         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog( void ) : AAnimal() {
	this->type = "Dog";
	this->MyBrain = new Brain();
	std::cout << "[Dog] default constructor called." << std::endl;
}

Dog::Dog(const Dog& other) : AAnimal(other), MyBrain(new Brain()) {
	for (int i = 0; i < 100; i++)
	{
		this->MyBrain->ideas[i] = other.MyBrain->ideas[i];
	}
	std::cout << "[Dog] copy constructor called." << std::endl;
}

Dog&	Dog::operator=(const Dog& other) {
	if (this != &other) {
		delete MyBrain;
		this->MyBrain = new Brain();
		for (int i = 0; i < 100; i++)
		{
			this->MyBrain->ideas[i] = other.MyBrain->ideas[i];
		}
		this->type = other.type;
	}
	std::cout << "[Dog] asignment called." << std::endl;
	return *this;
}

Dog::~Dog( void ) {
	delete this->MyBrain;
	std::cout << "[Dog] destructor called." << std::endl;
}

void	Dog::makeSound( void ) const {
	std::cout << "[Dog] *Woof Woof* " << std::endl;
}

void	Dog::getIdeas( void ) const {

	for (int i = 0; i < 100; i++) {
		if (this->MyBrain->ideas[i].empty())
			return ;
		std::cout << "[" << i <<  "] : " << this->MyBrain->ideas[i] << std::endl;
	}
}

void	Dog::setIdeas( std::string NewIdea ) {
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
