/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   doesitfit.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkok <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/01 10:22:58 by mkok              #+#    #+#             */
/*   Updated: 2017/02/01 14:26:23 by mkok             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

int		doesitfit(t_piece *piece, char **map, int mapsize)
{
    int     x;
    int     y;
	int		count;
    char    **tet;

    x = 0;
    y = 0;
	count = 0;
    tet = piece->data;
	while (mapsize > x)
	{
		while (map[x][y] != 0 && tet[x][y] != 0)
		{
			if (map[x][y] == '.' && ft_isalpha(tet[x][y]))
				count++;
			if (count == 4)
				return (1);
            y++;
		}
        y = 0;
        x++;
        if (tet[x] == 0)
            return (0);
	}
	return (0);
}
