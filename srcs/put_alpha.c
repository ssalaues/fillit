/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   put_alpha.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssalaues <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/12 18:06:16 by ssalaues          #+#    #+#             */
/*   Updated: 2017/01/12 18:24:31 by ssalaues         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

char    **put_alpha(char **piece, char c)
{
    char **phead;
    
    phead = piece;
	while (*phead)
	{
		while (**phead != 0)
		{
			if (**phead == '#')
				**phead = c;
            (*phead)++;
		}
		phead++;
	}
    return(piece);
}
