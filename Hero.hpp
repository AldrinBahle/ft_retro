/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Hero.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmtimkul <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/09 10:51:43 by nmtimkul          #+#    #+#             */
/*   Updated: 2019/06/09 10:51:45 by nmtimkul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Character.hpp"

#ifndef HERO_HPP
# define HERO_HPP


class Hero : public Character
{
public:
	Hero(void);
	Hero(int x, int y);
	Hero(Hero const & src);
	~Hero();
	using Character::operator=;
	bool	move( int );
	void	move( int const, int const);
	char 	getForm();
	int		life;

private:
};

#endif
