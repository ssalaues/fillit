/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   filledarea.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkok <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/20 15:33:58 by mkok              #+#    #+#             */
/*   Updated: 2017/01/18 11:18:46 by ssalaues         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

int		filledarea(char **map) //must start at map origin
{
	char	*xhead;
	char	*xperm;
	char	*xpos;
	int		x;
	char	**yhead;
	char	**yperm;
	char	**ypos;
	int		y;
	int		count;
	
	count = 0;
	x = 0;
	y = 0;
	xperm = *map;
	yperm = map;
	while (*map)
	{
		xhead = *map;
		xpos = xhead;
		while (**map)
		{
			if (**map == '#' && (((xpos - xhead) + 1) > x))
				x = ((xpos - xhead) + 1);
			(*map)++;
			xpos++;
		}
		*map = xhead;
		xpos = xhead;
		map++;
	}
	map = yperm;
	while (**map)
	{
		yhead = map;
		ypos = yhead;
		while (*map)
		{
			if (ft_isalpha(**map) && (((ypos - yhead) + 1) > y))
				y = ((ypos - yhead) + 1);
			map++;
			ypos++;
		}
		map = yhead;
		ypos = yhead;
		while (*map)
		{
			(*map)++;
			map++;
		}
		count++;
		map = yhead;
	}
	while (count)
	{
		map = yperm;
		while (*map)
		{
			(*map)--;
			map++;
		}
		count--;
	}
	if (x > y)
		return (x * x);
	else
		return (y * y);
}
