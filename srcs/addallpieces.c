/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   addallpieces.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkok <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/01 09:39:19 by mkok              #+#    #+#             */
/*   Updated: 2017/02/02 10:19:44 by mkok             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

int		addallpieces(t_piece *pieces, char **map)
{
	char		**maphead;
	char		*mapchar;

	maphead = map;
	mapchar = *maphead;
	if (!pieces)
		return (1);
	while (*maphead && *mapchar && !doesitfit(pieces, maphead))
		maphead++;
	if (*maphead && *mapchar && doesitfit(pieces, maphead))
	{
		addtomap(maphead, pieces->data);
	//	printf("\n\n\n");
		pieces->used = 1;
		addallpieces(pieces->next, maphead);
	}
	return (1);
}
