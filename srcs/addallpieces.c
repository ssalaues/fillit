/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   addallpieces.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkok <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/28 13:51:03 by mkok              #+#    #+#             */
/*   Updated: 2017/01/12 18:34:47 by ssalaues         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

int		addallpieces(t_piece *pieces, t_piece *pieceshead, char **map, int mapsize, char **mapori)
{
	int			tx;
	int			ty;


	ty = 0;
	tx = 0;
	while (!allpiecesused(pieceshead))
	{
		printf("Checking tetromino %c\n", pieces->abc);
		printf("Does it fit: %i\n", doesitfit(map, (*pieces).data, pieces->abc));
		printf("Has the tetromino been used: %i\n\n", pieces->used);
		while (doesitfit(map, (*pieces).data, pieces->abc) && !pieces->used)
		{
			pieces->loc = map;
			map = addtomap(map, (*pieces).data, pieces->abc);
			pieces->used = 1;
			printf("%c\n", pieces->abc);
            printf("Piece:\n%s\n", *(pieces->data));
			return (addallpieces(pieces->next, pieceshead, map, mapsize, mapori));
		}
		tx++;
		if (!doesitfit(map, pieces->data, pieces->abc))
			return (addallpieces(pieces, pieceshead, map + 1, mapsize, mapori));
	ty++;
	}
	return (0);
}


