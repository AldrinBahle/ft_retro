/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Envader.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmtimkul <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/09 10:50:53 by nmtimkul          #+#    #+#             */
/*   Updated: 2019/06/09 10:50:56 by nmtimkul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Envader.hpp"
#include <ncurses.h>
#include <cstdlib>

Envader::Envader( void ) : Character() {
}

Envader::Envader(int x, int y) : Character(x, y){

	char	form[2] = {'X', 'O'};
	_form = form[rand() % 2];
}

Envader::Envader(Envader const & src) : Character(src.getX(), src.getY()){

}


Envader::~Envader( void ) {

}

bool 	Envader::move( int timeFrameCount ) {
	if (_x >= 10)
	{
		if (timeFrameCount % 2 == 0){ 
			_x--;
		}
		return TRUE;
	}
	else
		return FALSE;
}
