/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   EnvaderBullet.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmtimkul <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/09 10:51:23 by nmtimkul          #+#    #+#             */
/*   Updated: 2019/06/09 10:51:25 by nmtimkul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Character.hpp"

#ifndef Invader_Bullet_HPP
 #define Invader_Bullet_HPP

class EnvaderBullet : public Character
{
public:
	EnvaderBullet(void);
	EnvaderBullet(int x, int y);
	EnvaderBullet(EnvaderBullet const & src);
	~EnvaderBullet();
	using Character::operator=;
	bool	move( int );
	bool colision(Character const & elem);
};

#endif
