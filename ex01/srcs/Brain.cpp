/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pfrances <pfrances@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/03 21:57:59 by pfrances          #+#    #+#             */
/*   Updated: 2023/03/11 18:29:40 by pfrances         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain( void ) {

	std::cout << "[Brain] default constructor called." << std::endl;
}

Brain::Brain(const Brain& other) : ideas(other.ideas) {
	std::cout << "[Brain] copy constructor called." << std::endl;
}

Brain&	Brain::operator=(const Brain& other) {
	if (this != &other) {
		size_t	i = 0;
		while (i < 100)
		{
			this->ideas[i] = other.ideas[i];
			i++;
		}
	}
	std::cout << "[Brain] asignment called." << std::endl;
	return *this;
}

Brain::~Brain( void ) {
	std::cout << "[Brain] destructor called." << std::endl;
}
