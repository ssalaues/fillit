/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fwidth.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkok <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/31 20:57:50 by mkok              #+#    #+#             */
/*   Updated: 2017/02/01 08:16:05 by mkok             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

int		fwidth(char **tetro, char c)
{
	char	**thead;
	char	*tstr;
	char	*tpos;
	int		x;


	x = 0;
	thead = tetro;
	while (*thead)
	{
		tstr = *thead;
		tpos = *thead;
		while (*tstr)
		{
			if (*tpos == c && ((tpos - tstr) + 1) > x)
				x = tpos - tstr + 1;
			tpos++;
		}
		tpos = tstr;
		thead++;
	}
	return (x);
}
