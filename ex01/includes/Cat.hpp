/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pfrances <pfrances@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/03 21:58:06 by pfrances          #+#    #+#             */
/*   Updated: 2023/03/11 18:52:38 by pfrances         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
# define CAT_HPP

#include "Animal.hpp"
#include "Brain.hpp"
#include <iostream>

class Cat : public Animal {

public:
	Cat( void );
	Cat(const Cat& other);
	Cat& operator=(const Cat& other);
	virtual ~Cat( void );

	virtual void makeSound( void ) const;

	void	getIdeas( void ) const;
	void	setIdeas( std::string NewIdea );

private:
	Brain *MyBrain;
};

#endif
