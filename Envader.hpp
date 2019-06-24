/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Envader.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmtimkul <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/09 10:51:01 by nmtimkul          #+#    #+#             */
/*   Updated: 2019/06/09 10:51:04 by nmtimkul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Character.hpp"

#ifndef Envader_HPP
 #define Envader_HPP

class Envader : public Character
{
public:
	Envader(void);
	Envader(int x, int y);
	Envader(Envader const & src);
	~Envader();
	using Character::operator=;
	bool	move( int );

};

#endif
