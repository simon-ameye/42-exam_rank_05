/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ASpell.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sameye <sameye@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/20 13:35:40 by sameye            #+#    #+#             */
/*   Updated: 2022/06/09 13:39:54 by sameye           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ASPELL_H
#define ASPELL_H

#include <iostream>

#include "ATarget.hpp"

class ATarget;

class ASpell
{
	public:
	ASpell (void);
	ASpell (const ASpell &src);
	virtual ~ASpell (void);
	ASpell &operator= (const ASpell &src);

	public:
	ASpell (const std::string &str_name, const std::string &str_effects);

	public:
	virtual ASpell *clone (void) const = 0;

	public:
	const std::string &getName (void) const;
	const std::string &getEffects (void) const;
	void launch (const ATarget &src) const;

	protected:
	std::string name;
	std::string effects;

};

#endif