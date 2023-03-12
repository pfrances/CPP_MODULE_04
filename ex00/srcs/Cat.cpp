/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pfrances <pfrances@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/03 21:57:59 by pfrances          #+#    #+#             */
/*   Updated: 2023/03/11 18:12:44 by pfrances         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat( void ) : Animal() {
	this->type = "Cat";
	std::cout << "[Cat] default constructor called." << std::endl;
}

Cat::Cat(const Cat& other) : Animal(other) {
	std::cout << "[Cat] copy constructor called." << std::endl;
}

Cat&	Cat::operator=(const Cat& other) {
	if (this != &other) {
		this->type = other.type;
	}
	std::cout << "[Cat] asignment called." << std::endl;
	return *this;
}

Cat::~Cat( void ) {
	std::cout << "[Cat] destructor called." << std::endl;
}

void	Cat::makeSound( void ) const {
	std::cout << "[Cat] *meow meow* " << std::endl;
}
