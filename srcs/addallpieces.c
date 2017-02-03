/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   addallpieces.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkok <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/01 09:39:19 by mkok              #+#    #+#             */
/*   Updated: 2017/02/02 16:06:57 by ssalaues         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

int		addallpieces(t_piece *pieces, char **map)
{
	int			x;
	int			y;
	int			amthori;

	x = 0;
	y = 0;
	amthori = 0;
	if (!pieces)
		return (1);
	while (map[x][y] != 0)
	{
		y = 0;
		while (map[x][y] != 0)
		{
			printf("Checking tetro %c\nDoes it fit: %i\n", pieces->abc, doesitfit(pieces, map));
			if (doesitfit(pieces, map))
			{
				addtomap(map, pieces->data);
				pieces->used = 1;
				addallpieces(pieces->next, map);
			}
//			moveforward(map);
			amthori++;
			y++;
		}
//		moveback(map, amthori);
		x++;
	}
/*	if (*map &&  && doesitfit(pieces, maphead))
	{
		addtomap(maphead, pieces->data);
		pieces->used = 1;
		addallpieces(pieces->next, maphead);
	}*/
	return (1);
}
