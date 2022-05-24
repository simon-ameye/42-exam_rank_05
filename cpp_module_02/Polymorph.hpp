/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Polymorph.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sameye <sameye@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/20 17:17:07 by sameye            #+#    #+#             */
/*   Updated: 2022/05/20 17:26:47 by sameye           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef POLYMORPH_H
#define POLYMORPH_H

#include <string>
#include <iostream>

#include "ASpell.hpp"

class Polymorph : public ASpell
{
	public:
	Polymorph (void);
	virtual Polymorph *clone (void) const;
};

#endif