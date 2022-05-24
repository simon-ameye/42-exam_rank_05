/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BrickWall.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sameye <sameye@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/20 17:23:38 by sameye            #+#    #+#             */
/*   Updated: 2022/05/23 14:48:33 by sameye           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef BRICKWALL_H
#define BRICKWALL_H

#include <string>
#include <iostream>

#include "ATarget.hpp"

class BrickWall : public ATarget
{
	public:
	BrickWall (void);
	virtual BrickWall *clone (void) const;
};

#endif