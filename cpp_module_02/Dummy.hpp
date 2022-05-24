/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dummy.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sameye <sameye@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/20 17:23:38 by sameye            #+#    #+#             */
/*   Updated: 2022/05/23 14:48:33 by sameye           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef DUMMY_H
#define DUMMY_H

#include <string>
#include <iostream>

#include "ATarget.hpp"

class Dummy : public ATarget
{
	public:
	Dummy (void);
	virtual Dummy *clone (void) const;
	
};

#endif