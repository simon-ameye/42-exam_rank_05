/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dummy.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sameye <sameye@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/20 17:23:34 by sameye            #+#    #+#             */
/*   Updated: 2022/05/20 17:26:02 by sameye           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dummy.hpp"

Dummy::Dummy(void) : ATarget("Dummy", "fwooshed") {}

Dummy::~Dummy() {}

Dummy *Dummy::clone() const
{
	return (new Dummy());
}