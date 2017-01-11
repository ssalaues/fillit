/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tetrotoalpha.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkok <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/22 13:21:46 by mkok              #+#    #+#             */
/*   Updated: 2016/12/28 12:16:20 by mkok             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

char	**tetrotoalpha(char **map, char **tetro,  char c)
{
	char	**maphead;
	char	*mapchar;
	char	**tetrohead;
	char	*tetrochar;

	tetrohead = tetro;
	maphead = map;
	while (*map)
	{
		mapchar = *map;
		tetrochar = *tetro;
		while (**map)
		{
			if (**map == '#' && **tetro == '#')
				**map = c;
			(*map)++;
			(*tetro)++;
		}
		*map = mapchar;
		*tetro = tetrochar;
		map++;
		tetro++;
	}
	return (maphead);
}
