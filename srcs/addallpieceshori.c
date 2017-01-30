/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   addallpieceshori.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkok <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/05 17:02:43 by mkok              #+#    #+#             */
/*   Updated: 2017/01/27 12:43:44 by mkok             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

int		addallpieceshori(t_piece *pieces, t_piece *pieceshead, char **map, int mapsize, char **mapori, int amthori)
{
	int		count;
	int		size;
	char	**maptemp;
	char	**maptemphead;

	size = mapsize;
	count = 0;
	maptemp = map;
	maptemphead = map;
	while (*maptemp)
	{
		(*maptemp)++;
		maptemp++;
		count++;
	}
	maptemp = maptemp - count;
	amthori++;
	if (!allpiecesused(pieceshead) && (filledarea(mapori) <= (mapsize * mapsize)))
	{
		printf("Checking tetromino %c\n", pieces->abc);
		printf("Does it fit: %i\n", doesitfit(maptemp, mapori, mapsize, (*pieces).data, pieces->abc));
		printf("Has the tetromino been used: %i\n\n", pieces->used);
		if (doesitfit(maptemp, mapori, mapsize, (*pieces).data, pieces->abc) && !pieces->used)
		{
			pieces->loc = map;
			maptemp = addtomap(map, (*pieces).data, pieces->abc);
			pieces->used = 1;
			printf("%c\n", pieces->abc);
			return (/*addallpieces(pieces->next, pieceshead, mapori, mapsize, mapori, amthori) ||*/ addallpieceshori(pieces->next, pieceshead, mapori, mapsize, mapori, amthori));
		}
		if (((!doesitfit(maptemp, mapori, mapsize, (*pieces).data, pieces->abc)) || pieces->used) && *map && map)
		{
			printf("incrementing map... \n");
			return (/*addallpieces(pieces, pieceshead, maptemp, mapsize + 1, mapori, amthori) ||*/ addallpieceshori(pieces, pieceshead, maptemp, mapsize, mapori, amthori));
		}
	}
	while (amthori) //MIGHT ALSO BE ADDED TO ADDALLPIECES CUZ THE LAST RECURSIVE CALL COULD BE TO ADDALLPIECES AND NOT ADDALLPIECESHORI
	{
		while (*maptemp)
		{
			(*maptemp)--;
			maptemp++;
		}
		maptemp = maptemp - count;
		amthori--;
	}
	return (0);
}
