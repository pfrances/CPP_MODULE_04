/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pfrances <pfrances@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/11 21:12:38 by pfrances          #+#    #+#             */
/*   Updated: 2023/03/13 16:58:15 by pfrances         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"

Character::Character( void ) : ICharacter(), name("Default Name") {
	for (int i = 0; i < 4; i++) {
		this->Slots[i] = NULL;
	}
	//std::cout << "[Character] default constructor called." << std::endl;
}

Character::Character(std::string const & name): ICharacter(), name(name) {
	for (int i = 0; i < 4; i++) {
		this->Slots[i] = NULL;
	}
	//std::cout << "[Character] default constructor called." << std::endl;
}

Character::Character(const Character& other) : ICharacter(other), name(other.name) {
	for (int i = 0; i < 4; i++) {
		if (other.Slots[i] != NULL) {
			this->Slots[i] = other.Slots[i]->clone();
		} else {
			this->Slots[i] = NULL;
		}
	}
	std::vector<AMateria*>::iterator it;
	for (it = this->LeftMaterias.begin(); it != this->LeftMaterias.end(); ++it)
	{
		delete *it;
	}
	this->LeftMaterias.clear();
	//std::cout << "[Character] copy constructor called." << std::endl;
}

Character&	Character::operator=(const Character& other) {
	if (this != &other) {
		for (int i = 0; i < 4; i++) {
			delete this->Slots[i];
			if (other.Slots[i] != NULL) {
				this->Slots[i] = other.Slots[i]->clone();
			} else {
				this->Slots[i] = NULL;
			}
		}
		this->name = other.getName();
		std::vector<AMateria*>::iterator it;
		for (it = this->LeftMaterias.begin(); it != this->LeftMaterias.end(); ++it)
		{
			delete *it;
		}
		this->LeftMaterias.clear();
	}
	//std::cout << "[Character] asignment called." << std::endl;
	return *this;
}

Character::~Character( void ) {
	for (int i = 0; i < 4; i++) {
		if (this->Slots[i] != NULL) {
			delete this->Slots[i];
		}
	}
	std::vector<AMateria*>::iterator it;
	for (it = this->LeftMaterias.begin(); it != this->LeftMaterias.end(); ++it)
	{
		delete *it;
	}
	this->LeftMaterias.clear();
	//std::cout << "[Character] destructor called." << std::endl;
}

std::string const & Character::getName() const {
	return (this->name);
}

void Character::equip(AMateria* m) {
	for (int i = 0; i < 4; i++) {
		if (this->Slots[i] == NULL) {
			this->Slots[i] = m;
			return ;
		}
	}
	delete m;
}

void Character::unequip(int idx) {
	if (idx >= 4)
		return ;
	if (this->Slots[idx] != NULL) {
		this->LeftMaterias.push_back(this->Slots[idx]);
		this->Slots[idx] = NULL;
	}
}

void Character::use(int idx, ICharacter& target) {
	if (idx < 4 && this->Slots[idx] != NULL) {
		this->Slots[idx]->use(target);
	}
}
