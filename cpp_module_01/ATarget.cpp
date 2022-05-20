/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ATarget.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sameye <sameye@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/20 12:12:12 by sameye            #+#    #+#             */
/*   Updated: 2022/05/20 17:15:45 by sameye           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ATarget.hpp"

	ATarget::ATarget(void) {}
	ATarget::ATarget(const ATarget &src) : type(src.type) {}
	ATarget::~ATarget (void) {}
	
	ATarget& ATarget::operator= (const ATarget &src)
	{
		this->type = src.type;
	}

	ATarget::ATarget (const std::string &str_type) : type(str_type) {}

	const std::string &ATarget::getType (void) const
	{
		return (this->type);
	}

	void ATarget::getHitBySpell (const ASpell &src) const
	{
		std::cout << this->type << " has been " << src.getEffects() << "!" << std::endl;
	}

