/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pfrances <pfrances@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/11 21:25:05 by pfrances          #+#    #+#             */
/*   Updated: 2023/03/12 16:33:28 by pfrances         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHARACTER_HPP
# define CHARACTER_HPP

#include "ICharacter.hpp"
#include <vector>

class Character : public ICharacter {

public:
	Character( void );
	Character(std::string const & name);
	Character(const Character& other);
	Character& operator=(const Character& other);
	virtual ~Character( void );

	virtual std::string const & getName() const;
	virtual void equip(AMateria* m);
	virtual void unequip(int idx);
	virtual void use(int idx, ICharacter& target);

private:
	std::string name;
	AMateria *Slots[4];
	std::vector<AMateria*> LeftMaterias;

};

#endif