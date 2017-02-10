/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   trimall.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkok <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/01 09:16:47 by mkok              #+#    #+#             */
/*   Updated: 2017/02/10 01:14:32 by ssalaues         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

void	trimall(t_piece *pieces)
{
	t_piece		*phead;

	phead = pieces;
	while (phead)
	{
		phead->data = trimtetro(phead->data);
		phead = phead->next;
	}
}
