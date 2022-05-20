/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fwoosh.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sameye <sameye@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/20 17:19:57 by sameye            #+#    #+#             */
/*   Updated: 2022/05/20 17:26:42 by sameye           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fwoosh.hpp"

Fwoosh::Fwoosh(void) : ASpell("Fwoosh", "fwooshed") {}

Fwoosh::~Fwoosh() {}

Fwoosh *Fwoosh::clone() const
{
	return (new Fwoosh());
}