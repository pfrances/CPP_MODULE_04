/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pfrances <pfrances@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/11 21:12:48 by pfrances          #+#    #+#             */
/*   Updated: 2023/03/13 16:57:55 by pfrances         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.hpp"

MateriaSource::MateriaSource( void ) : IMateriaSource() {
	for (int i = 0; i < 4; i++) {
		this->Slots[i] = NULL;
	}
	//std::cout << "[MateriaSource] default constructor called." << std::endl;
}

MateriaSource::MateriaSource(const MateriaSource& other) : IMateriaSource(other) {
	for (int i = 0; i < 4; i++) {
		this->Slots[i] = other.Slots[i];
	}
	//std::cout << "[MateriaSource] copy constructor called." << std::endl;
}

MateriaSource&	MateriaSource::operator=(const MateriaSource& other) {
	if (this != &other) {
		for (int i = 0; i < 4; i++) {
			this->Slots[i] = other.Slots[i];
		}
	}
	//std::cout << "[MateriaSource] asignment called." << std::endl;
	return *this;
}

MateriaSource::~MateriaSource( void ) {
	for (int i = 0; i < 4; i++) {
		if (this->Slots[i] != NULL) {
			delete this->Slots[i];
		}
	}
	//std::cout << "[MateriaSource] destructor called." << std::endl;
}

void	MateriaSource::learnMateria(AMateria *m) {
	for (int i = 0; i < 4; i++) {
		if (this->Slots[i] == NULL) {
			this->Slots[i] = m;
			return ;
		}
	}
	delete m;
}

AMateria* MateriaSource::createMateria(std::string const & type) {
	for (int i = 0; i < 4; i++) {
		if (this->Slots[i] != NULL && this->Slots[i]->getType() == type) {
			return this->Slots[i]->clone();
		}
	}
	return NULL;
}
