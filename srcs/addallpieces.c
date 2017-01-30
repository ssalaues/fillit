/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   addallpieces.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkok <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/28 13:51:03 by mkok              #+#    #+#             */
/*   Updated: 2017/01/27 14:55:45 by ssalaues         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

int		addallpieces(t_piece *pieces, t_piece *pieceshead, char **map, int mapsize, char **mapori, int amthori)
{
	int			count;
	int			size;

	size = mapsize;
	count = 0;
	printf("have all tetrominos been used: %i\n", allpiecesused(pieceshead));
	printf("Filled area: %d\n\n", filledarea(mapori));
	if (!allpiecesused(pieceshead)/* && (filledarea(mapori) <= (mapsize * mapsize))*/)
	{
		printf("Checking tetromino %c\n", pieces->abc);
		printf("Does it fit: %i\n", doesitfit(map, mapori, mapsize, (*pieces).data, pieces->abc));
		printf("Has the tetromino been used: %i\n\n", pieces->used);
		if (doesitfit(map, mapori, mapsize, (*pieces).data, pieces->abc) && !pieces->used)
		{
			pieces->loc = map;
			map = addtomap(map, (*pieces).data, pieces->abc);
			pieces->used = 1;
			printf("%c\n", pieces->abc);
			addallpieces(pieces->next, pieceshead, mapori, mapsize, mapori, amthori)/* ||addallpieceshori(pieces->next, pieceshead, mapori, mapsize, mapori, amthori)*/;
		}
		if (((!doesitfit(map, mapori, mapsize, (*pieces).data, pieces->abc)) || pieces->used) && *map && map)
		{
			printf("incrementing map...\n");
			addallpieces(pieces, pieceshead, mapmaker(mapsize + 1), mapsize + 1, mapori, amthori)/* || addallpieceshori(pieces, pieceshead, map, mapsize, mapori, amthori)*/;
		}
	}
	return (0);
}
