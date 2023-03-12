/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pfrances <pfrances@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/03 21:57:59 by pfrances          #+#    #+#             */
/*   Updated: 2023/03/11 18:14:08 by pfrances         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

WrongCat::WrongCat( void ) : WrongAnimal() {
	this->type = "WrongCat";
	std::cout << "[WrongCat] default constructor called." << std::endl;
}

WrongCat::WrongCat(const WrongCat& other) : WrongAnimal(other) {
	std::cout << "[WrongCat] copy constructor called." << std::endl;
}

WrongCat&	WrongCat::operator=(const WrongCat& other) {
	if (this != &other) {
		this->type = other.type;
	}
	std::cout << "[WrongCat] asignment called." << std::endl;
	return *this;
}

WrongCat::~WrongCat( void ) {
	std::cout << "[WrongCat] destructor called." << std::endl;
}

void	WrongCat::makeSound( void ) const {
	std::cout << "[WrongCat] *meow meow* " << std::endl;
}
