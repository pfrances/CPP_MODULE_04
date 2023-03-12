/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pfrances <pfrances@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/03 21:57:59 by pfrances          #+#    #+#             */
/*   Updated: 2023/03/12 22:15:56 by pfrances         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal( void ) : type("Default WrongAnimal Type") {
	std::cout << "[WrongAnimal] default constructor called." << std::endl;
}

WrongAnimal::WrongAnimal( std::string type ) : type(type) {
	std::cout << "[WrongAnimal] typed constructor called." << std::endl;
}

WrongAnimal::WrongAnimal(const WrongAnimal& other) : type(other.type) {
	std::cout << "[WrongAnimal] copy constructor called." << std::endl;
}

WrongAnimal&	WrongAnimal::operator=(const WrongAnimal& other) {
	if (this != &other) {
		this->type = other.type;
	}
	std::cout << "[WrongAnimal] asignment called." << std::endl;
	return *this;
}

WrongAnimal::~WrongAnimal( void ) {
	std::cout << "[WrongAnimal] destructor called." << std::endl;
}

void	WrongAnimal::makeSound( void ) const {
	std::cout << "[WrongAnimal] *animal sound* " << std::endl;
}

std::string WrongAnimal::getType( void ) const {
	return this->type;
}
