/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   EnvaderBullet.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmtimkul <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/09 10:51:16 by nmtimkul          #+#    #+#             */
/*   Updated: 2019/06/09 10:51:19 by nmtimkul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "EnvaderBullet.hpp"
 #include "Display.hpp"

EnvaderBullet::EnvaderBullet( void ) : Character() {
	_form = '-';
}

EnvaderBullet::EnvaderBullet(int x, int y) : Character(x, y) {
	_form = '-';
}

EnvaderBullet::EnvaderBullet(EnvaderBullet const & src) : Character(src.getX(), src.getY()) {

}

EnvaderBullet::~EnvaderBullet( void ) {

}

bool 	EnvaderBullet::move( int timeFrameCount) {

	if (_x < SCRSTARTX + 3)
			return FALSE;
	if (timeFrameCount % 1 == 0){
		_x--;
	} 
	return TRUE;
}
