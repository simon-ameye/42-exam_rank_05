/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fireball.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sameye <sameye@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/20 17:17:07 by sameye            #+#    #+#             */
/*   Updated: 2022/05/20 17:26:47 by sameye           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIREBALL_H
#define FIREBALL_H

#include <string>
#include <iostream>

#include "ASpell.hpp"

class Fireball : public ASpell
{
	public:
	Fireball (void);
	virtual Fireball *clone (void) const;
};

#endif