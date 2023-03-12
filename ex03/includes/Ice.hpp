/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pfrances <pfrances@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/11 20:15:42 by pfrances          #+#    #+#             */
/*   Updated: 2023/03/12 22:48:21 by pfrances         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ICE_HPP
# define ICE_HPP

#include "AMateria.hpp"

class Ice : public AMateria {

public:
	Ice( void );
	Ice(const Ice& other);
	Ice& operator=(const Ice& other);
	virtual ~Ice( void );

	virtual AMateria* clone( void ) const;
};

#endif
