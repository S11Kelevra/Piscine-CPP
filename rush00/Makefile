#******************************************************************************#
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: hlecuyer <hlecuyer@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2015/01/11 22:01:32 by hlecuyer          #+#    #+#              #
#    Updated: 2015/04/11 17:20:23 by hlecuyer         ###   ########.fr        #
#                                                                              #
#******************************************************************************#

CXX = clang++
CXXFLAGS = -Wall -Werror -Wextra
CXXXFLAGS = -Wall -Werror -Wextra -lncurses
NAME = ft_retro

SRC = AScreenElement.cpp Bullet.cpp Enemy.cpp main.cpp SpaceShip.cpp Window.cpp EnemyBullet.cpp

OBJ = $(SRC:.cpp=.o)

all: $(NAME)

$(NAME): $(OBJ)
	$(CXX) $(CXXXFLAGS) -o $(NAME) $(OBJ)

%.o: %.cpp
	$(CXX) $(CXXFLAGS) -o $@ -c $<

clean:
	rm -rf $(OBJ)

fclean: clean
	rm -rf $(NAME)

re: fclean all