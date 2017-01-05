#******************************************************************************#
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: nfruneau <nfruneau@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2015/04/18 16:25:41 by nfruneau          #+#    #+#              #
#    Updated: 2015/04/18 16:25:41 by nfruneau         ###   ########.fr        #
#                                                                              #
#******************************************************************************#

CXX           = g++
FLAGS		  = -Wall -Wextra -Werror
NAME	      = ft_gkrellm

INCPATH       = -I ~/Qt/5.4/clang_64/lib/QtWidgets.framework/Versions/5/Headers \
				-I ~/Qt/5.4/clang_64/lib/QtGui.framework/Versions/5/Headers \
				-I ~/Qt/5.4/clang_64/lib/QtCore.framework/Versions/5/Headers \
				-I. -F ~/Qt/5.4/clang_64/lib

LIBS          = -lncurses -framework QtWidgets -framework QtGui -framework QtCore

SRC           = main.cpp AWindow.cpp CPU.cpp Hostname.cpp Hour.cpp OSInfo.cpp window.cpp moc_window.cpp Network.cpp RAM.cpp Ncurses.cpp GraphMode.cpp
OBJ 		  = $(SRC:.cpp=.o)

all: $(NAME)

$(NAME):  $(OBJ)
	$(CXX) $(FLAGS) $(INCPATH) -o $@ $^ $(LIBS)

%.o: %.cpp
	$(CXX) $(FLAGS) $(INCPATH) -o $@ -c $<

clean:
	rm -rf $(OBJ)

fclean: clean
	rm -rf ft_gkrellm

re: fclean all
