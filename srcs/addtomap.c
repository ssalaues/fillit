/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   addtomap.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssalaues <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/05 03:00:35 by ssalaues          #+#    #+#             */
/*   Updated: 2017/02/10 00:16:47 by ssalaues         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

void	addtomap(char **map, char **tetro, int x, int y)
{
	int x1;
	int y1;
	int y0;

	x1 = 0;
	y1 = 0;
	y0 = y;
	while (tetro[x1] && map[x])
	{
		while (tetro[x1][y1] && map[x][y])
		{
			if (map[x][y] == '.')
				map[x][y] = tetro[x1][y1];
			y++;
			y1++;
		}
		y1 = 0;
		y = y0;
		x++;
		x1++;
	}
}
