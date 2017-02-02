/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   resetused.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkok <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/30 15:34:24 by mkok              #+#    #+#             */
/*   Updated: 2017/01/30 15:49:20 by mkok             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

void	resetused(t_piece *pieces)
{
	t_piece	*phead;
   	phead = pieces;
	while (pieces->next)
	{
		pieces->used = 0;
		pieces = pieces->next;
	}
	pieces = phead;
}

