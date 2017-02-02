/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   allpiecesused.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkok <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/01 12:50:41 by mkok              #+#    #+#             */
/*   Updated: 2017/02/01 12:55:42 by mkok             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

int		allpiecesused(t_piece *pieces)
{
	int			count;
	int			pcount;
	t_piece		*phead;

	count = 0;
	phead = pieces;
	pcount = piececount(phead);
	while (phead)
	{
		if (phead->used)
			count++;
		phead = phead->next;
	}
	if (count == pcount)
		return (1);
	return (0);
}
