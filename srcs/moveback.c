/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   moveback.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkok <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/02 11:19:12 by mkok              #+#    #+#             */
/*   Updated: 2017/02/02 13:48:36 by mkok             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

void		moveback(char **map, int amthori)
{
	char	**maphead;

	maphead = map;
	while (amthori)
	{
		while (*map)
		{
			(*map)--;
			map++;
		}
		map = maphead;
		amthori--;
	}
}
