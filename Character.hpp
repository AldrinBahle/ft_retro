/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmtimkul <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/09 10:50:11 by nmtimkul          #+#    #+#             */
/*   Updated: 2019/06/09 10:50:16 by nmtimkul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ncurses.h>

#ifndef Character_HPP
# define Character_HPP


class Character
{
public:

	Character(void);
	Character(int x, int y);
	Character(Character const & src);
	virtual ~Character();
	
	Character const &	operator=(Character const & rdh);
	virtual bool	move( int ) = 0;

	bool colision(Character*&);
	virtual void toPrint();
	int		getX( void ) const ;
	int		getY( void ) const ;

protected:

	int _x;
	int _y;
	char _form;
};

#endif
