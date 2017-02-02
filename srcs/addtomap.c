/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   addtomap.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkok <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/01 08:25:18 by mkok              #+#    #+#             */
/*   Updated: 2017/02/02 10:15:01 by mkok             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

void	addtomap(char **map, char **tetro)
{
	char	**maphead;
	char	**tetrohead;
	char	*mapchar;
	char	*tetrochar;

	maphead = map;
	tetrohead = tetro;
	while (*maphead && *tetrohead)
	{
		mapchar = *maphead;
		tetrochar = *tetrohead;
		while(*mapchar && *tetrochar)
		{
			if (*mapchar == '.')
				*mapchar = *tetrochar;
			mapchar++;
			tetrochar++;
		}
		tetrochar = *tetrohead;
		mapchar = *maphead;
	//	printf("%s\n", *maphead);
		maphead++;
		tetrohead++;
	}
}
