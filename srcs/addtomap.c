/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   addtomap.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkok <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/18 19:08:27 by mkok              #+#    #+#             */
/*   Updated: 2017/01/19 14:24:05 by mkok             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

char	**addtomap(char **map, char **tetro, char c)
{
	char	**maphead;
	char	**tetrohead;
	char	*tetrochar;
	char	*mapchar;

	c++;
	maphead = map;
	tetrohead = tetro;
	while (*tetro && *map)
	{
		tetrochar = *tetro;
		mapchar = *map;
		while (**tetro && **map)
		{
		//	if (**tetro == c && **map == '.')
			if (**map == '.')
		//	{
				**map = **tetro;
			(*tetro)++;
		//	}
		//	if (**tetro == '.' && **map == '.')
		//		(*tetro)++;
			(*map)++;
		}
		*tetro = tetrochar;
		*map = mapchar;
		ft_putstr(*map);
		ft_putchar('\n');
		tetro++;
		map++;
	}
	tetro = tetrohead;
	map = maphead;
//	printf("\n%s\n", *map);
	return (map);
}
