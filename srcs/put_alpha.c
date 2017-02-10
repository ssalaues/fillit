/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   put_alpha.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssalaues <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/12 18:06:16 by ssalaues          #+#    #+#             */
/*   Updated: 2017/02/10 00:18:24 by ssalaues         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

char	**put_alpha(char **piece, char c)
{
	char **phead;
	char *str;

	phead = piece;
	while (*phead)
	{
		str = *phead;
		while (*str != 0)
		{
			if (*str == '#')
				*str = c;
			str++;
		}
		phead++;
	}
	return (piece);
}
