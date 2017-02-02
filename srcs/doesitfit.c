/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   doesitfit.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkok <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/01 10:22:58 by mkok              #+#    #+#             */
/*   Updated: 2017/02/01 14:26:23 by mkok             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

int		doesitfit(t_piece *piece, char **map)
{
	char	**maphead;
	char	*mapstr;
	char	**thead;
	char	*tstr;
	int		count;

	count = 0;
	maphead = map;
	thead = piece->data;
	while (*maphead && *thead)
	{
		mapstr = *maphead;
		tstr = *thead;
		while (*mapstr && *tstr)
		{
			if (*mapstr == '.' && ft_isalpha(*tstr))
				count++;
			if (count == 4)
				return (1);
			tstr++;
			mapstr++;
		}
		thead++;
		maphead++;
	}
	return (0);
}
