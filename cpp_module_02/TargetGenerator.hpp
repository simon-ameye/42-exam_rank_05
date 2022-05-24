/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   TargetGenerator.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sameye <sameye@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/24 11:24:30 by sameye            #+#    #+#             */
/*   Updated: 2022/05/24 11:44:11 by sameye           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef TARGETGENERATOR_H
#define TARGETGENERATOR_H

#include <string>
#include <iostream>
#include <map>

#include "ASpell.hpp"
#include "ATarget.hpp"
#include "SpellBook.hpp"

class TargetGenerator
{
	public:
	TargetGenerator (void);
	TargetGenerator (const TargetGenerator &src);
	~TargetGenerator (void);
	TargetGenerator &operator= (const TargetGenerator &src);

	public:
	void learnTargetType(ATarget* src);
	void forgetTargetType(std::string const & name);
	ATarget* createTarget(std::string const & name);

	private:
	std::map<std::string, ATarget*> store;
};

#endif