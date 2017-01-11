/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   allpiecesused.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkok <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/05 11:20:11 by mkok              #+#    #+#             */
/*   Updated: 2017/01/05 11:59:00 by mkok             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

int		allpiecesused(t_piece *pieces)
{
	int		count;
	int		pcount;

	count = 0;
	pcount = piececount(pieces);
	if (!pieces)
		return (0);
	while (pieces->next)
	{
		if (pieces->used)
			count++;
		pieces = pieces->next;
	}
	if (pieces->used)
		count++;
	if (count == pcount)
		return (1);
	return (0);
}
