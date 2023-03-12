/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pfrances <pfrances@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/03 21:57:59 by pfrances          #+#    #+#             */
/*   Updated: 2023/03/12 17:46:33 by pfrances         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"

AMateria::AMateria( void ) {
	// std::cout << "[AMateria] default constructor called." << std::endl;
}

AMateria::AMateria( std::string const & type ) : type(type) {
	// std::cout << "[AMateria] typed constructor called." << std::endl;
}

AMateria::AMateria(const AMateria& other) : type(other.type) {
	//std::cout << "[AMateria] copy constructor called." << std::endl;
}

AMateria&	AMateria::operator=(const AMateria& other) {
	if (this != &other) {
		this->type = other.type;
	}
	//std::cout << "[AMateria] asignment called." << std::endl;
	return *this;
}

AMateria::~AMateria( void ) {
	//std::cout << "[AMateria] destructor called." << std::endl;
}

std::string const & AMateria::getType( void ) const {
	return (this->type);
}

void AMateria::use(ICharacter& target) {
	if (this->type == "ice") {
		std::cout << "* shoots an ice bolt at "<< target.getName() << " *" << std::endl;
	} else if (this->type == "cure" ) {
		std::cout << "* heals "<< target.getName() << "'s wounds *" << std::endl;
	} else {
		std::cout << "* Unvalid type *" << std::endl;
	}
}
