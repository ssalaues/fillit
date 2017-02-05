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

int		doesitfit(t_piece *piece, char **map, int x, int y)
{
//    int     x;
//    int     y;
	int		count;
    char    **tet;
    char    *stet;

//    x = 0;
//    y = 0;
	count = 0;
    tet = piece->data;
    stet = *tet;
    while (*tet)
	{
		while (map[x][y] != '\0' && *stet != '\0')
		{
			if (map[x][y] == '.' && ft_isalpha(*stet))
				count++;
			if (count == 4)
				return (1);
            stet++;
            y++;
		}
//        y = 0;
        stet = *tet;
        tet++;
//        if (tet[x] == 0)
//            return (0);
	}
	return (0);
}

int doesitfit(t_piece *piece, char **map, int x, int y)
{
    char    *t;
    char    *m;
    
    t = *(piece->data);
    m = *map;
    while (*(piece->data) && *map)
    {
        
    }
}