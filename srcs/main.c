/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   driver_rtet.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssalaues <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/18 19:07:49 by ssalaues          #+#    #+#             */
/*   Updated: 2017/01/27 12:24:49 by mkok             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"
#include <math.h>

int    main(int ac, char **av)
{
//	t_piece		*sol1;
//	t_piece		*sol2;
	t_piece		*pieces;
	t_piece		*pieceshead;
	char		**map;
	char		**maphead;
	t_piece		*phead;
//	char		**bestmap;
	int			mapsize;
	int			amthori;
	char		**temp;

	amthori = 0;	
//	bestmap = 0;
	if (ac != 2)
		return (0);
	pieces = rtet(open(av[1], O_RDONLY));
	phead = pieces;
	if (!pieces) //Handles if validatechars or validateshape is invalid
		return (0);
	pieceshead = pieces;
	if (pieces->next == 0)
		pieces->data = trimtetro(pieces->data);
	while (pieces->next)
	{
		pieces->data = trimtetro(pieces->data);
		pieces = pieces->next;
	}
	pieces = pieceshead;
	//	while (!allcombosexplored) // did not make yet
//	{
		mapsize = ft_sqrt_ceil(piececount(pieces));
		map = mapmaker(mapsize);
		maphead = map;
		temp = map;
		addallpieces(pieces, pieceshead, map, mapsize, maphead, amthori);
	//	while (amthori)
	//	{
	//		temp = 0;
	//		while (*map)
	//		{
	//			(*map)--;
	//			map++;
	//			temp++;
	//		}
	//		map = map - temp;
	//		amthori--;
	//	}
//		pieces = pieceshead;
//		map = maphead;
//		if (!allpiecesused(pieces))
//		{
//			mapsize = mapsize + 1;
//			free (map);
//			map = mapmaker(mapsize);
//			maphead = map;
//			pieces = pieceshead;
//		}
//		if (allpiecesused(pieces))
//		{
//			sol1 = pieces;
//		}
//		rotatepieces(); // did not make yet
//		a
//	}
	pieces = phead;
	map = maphead;
//	if ((filledarea(map) <  filledarea(bestmap)) || bestmap == 0)
//		bestmap = map;
	
	while (*temp)
	{
		printf("%s\n", *temp);
		temp++;
	}
	return (0);
}
