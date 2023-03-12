/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pfrances <pfrances@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/03 21:57:59 by pfrances          #+#    #+#             */
/*   Updated: 2023/03/12 22:15:37 by pfrances         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal( void ) : type("Default Animal Type") {
	std::cout << "[Animal] default constructor called." << std::endl;
}

Animal::Animal( std::string type ) : type(type) {
	std::cout << "[Animal] typed constructor called." << std::endl;
}

Animal::Animal(const Animal& other) : type(other.type) {
	std::cout << "[Animal] copy constructor called." << std::endl;
}

Animal&	Animal::operator=(const Animal& other) {
	if (this != &other) {
		this->type = other.type;
	}
	std::cout << "[Animal] asignment called." << std::endl;
	return *this;
}

Animal::~Animal( void ) {
	std::cout << "[Animal] destructor called." << std::endl;
}

void	Animal::makeSound( void ) const {
	std::cout << "[Animal] *animal sound* " << std::endl;
}

std::string Animal::getType( void ) const {
	return this->type;
}
