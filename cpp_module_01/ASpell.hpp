/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ASpell.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sameye <sameye@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/20 13:35:40 by sameye            #+#    #+#             */
/*   Updated: 2022/05/20 17:06:54 by sameye           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ASPELL_H
#define ASPELL_H

#include <string>
#include <iostream>

class ASpell
{
	public:
	ASpell (void);
	ASpell (const ASpell &src);
	~ASpell (void);
	ASpell &operator= (const ASpell &src);

	public:
	ASpell (const std::string &str_name, const std::string &str_effects);

	public:
	virtual ASpell *clone (void) const = 0;

	public:
	const std::string &getName (void) const;
	const std::string &getEffects (void) const;
	void launch (const ATarget &src);

	protected:
	std::string name;
	std::string effects;

};

#endif