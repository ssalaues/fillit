/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   move.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssalaues <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/27 11:01:34 by ssalaues          #+#    #+#             */
/*   Updated: 2017/01/27 14:26:31 by ssalaues         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

char	**pmove(char **map, char abc)
{
	char	**head;
	int		c;

	head = map;
	c = 0;
	while (*map)
	{
		while (*map[c] == abc)
			c++;
		if (**map == abc && **map + 1 != '\0' && c < 3)
			{
				**map = '.';
				(*map)++;
				**map = abc;
			}
		if (**map == '.')
			(*map)++;
		if (*map == '\0')
			map++;
		c = 0;
	}
	return (head);
}
