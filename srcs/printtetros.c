/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   printtetros.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkok <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/01 10:46:40 by mkok              #+#    #+#             */
/*   Updated: 2017/02/01 12:02:31 by mkok             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

void	printtetros(t_piece *pieces)
{
	t_piece		*phead;
	char		**thead;

	phead = pieces;
	while (phead)
	{
		thead = phead->data;
		while (*thead)
		{
			ft_putstr(*thead);
			ft_putchar('\n');
			thead++;
		}
		if (phead->next != 0)
			ft_putchar('\n');
		phead = phead->next;
	}
}
