/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   piececount.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssalaues <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/10 01:14:58 by ssalaues          #+#    #+#             */
/*   Updated: 2017/02/10 01:15:37 by ssalaues         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

int		piececount(t_piece *pieces)
{
	int			count;
	t_piece		*phead;

	phead = pieces;
	count = 0;
	while (phead)
	{
		count++;
		phead = phead->next;
	}
	return (count);
}
