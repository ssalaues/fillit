/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   validatechars.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkok <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/14 14:57:48 by mkok              #+#    #+#             */
/*   Updated: 2017/02/10 00:30:47 by ssalaues         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

int		validatechars(char *tetro)
{
	int			rows;
	int			count;
	char		*start;

	start = tetro;
	count = 0;
	rows = 0;
	while (*tetro)
	{
		while (*tetro != '\n')
		{
			if (*tetro != '.' && *tetro != '#')
				return (0);
			if (*tetro == '#')
				count++;
			tetro++;
		}
		tetro++;
		rows++;
	}
	if (rows != 4 || count != 4)
		return (0);
	return (validateshape(start));
}
