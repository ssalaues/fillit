/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pieceswap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkok <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/06 09:59:52 by mkok              #+#    #+#             */
/*   Updated: 2017/01/06 10:14:36 by mkok             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

t_piece		pieceswap(t_piece *p1, t_piece *p2, t_piece *pieceshead)
{
	t_piece		temp;

	temp = *p1;
	p1->next = p2->next;
}
