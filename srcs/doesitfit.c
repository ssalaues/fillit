/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   doesitfit.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssalaues <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/05 02:00:11 by ssalaues          #+#    #+#             */
/*   Updated: 2017/02/10 00:41:45 by ssalaues         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

int	doesitfit(t_piece *piece, char **map, int x, int y)
{
	int count;
	int x1;
	int y1;
	int y0;

	count = 0;
	x1 = 0;
	y0 = y;
	while (piece->data[x1] && map[x])
	{
		y1 = 0;
		while (piece->data[x1][y1] && map[x][y])
		{
			if (map[x][y] == '.' && ft_isalpha(piece->data[x1][y1]))
				count++;
			if (count == 4)
				return (1);
			y++;
			y1++;
		}
		y = y0;
		x++;
		x1++;
	}
	return (0);
}
