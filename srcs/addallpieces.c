/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   addallpieces.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkok <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/28 13:51:03 by mkok              #+#    #+#             */
/*   Updated: 2017/01/06 15:33:15 by mkok             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

int		addallpieces(t_piece *pieces, t_piece *pieceshead, char **map, int mapsize, char **mapori)
//{
	/*while (!)//havent created it yet but its based of the function has 
	{
	   while (!allpiecesused(pieceshead))
	   { 
		   	if (!doesitfit(map, pieces->data) || pieces->used)
				return (addallpieceshori(pieces, pieceshead, map) || addallpieces(pieces, pieceshead, map + 1));
			if (doesitfit(map, pieces->data) && !pieces->used)
			{
				pieces->loc = map;
				map = addtomap(map, (pieces->data));
				pieces->used = 1;
				return (addallpieces(pieces->next, pieceshead, map));
			}
			if (doesitfit(map, pieces->data))
			{
				//do opposite of previous doesitfit
			}
		}
	   //fucntion to swap through nodes in list to get a different order of tetros to start
	}*/
//}
{
	int			count;
	int			size;

	size = mapsize;
	count = 0;
//	printf("have all tetrominos been used: %i\n", allpiecesused(pieceshead));
//	printf("Do all tetrominos fit: %i\n", allpiecesfit(mapori, mapsize));
/*	if (!allpiecesfit(mapori, mapsize) && allpiecesused(pieceshead))
	{
		while (size)
		{
			ft_memset(*map, '.', ft_strlen(*map));
			map++;
			size--;
		}
		map = map - mapsize;
		return (0);
	}*/
	if (!allpiecesused(pieceshead))
	{
		printf("Checking tetromino %c\n", pieces->abc);
		printf("Does it fit: %i\n", doesitfit(map, (*pieces).data));
		printf("Has the tetromino been used: %i\n\n", pieces->used);
		if (doesitfit(map, (*pieces).data) && !pieces->used)
		{
			pieces->loc = map;
			map = addtomap(map, (*pieces).data);
			pieces->used = 1;
			printf("%c\n", pieces->abc);
			return (addallpieces(pieces->next, pieceshead, map, mapsize, mapori));
		}
		if (!doesitfit(map, (*pieces).data) || pieces->used)
			return (addallpieces(pieces, pieceshead, map + 1, mapsize, mapori));// || addallpieceshori(pieces, pieceshead, map + 1, mapsize));
	}
	return (0);
}
	/*	while (*map) //needed to horizontally add tetrominos
		{
			*map = *map + 1;
			map++;
			count++;
		}*/
//	pieces = pieces->next;
	//	return (addallpieces(pieces, map - count)); 
	//	return (addallpieces(pieces, map + 1));
/*	if (pieces->next == 0 && !pieces->used)
	{
		(*pieces).data = trimtetro((*pieces).data);
		if (doesitfit(map, (*pieces).data))
		{
			pieces->loc = map;
			map = addtomap(map, (*pieces).data);
			pieces->used = 1;
		}
		while (*map)
		{
			count = 0;
			*map = *map + 1;
			map++;
			count++;
		}
		return (addallpieces(pieces, map - count));
	}*/
//	while (*map)
//	{
//		*map = *map - 2;
//		map++;
//	}
//	map = map - count;
//	return ;
