/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   clearmap.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssalaues <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/04 20:51:29 by ssalaues          #+#    #+#             */
/*   Updated: 2017/02/10 01:11:11 by ssalaues         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

char		**clearmapif(char **map, t_piece *piece)
{
	int		y;
	char	**bm;

	y = 0;
	bm = map;
	while (*bm)
	{
		while ((*bm)[y] != 0)
		{
			if ((*bm)[y] == piece->abc)
				(*bm)[y] = '.';
			y++;
		}
		y = 0;
		bm++;
	}
	piece->used = 0;
	return (map);
}

t_piece		*clearusd(t_piece *pieces)
{
	t_piece	*bl;
	int		c;

	bl = pieces;
	c = 0;
	while (bl)
	{
		if (c)
		{
			bl->x = 0;
			bl->y = 0;
		}
		bl->used = 0;
		bl = bl->next;
		c = 1;
	}
	return (pieces);
}

t_piece		*resetusd(t_piece *pieces)
{
	t_piece *bl;

	bl = pieces;
	while (bl)
	{
		bl->x = 0;
		bl->y = 0;
		bl->used = 0;
		bl = bl->next;
	}
	return (pieces);
}

char		**clearmap(char **map, t_piece *pieces)
{
	int		y;
	char	**bm;

	y = 0;
	bm = map;
	while (*bm)
	{
		while ((*bm)[y] != 0)
		{
			if ((*bm)[y] > 64)
				(*bm)[y] = '.';
			y++;
		}
		y = 0;
		bm++;
	}
	clearusd(pieces);
	return (map);
}
