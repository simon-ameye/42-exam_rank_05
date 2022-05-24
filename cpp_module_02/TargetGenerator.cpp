/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   TargetGenerator.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sameye <sameye@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/24 11:24:31 by sameye            #+#    #+#             */
/*   Updated: 2022/05/24 12:18:34 by sameye           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   TargetGenerator.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sameye <sameye@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/20 12:12:12 by sameye            #+#    #+#             */
/*   Updated: 2022/05/24 11:23:59 by sameye           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "TargetGenerator.hpp"

	TargetGenerator::TargetGenerator(void) {}

	TargetGenerator::~TargetGenerator (void)
	{
		std::map<std::string, ATarget*>::iterator itb = store.begin();
		std::map<std::string, ATarget*>::iterator ite = store.end();
		while (itb != ite)
		{
			delete(itb->second);
			itb++;
		}
		store.clear();
	}

	void TargetGenerator::learnTargetType(ATarget* src)
	{
		if (! store.count(src->getType()))
			store[src->getType()] = src->clone();
	}

	void TargetGenerator::forgetTargetType(std::string const &name)
	{
		if (store.count(name))
		{
			delete store[name];
			store.erase(name);
		}
	}

	ATarget* TargetGenerator::createTarget(std::string const &name)
	{
		if (store.count(name))
			return (store[name]);
		return (NULL);
	}
