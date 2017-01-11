# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mkok <marvin@42.fr>                        +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2016/12/12 19:16:20 by mkok              #+#    #+#              #
#    Updated: 2017/01/01 16:39:53 by mkok             ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = fillit

SRCS = \
	    ./srcs/fillit.h				\
		./srcs/trimtetro.c			\
		./srcs/driver_rtet.c		\
		./srcs/rtet.c				\
		./srcs/validatechars.c		\
		./srcs/validateshape.c		\
		./srcs/addtomap.c			\
		./srcs/mapmaker.c			\
		./srcs/filledarea.c			\
		./srcs/tetrotoalpha.c		\
		./srcs/addallpieces.c		\
		./srcs/findheight.c			\
		./srcs/findwidth.c			\
		./srcs/doesitfit.c	

all: $(NAME)

$(NAME): lib
	@gcc -Wall -Wextra -Werror $(SRCS) -Llibft -lft

lib:
	@cd libft && make

clean:
	/bin/rm -f $(OBJS)

fclean: clean
	/bin/rm -f $(NAME)
	/bin/rm a.out

re: fclean all
