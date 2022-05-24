/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   SpellBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sameye <sameye@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/23 17:28:13 by sameye            #+#    #+#             */
/*   Updated: 2022/05/24 12:19:15 by sameye           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "SpellBook.hpp"

	SpellBook::SpellBook (void) {}

	SpellBook::~SpellBook (void)
	{
		std::map<std::string, ASpell*>::iterator itb = store.begin();
		std::map<std::string, ASpell*>::iterator ite = store.end();
		while (itb != ite)
		{
			delete(itb->second);
			itb++;
		}
		store.clear();
	}

	void SpellBook::learnSpell(const ASpell *src)
	{
		if (!store.count(src->getName()))
			store[src->getName()] = src->clone();
	}
	
	void SpellBook::forgetSpell(const std::string &name)
	{
		if (store.count(name))
		{
			delete(store[name]);
			store.erase(name);
		}
	}
	
	ASpell* SpellBook::createSpell(const std::string &spellname)
	{
		if (store.count(spellname))
			return (store[spellname]);
		return (NULL);
	}
	