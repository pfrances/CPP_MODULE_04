/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAnimal.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pfrances <pfrances@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/03 21:57:59 by pfrances          #+#    #+#             */
/*   Updated: 2023/03/11 19:17:29 by pfrances         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AAnimal.hpp"

AAnimal::AAnimal( void ) : type("Default Animal Type") {
	std::cout << "[AAnimal] default constructor called." << std::endl;
}

AAnimal::AAnimal( std::string type ) : type(type) {
	std::cout << "[AAnimal] typed constructor called." << std::endl;
}

AAnimal::AAnimal(const AAnimal& other) : type(other.type) {
	std::cout << "[AAnimal] copy constructor called." << std::endl;
}

AAnimal&	AAnimal::operator=(const AAnimal& other) {
	if (this != &other) {
		this->type = other.type;
	}
	std::cout << "[AAnimal] asignment called." << std::endl;
	return *this;
}

AAnimal::~AAnimal( void ) {
	std::cout << "[AAnimal] destructor called." << std::endl;
}

std::string AAnimal::getType( void ) const {
	return this->type;
}
