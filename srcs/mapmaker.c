/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mapmaker.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkok <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/01 08:19:43 by mkok              #+#    #+#             */
/*   Updated: 2017/02/01 08:19:46 by mkok             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

char		**mapmaker(int dimension)
{
	char	**map;
	int		i;

	i = dimension;
	map = (char **)ft_memalloc(sizeof(char *) * (dimension + 1));
	if (map)
	{
		while (i-- > 0)
		{
			*map = (char *)ft_memalloc(sizeof(char) * (dimension + 1));
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
