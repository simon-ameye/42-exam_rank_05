/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Warlock.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sameye <sameye@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/20 12:12:15 by sameye            #+#    #+#             */
/*   Updated: 2022/05/24 11:18:15 by sameye           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WARLOCK_H
#define WARLOCK_H

#include <string>
#include <iostream>
#include <map>

#include "ASpell.hpp"
#include "ATarget.hpp"
#include "SpellBook.hpp"

class Warlock
{
	public:
	Warlock (void);
	Warlock (const Warlock &src);
	~Warlock (void);
	Warlock &operator= (const Warlock &src);

	public:
	Warlock (const std::string &str_name, const std::string &str_title);
	
	public:
	const std::string &getName (void) const;
	const std::string &getTitle (void) const;
	void setTitle (const std::string &str);
	void introduce(void) const;

	void learnSpell(const ASpell *src);
	void forgetSpell(std::string name);
	void launchSpell(const std::string spellname, const ATarget &target);

	private:
	std::string name;
	std::string title;

	private:
	std::map<std::string, ASpell*> store;
	SpellBook book;
};

#endif