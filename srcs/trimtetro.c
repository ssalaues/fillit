/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   trimtetro.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkok <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/19 14:51:12 by mkok              #+#    #+#             */
/*   Updated: 2017/02/01 09:31:12 by mkok             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

char	**trimtetro(char **tetro)
{
	int		x;
	int		y;
	char	*tetrochar;
	char	**tetrohead;
	char	**tetropoop;
	char	**start;

	x = 0;
	y = 0;
	tetropoop = tetro;
	while (**tetro)
	{
		while (*tetro)
		{
			tetrochar = *tetro;
			while (**tetro)
			{
				if (ft_isalpha(**tetro))
					x = 1;
				(*tetro)++;
			}
			*tetro = tetrochar;
			tetrohead = tetro;
			while (*tetro)
			{
				if (ft_isalpha(**tetro))
					y = 1;
				tetro++;
			}
			tetro = tetrohead;
			if (x && y)
			{
				start = tetro;
				return (start);
			}
			else
			{
				x = 0;
				y = 0;
			}
			tetro++;
		}
		tetro = tetropoop;
		while (*tetro)
		{
			(*tetro)++;
			tetro++;
		}
		tetro = tetropoop;
	}
	return (0);
}
