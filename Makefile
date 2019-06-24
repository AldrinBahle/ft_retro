# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: nmtimkul <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/06/09 10:51:59 by nmtimkul          #+#    #+#              #
#    Updated: 2019/06/09 10:52:02 by nmtimkul         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = ft_retro
C++ = clang++
FLAGS = -Wall -Werror -Wextra
CFLAGS = -Wall -Werror -Wextra -lncurses

SRC = Character.cpp Bullet.cpp Envader.cpp main.cpp Hero.cpp Display.cpp EnvaderBullet.cpp

OBJ = $(SRC:.cpp=.o)

all: $(NAME)

$(NAME): $(OBJ)
	$(C++) $(CFLAGS) -o $(NAME) $(OBJ)

%.o: %.cpp
	$(C++) $(FLAGS) -o $@ -c $<
	@echo Compiling...

clean:
	rm -rf $(OBJ)
	@echo *.o removed

fclean: clean
	rm -rf $(NAME)
	@echo Done!!!

re: fclean all
