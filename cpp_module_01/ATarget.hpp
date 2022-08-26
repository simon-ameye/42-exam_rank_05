/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ATarget.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sameye <sameye@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/20 13:35:40 by sameye            #+#    #+#             */
/*   Updated: 2022/06/09 13:40:32 by sameye           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ATARGET_H
#define ATARGET_H

#include <string>
#include <iostream>
#include "ASpell.hpp"

class ASpell;

class ATarget
{
	public:
	ATarget (void);
	ATarget (const ATarget &src);
	virtual ~ATarget (void);
	ATarget &operator= (const ATarget &src);

	public:
	ATarget (const std::string &str_type);

	public:
	virtual ATarget *clone (void) const = 0;

	public:
	const std::string &getType (void) const;
	void getHitBySpell (const ASpell &src) const;

	protected:
	std::string type;
};
#endif
