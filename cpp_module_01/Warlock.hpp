/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Warlock.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sameye <sameye@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/20 12:12:15 by sameye            #+#    #+#             */
/*   Updated: 2022/05/20 17:31:43 by sameye           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WARLOCK_H
#define WARLOCK_H

#include <string>
#include <iostream>

#include "ASpell.hpp"
#include "ATarget.hpp"

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
	void launchSpell(std::string spellname, ATarget *target);

	private:
	std::string name;
	std::string title;
};

#endif