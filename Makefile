# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mkok <marvin@42.fr>                        +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2016/12/12 19:16:20 by mkok              #+#    #+#              #
#    Updated: 2017/02/02 11:45:56 by mkok             ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = fillit

SRCS = \
		./srcs/rtet.c				\
		./srcs/validatechars.c		\
		./srcs/validateshape.c		\
		./srcs/addtomap.c			\
		./srcs/mapmaker.c			\
		./srcs/fheight.c			\
		./srcs/fwidth.c				\
		./srcs/resetused.c			\
		./srcs/freemap.c			\
		./srcs/trimtetro.c			\
		./srcs/trimall.c			\
		./srcs/printtetros.c		\
		./srcs/main.c				\
		./srcs/put_alpha.c			\
		./srcs/piececount.c			\
		./srcs/printmap.c			\
		./srcs/solver.c				\
		./srcs/addallpieces.c		\
		./srcs/allpiecesused.c		\
		./srcs/doesitfit.c			\
		./srcs/ft_sqrt_ceil.c		\
		./srcs/moveback.c			\
		./srcs/moveforward.c

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
