/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Hero.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmtimkul <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/09 10:51:35 by nmtimkul          #+#    #+#             */
/*   Updated: 2019/06/09 10:51:38 by nmtimkul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Hero.hpp"
#include "Display.hpp"
#include <ncurses.h>

Hero::Hero( void ) : Character(){
	_form = '>';
	life = 4;
}

Hero::Hero(int x, int y) : Character(x, y){
	_form = '>';
	life = 4;
}

Hero::Hero(Hero const & src) : Character(src.getX(), src.getY()){

}


Hero::~Hero( void ) {

}

bool 	Hero::move( int timeFrameCount) {
	if (timeFrameCount == 0)
		return 1;
	return 0;
}

void 	Hero::move( int const input, int timeFrameCount) {
	if (timeFrameCount){
		if (input == KEY_UP && _y > (SCRSTARTY + 1))
			_y--;
		else if (input == KEY_DOWN && _y < (SCRSTARTY + SCRHEIGHT - 2))
			_y++;
	}
}
