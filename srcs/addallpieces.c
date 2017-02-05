/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   addallpieces.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkok <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/01 09:39:19 by mkok              #+#    #+#             */
/*   Updated: 2017/02/05 02:18:25 by ssalaues         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

int		addallpieces(t_piece *pieces, t_piece *bl, char **map, int mapsize)
{
	int			x;
	int			y;

	x = 0;
	y = 0;
	if (!pieces)
		return (1);
	while (mapsize > x)
	{
		while (map[x][y] != 0/* && !ft_isalpha((*map)[y])*/)
		{
			printf("Checking tetro %c\nDoes it fit: %i\n", pieces->abc, doesitfit(pieces, map, x, y));
			if (doesitfit(pieces, map, x, y))
			{
                addtomap(map, pieces->data, x, y);
				addallpieces(pieces->next, bl, map, mapsize);
                pieces->used = 1;
            }
//			moveforward(map);
			y++;
		}
        y = 0;
        x++;
//		moveback(map, amthori);
	}
//    if (!allpiecesused(pieces))
//        addallpieces(pieces, mapmaker(mapsize + 1), mapsize + 1);
	return (0);
}

/*int addallpieces(t_piece *pieces, t_piece *bl)
{
    if (!pieces)
        return (1);
    while (mapsize > x)
    {
        
    }
}*/