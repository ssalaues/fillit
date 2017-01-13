# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mkok <marvin@42.fr>                        +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2016/12/12 19:16:20 by mkok              #+#    #+#              #
#    Updated: 2017/01/12 23:35:21 by ssalaues         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = fillit

SRCS = \
	    ./srcs/fillit.h				\
		./srcs/trimtetro.c			\
		./srcs/main.c				\
		./srcs/rtet.c				\
		./srcs/validatechars.c		\
		./srcs/validateshape.c		\
		./srcs/addtomap.c			\
		./srcs/mapmaker.c			\
		./srcs/filledarea.c			\
		./srcs/tetrotoalpha.c		\
		./srcs/addallpieces.c		\
		./srcs/allpiecesused.c		\
		./srcs/piececount.c			\
		./srcs/findheight.c			\
		./srcs/findwidth.c			\
		./srcs/put_alpha.c			\
		./srcs/doesitfit.c	

all: $(NAME)

$(NAME): lib
	@gcc -Wall -Wextra -Werror $(SRCS) -Llibft -lft -g

lib:
	@cd libft && make

clean:
	/bin/rm -f $(OBJS)

fclean: clean
	/bin/rm -f $(NAME)
	/bin/rm a.out

re: fclean all
