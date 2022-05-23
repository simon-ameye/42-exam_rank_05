/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ASpell.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sameye <sameye@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/20 12:12:12 by sameye            #+#    #+#             */
/*   Updated: 2022/05/23 15:14:00 by sameye           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ASpell.hpp"

	ASpell::ASpell(void) {}
	ASpell::ASpell(const ASpell &src) { *this = src; }
	ASpell::~ASpell (void) {}
	ASpell &ASpell::operator= (const ASpell &src)
	{
		this->name = src.name;
		this->effects = src.effects;
		return *this;
	}

	ASpell::ASpell(const std::string &str_name, const std::string &str_effects)
	{
		name = str_name;
		effects = str_effects;
	}

	const std::string &ASpell::getName (void) const
	{
		return (this->name);
	}

	const std::string &ASpell::getEffects (void) const
	{
		return (this->effects);
	}
	
	void ASpell::launch (const ATarget &src) const
	{
		src.getHitBySpell(*this);
	}
