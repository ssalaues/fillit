/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   addallpieces.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkok <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/28 13:51:03 by mkok              #+#    #+#             */
/*   Updated: 2017/01/11 16:50:28 by ssalaues         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

int		addallpieces(t_piece *pieces, t_piece *pieceshead, char **map, char **mapori)
{
	int			count;
	int			size;

	count = 0;
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
			return (addallpieces(pieces->next, pieceshead, map, mapori));
		}
		if (!doesitfit(map, (*pieces).data) || pieces->used)
			return (addallpieces(pieces, pieceshead, map + 1, mapori));
	}
	return (0);
}
