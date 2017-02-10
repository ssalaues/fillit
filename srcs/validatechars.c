/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   validatechars.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkok <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/14 14:57:48 by mkok              #+#    #+#             */
/*   Updated: 2017/02/09 23:58:26 by ssalaues         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

int		validatechars(char *tetro)
{
	int			rows;
	int			count;
    int         nl;
	char		*start;

	start = tetro;
	count = 0;
	rows = 0;
    nl = 0;
	while (*tetro)
	{
		while (*tetro != '\n')
		{
			if (*tetro != '.' && *tetro != '#')
				return (0);
			if (*tetro == '#')
				count++;
            if (*tetro == '\n' && (*tetro) + 1 == '\n')
                nl++;
			tetro++;
		}
		tetro++;
		rows++;
	}
	if (rows != 4 || count != 4)
		return (0);
	return (validateshape(start));
}
