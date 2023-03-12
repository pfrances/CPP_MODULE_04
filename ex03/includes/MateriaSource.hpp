/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pfrances <pfrances@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/11 21:15:32 by pfrances          #+#    #+#             */
/*   Updated: 2023/03/12 22:48:27 by pfrances         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MATERIA_SOURCE_HPP
# define MATERIA_SOURCE_HPP

#include "IMateriaSource.hpp"

class MateriaSource : public IMateriaSource {

public:
	MateriaSource( void );
	MateriaSource(const MateriaSource& other);
	MateriaSource& operator=(const MateriaSource& other);
	virtual ~MateriaSource( void );
	virtual void learnMateria(AMateria*);
	virtual AMateria* createMateria(std::string const & type);

private:
		AMateria *Slots[4];
};

#endif
