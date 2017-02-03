/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fillit.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkok <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/14 12:30:14 by mkok              #+#    #+#             */
/*   Updated: 2017/02/02 11:35:28 by mkok             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FILLIT_H
# define FILLIT_H
# define BUF 10240
# include <stdlib.h>
# include <unistd.h>
# include <fcntl.h>
# include <string.h>
# include <stdio.h>
# include "../libft/libft.h"

typedef struct				s_piece
{
	struct s_piece			*next;
	char					**data;
	char					abc;
	int						used;
}							t_piece;

int							filledarea(char **map);


t_piece						*rtet(int fd);
char						**put_alpha(char **piece, char c);
int							validatechars(char *tetro);
int							validateshape(char *tetro);
void						freemap(char **map);
void						resetused(t_piece *pieces);
void						printtetros(t_piece *pieces);
int							fwidth(char **tetro, char c);
int							fheight(char **tetro, char c);
char						**mapmaker(int dimension);
void						addtomap(char **map, char **tetro);
char						**trimtetro(char **tetro);
void						trimall(t_piece *pieces);
int							piececount(t_piece *pieces);
void						printmap(char **map);
char						**solver(t_piece *pieces);
int							allpiecesused(t_piece *pieces);
int							addallpieces(t_piece *pieces, char **map);
int							doesitfit(t_piece *piece, char **map);
int							ft_sqrt_ceil(unsigned int nb);

void						moveback(char **map, int amthori);
void						moveforward(char **map);

#endif
