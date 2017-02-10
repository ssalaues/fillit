# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mkok <marvin@42.fr>                        +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2016/12/12 19:16:20 by mkok              #+#    #+#              #
#    Updated: 2017/02/10 00:57:48 by ssalaues         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = fillit

SRCS = \
		./srcs/rtet.c				\
		./srcs/validatechars.c		\
		./srcs/validateshape.c		\
		./srcs/addtomap.c			\
		./srcs/mapmaker.c			\
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
		./srcs/moveforward.c		\
		./srcs/clearmap.c

all: $(NAME)

$(NAME): lib
	@gcc -Wall -Wextra -Werror $(SRCS) -Llibft -lft -o fillit

lib:
	@cd libft && make re

clean:
	@echo "Cleaning Fillit"
	@/bin/rm -f $(OBJS)
	@echo "Done"
	@cd libft && make clean

fclean: clean
	@echo "fCleaning Fillit"
	@/bin/rm -f $(NAME)
	@echo "Done"
	@cd libft && make fclean

re: fclean all
