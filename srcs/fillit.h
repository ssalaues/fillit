/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fillit.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkok <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/14 12:30:14 by mkok              #+#    #+#             */
/*   Updated: 2017/01/27 14:40:45 by ssalaues         ###   ########.fr       */
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
	char					**loc;
	int						used;
}							t_piece;

t_piece						*rtet(int fd);
int							validatechars(char *tetro);
int							validateshape(char *tetro);
char						**trimtetro(char **tetro);
char						**addtomap(char **map, char **tetro, char c);
char						**makepieces(char *str);
char						**mapmaker(int dimension);
int							filledarea(char **map);
char						**tetrotoalpha(char **map, char **tetro, char c);
int							addallpieces(t_piece *pieces, t_piece *pieceshead, char **map, int mapsize, char **mapori, int amthori);
int							addallpieceshori(t_piece *pieces, t_piece *pieceshead, char **map, int mapsize, char **mapori, int amthori);
int							findheight(char **tetro, char c);
int							findwidth(char **tetro, char c);
int							doesitfit(char **map, char **mapori, int mapsize, char **tetro, char c);
int							allpiecesused(t_piece *pieces);
int							piececount(t_piece *pieceshead);
int							allpiecesfit(char **map, int mapsize, char c);
char						**pmove(char **map, char abc);
int                         ft_sqrt_ceil(unsigned int nb);

#endif
