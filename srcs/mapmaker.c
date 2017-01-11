/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   map.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkok <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/18 17:12:15 by mkok              #+#    #+#             */
/*   Updated: 2016/12/18 18:22:14 by mkok             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

char		**mapmaker(int dimension)
{
	char	**map;
	int		i;

	i = dimension;
	map = (char **)malloc(sizeof(char *) * (dimension + 1));
	if (map)
	{
		while (i-- > 0)
		{
			*map = (char *)malloc(sizeof(char) * (dimension + 1));
			if (*map)
			{
				ft_memset(*map, '.', dimension);
				*map = *map + dimension;
				**map = '\0';
				*map = *map - dimension;
				map++;
			}
			else
				return (0);
		}
		*map = 0;
		return (map - dimension);
	}
	return (0);
}
