/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   doesitfit.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkok <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/01 16:25:19 by mkok              #+#    #+#             */
/*   Updated: 2017/01/18 11:16:29 by ssalaues         ###   ########.fr       */
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
        if (map - mapori + findwidth(tetro, '#') > mapsize)
            return (0);
		while (**map && **tetro)
		{
			if (**tetro == '#')
				**tetro = c;
			if (ft_isalpha(**map) && **tetro == c)
				return (0);
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
