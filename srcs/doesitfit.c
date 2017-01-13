/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   doesitfit.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkok <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/01 16:25:19 by mkok              #+#    #+#             */
/*   Updated: 2017/01/05 13:04:53 by mkok             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

int		doesitfit(char **map, char **tetro, char c)
{
	char	*mapchar;
	char	**maphead;
	char	*tetrochar;
	char	**tetrohead;

	maphead = map;
	tetrohead = tetro;
	while (*map && *tetro)
	{
		tetrochar = *tetro;
		mapchar = *map;
		while (**map && **tetro)
		{
            if (**tetro == '#')
                **tetro = c;
			if (**map == c && **tetro == c)
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
