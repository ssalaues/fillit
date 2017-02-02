/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   solver.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkok <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/01 09:32:47 by mkok              #+#    #+#             */
/*   Updated: 2017/02/02 10:34:17 by ssalaues         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

char		**solver(t_piece *pieces)
{
	int		mapsize;
	char	**map;
	char	**maphead;
	t_piece	*phead;

	phead = pieces;
	mapsize = ft_sqrt_ceil(piececount(phead));
//	map = mapmaker(mapsize);
//	maphead = map;
//	addallpieces(phead, maphead);
//	printf("All pieces used: %i\n\n\n", allpiecesused(phead));
	while (!allpiecesused(phead))
	{
	//	printf("MEGAPOOP\n");
		mapsize++;
//		freemap(map);
		resetused(phead);
		map = mapmaker(mapsize);
		maphead = map;
		addallpieces(phead, maphead);
//		if (allpiecesused(phead))
//			printmap(maphead);
	}
	return (map);
}

