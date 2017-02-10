/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   addallpieces.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkok <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/01 09:39:19 by mkok              #+#    #+#             */
/*   Updated: 2017/02/10 00:43:49 by ssalaues         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

int	addallpieces(t_piece *pieces, char **map)
{
	if (!pieces && allpiecesused(pieces))
		return (1);
	while (map[pieces->x])
	{
		while (map[pieces->x][pieces->y] != '\0')
		{
			if (doesitfit(pieces, map, pieces->x, pieces->y))
			{
				pieces->used = 1;
				addtomap(map, pieces->data, pieces->x, pieces->y);
				if (addallpieces(pieces->next, map))
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
