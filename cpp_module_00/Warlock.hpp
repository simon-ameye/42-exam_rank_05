/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Warlock.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sameye <sameye@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/20 12:12:15 by sameye            #+#    #+#             */
/*   Updated: 2022/05/20 12:58:34 by sameye           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WARLOCK_H
#define WARLOCK_H

#include <string>
#include <iostream>

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

	private:
	std::string name;
	std::string title;
};

#endif