/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pfrances <pfrances@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/03 21:57:59 by pfrances          #+#    #+#             */
/*   Updated: 2023/03/11 18:13:33 by pfrances         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog( void ) : Animal() {
	this->type = "Dog";
	std::cout << "[Dog] default constructor called." << std::endl;
}

Dog::Dog(const Dog& other) : Animal(other) {
	std::cout << "[Dog] copy constructor called." << std::endl;
}

Dog&	Dog::operator=(const Dog& other) {
	if (this != &other) {
		this->type = other.type;
	}
	std::cout << "[Dog] asignment called." << std::endl;
	return *this;
}

Dog::~Dog( void ) {
	std::cout << "[Dog] destructor called." << std::endl;
}

void	Dog::makeSound( void ) const {
	std::cout << "[Dog] *Woof Woof* " << std::endl;
}
