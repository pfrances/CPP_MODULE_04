/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pfrances <pfrances@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/11 20:39:12 by pfrances          #+#    #+#             */
/*   Updated: 2023/03/12 16:40:00 by pfrances         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cure.hpp"

Cure::Cure( void ) : AMateria("cure") {
	//std::cout << "[Cure] default constructor called." << std::endl;
}

Cure::Cure(const Cure& other) : AMateria(other) {
	//std::cout << "[Cure] copy constructor called." << std::endl;
}

Cure&	Cure::operator=(const Cure& other) {
	if (this != &other) {
		this->type = other.type;
	}
	//std::cout << "[Cure] asignment called." << std::endl;
	return *this;
}

Cure::~Cure( void ) {
	//std::cout << "[Cure] destructor called." << std::endl;
}

AMateria* Cure::clone( void ) const {
	return new Cure();
}
