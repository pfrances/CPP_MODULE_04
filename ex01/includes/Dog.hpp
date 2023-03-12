/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pfrances <pfrances@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/03 21:58:06 by pfrances          #+#    #+#             */
/*   Updated: 2023/03/11 18:52:42 by pfrances         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
# define DOG_HPP
#include "Animal.hpp"
#include "Brain.hpp"
#include <iostream>

class Dog : public Animal {

public:
	Dog( void );
	Dog(const Dog& other);
	Dog& operator=(const Dog& other);
	virtual ~Dog( void );

	virtual void	makeSound( void ) const;

	void	getIdeas( void ) const;
	void	setIdeas( std::string NewIdea );

private:
	Brain *MyBrain;
};

#endif
