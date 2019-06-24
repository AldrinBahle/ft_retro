/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bullet.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmtimkul <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/09 10:55:01 by nmtimkul          #+#    #+#             */
/*   Updated: 2019/06/09 10:55:09 by nmtimkul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bullet.hpp"
#include "Display.hpp"

Bullet::Bullet( void ) : Character() {
}

Bullet::Bullet(int x, int y) : Character(x, y) {
	_form = '*';
}

Bullet::Bullet(Bullet const & src) : Character(src.getX(), src.getY()) {

}

Bullet::~Bullet( void ) {

}

bool 	Bullet::move( int timeFrameCount) {

	if (_x > SCRWIDTH + SCRSTARTX - 3)
			return FALSE;
	if (timeFrameCount % 1 == 0){
		_x++;
	} 
	return TRUE;
}
