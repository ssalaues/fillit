/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   driver_rtet.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssalaues <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/18 19:07:49 by ssalaues          #+#    #+#             */
/*   Updated: 2017/01/12 12:52:51 by ssalaues         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

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
	
	mapsize = 25;
//	bestmap = 0;
	map = mapmaker(mapsize);
	maphead = map;
	if (ac != 2)
		return (0);
	pieces = rtet(open(av[1], O_RDONLY));
	phead = pieces;
	if (!pieces) //Handles if validatechars or validateshape is invalid
		return (0);
	pieceshead = pieces;
//	while (pieces->next)
//	{
//		pieces->data = trimtetro(pieces->data);
//		pieces = pieces->next;
//	}
//	pieces = pieceshead;
	printf("The piece count is : %i\n", piececount(pieces));
	//	while (!allcombosexplored) // did not make yet
//	{
		addallpieces(pieces, pieceshead, map, mapsize, maphead);
		printf("Map size: %i\n", filledarea(map));

//		sol1 = map;
//		rotatepieces(); // did not make yet
//		a
//	}
	pieces = phead;
	map = maphead;
//	if ((filledarea(map) <  filledarea(bestmap)) || bestmap == 0)
//		bestmap = map;
	while (*maphead)
	{
		printf("%s\n", *maphead);
		maphead++;
	}
	return (0);
}
