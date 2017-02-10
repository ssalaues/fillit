/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   addallpieces.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkok <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/01 09:39:19 by mkok              #+#    #+#             */
/*   Updated: 2017/02/05 18:48:42 by ssalaues         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

int     addallpieces(t_piece *pieces, t_piece *bl, char **map)
{
//	int			x;
//	int			y;

//	x = 0;
//	y = 0;
	if (!pieces && allpiecesused(pieces))
		return (1);
	while (map[pieces->x])
	{
		while (map[pieces->x][pieces->y] != '\0')
		{
//			printf("Checking tetro %c\nDoes it fit: %i\n", pieces->abc, doesitfit(pieces, map, pieces->x, pieces->y));
			if (doesitfit(pieces, map, pieces->x, pieces->y))
			{
                pieces->used = 1;
                addtomap(map, pieces->data, pieces->x, pieces->y);
                if (addallpieces(pieces->next, bl, map))
                    return (1);
                else
                    clearmapif(map, clearusd(pieces));
            }
            pieces->y++;
		}
        pieces->y = 0;
        pieces->x++;
	}
	return (0);
}
/*
int addallpieces(t_piece *pieces, t_piece *bl)
{
    if (!pieces)
        return (1);
    while (mapsize > x)
    {
        
    }
}*/
