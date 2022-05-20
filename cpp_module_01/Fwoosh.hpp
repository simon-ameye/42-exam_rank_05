/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fwoosh.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sameye <sameye@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/20 17:17:07 by sameye            #+#    #+#             */
/*   Updated: 2022/05/20 17:26:47 by sameye           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FWOOSH_H
#define FWOOSH_H

#include <string>
#include <iostream>

#include "ASpell.hpp"

class Fwoosh : public ASpell
{
	public:
	Fwoosh (void);
	virtual Fwoosh *clone (void) const;
};

#endif