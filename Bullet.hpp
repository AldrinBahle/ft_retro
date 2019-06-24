/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bullet.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmtimkul <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/09 10:49:41 by nmtimkul          #+#    #+#             */
/*   Updated: 2019/06/09 10:49:45 by nmtimkul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Character.hpp"

#ifndef Bullet_HPP
 #define Bullet_HPP

class Bullet : public Character
{
public:
	Bullet(void);
	Bullet(int x, int y);
	Bullet(Bullet const & src);
	~Bullet();
	using Character::operator=;
	bool	move( int );
	bool colision(Character const & );
};

#endif
