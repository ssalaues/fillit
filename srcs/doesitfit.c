/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   doesitfit.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkok <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/01 16:25:19 by mkok              #+#    #+#             */
/*   Updated: 2017/01/19 14:33:02 by mkok             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

int		doesitfit(char **map, char **mapori, int mapsize, char **tetro, char c)
{
	char	*mapchar;
	char	**maphead;
	char	*tetrochar;
	char	**tetrohead;

	maphead = map;
	tetrohead = tetro;
	if (map - mapori + findheight(tetro, '#') > mapsize)
		return (0);
	while (*map && *tetro)
	{
		tetrochar = *tetro;
		mapchar = *map;
		if (*map - mapchar + findwidth(tetro, '#') > mapsize)
			return (0);
		while (**map && **tetro)
		{
			if (**tetro == '#')
				**tetro = c;
			if (ft_isalpha(**map) && **tetro == c)
			{
				*map = mapchar;
				*tetro = tetrochar;
				map = maphead;
				tetro = tetrohead;
				return (0);
			}
			(*map)++;
			(*tetro)++;
		}
		*tetro = tetrochar;
		*map = mapchar;
		map++;
		tetro++;
	}
	tetro = tetrohead;
	map = maphead;
	return (1);
}
