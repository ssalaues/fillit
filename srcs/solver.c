/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   solver.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkok <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/01 09:32:47 by mkok              #+#    #+#             */
/*   Updated: 2017/02/10 01:09:43 by ssalaues         ###   ########.fr       */
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
	while (!allpiecesused(phead))
	{
		map = mapmaker(mapsize);
		maphead = map;
		if (!addallpieces(resetusd(pieces), maphead))
			freemap(map);
		mapsize++;
	}
	return (map);
}
