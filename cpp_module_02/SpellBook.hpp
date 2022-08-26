/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   SpellBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sameye <sameye@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/23 17:28:22 by sameye            #+#    #+#             */
/*   Updated: 2022/06/09 13:42:17 by sameye           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ASpell.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sameye <sameye@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/20 13:35:40 by sameye            #+#    #+#             */
/*   Updated: 2022/05/23 15:16:50 by sameye           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPELLBOOCK_H
#define SPELLBOOCK_H

#include <iostream>
#include <map>

#include "ASpell.hpp"

class SpellBook
{
	public:
	SpellBook (void);
	SpellBook (const SpellBook &src);
	virtual ~SpellBook (void);
	SpellBook &operator= (const SpellBook &src);

	void learnSpell(const ASpell* src);
	void forgetSpell(std::string const &name);
	ASpell* createSpell(std::string const &spellname);

	private:
	std::map<std::string, ASpell *> store;
};

#endif