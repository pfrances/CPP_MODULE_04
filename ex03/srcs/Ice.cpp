/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pfrances <pfrances@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/11 20:34:09 by pfrances          #+#    #+#             */
/*   Updated: 2023/03/12 16:40:07 by pfrances         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Ice.hpp"

Ice::Ice( void ) : AMateria("ice") {
	//std::cout << "[Ice] default constructor called." << std::endl;
}

Ice::Ice(const Ice& other) : AMateria(other) {
	//std::cout << "[Ice] copy constructor called." << std::endl;
}

Ice&	Ice::operator=(const Ice& other) {
	if (this != &other) {
		this->type = other.type;
	}
	//std::cout << "[Ice] asignment called." << std::endl;
	return *this;
}

Ice::~Ice( void ) {
	//std::cout << "[Ice] destructor called." << std::endl;
}

AMateria* Ice::clone( void ) const {
	return new Ice();
}
