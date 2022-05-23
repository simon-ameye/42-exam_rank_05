/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Warlock.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sameye <sameye@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/20 12:12:12 by sameye            #+#    #+#             */
/*   Updated: 2022/05/20 12:58:38 by sameye           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Warlock.hpp"

	Warlock::Warlock(const std::string &str_name, const std::string &str_title) : name(str_name), title(str_title)
	{
		std::cout << this->name << ": This looks like another boring day." << std::endl;
	}

	Warlock::~Warlock (void)
	{
		std::cout << this->name << ": My job here is done!" << std::endl;
	}

	const std::string &Warlock::getName (void) const
	{
		return (this->name);
	}

	const std::string &Warlock::getTitle (void) const
	{
		return (this->title);
	}
	
	void Warlock::setTitle (const std::string &str)
	{
		this->title = str;
	}

	void Warlock::introduce(void) const
	{
		std::cout << this->name << ": I am " << this->name << ", " << this->title << "!" << std::endl;
	}