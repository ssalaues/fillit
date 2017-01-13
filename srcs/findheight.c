/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   findheight.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkok <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/28 14:41:09 by mkok              #+#    #+#             */
/*   Updated: 2017/01/13 11:17:12 by ssalaues         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

int		findheight(char **tetro, char c) //must start at tetromino origin
{
	char	**yhead;
	char	**yperm;
	char	**ypos;
	int		y;
	int		count;
	
	count = 0;
	y = 0;
	yperm = tetro;
	while (**tetro)
	{
		yhead = tetro;
		ypos = yhead;
		while (*tetro)
		{
			if (**tetro == c && (((ypos - yhead) + 1) > y))
				y = ((ypos - yhead) + 1);
			tetro++;
			ypos++;
		}
		tetro = yhead;
		ypos = yhead;
		while (*tetro)
		{
			(*tetro)++;
			tetro++;
		}
		count++;
		tetro = yhead;
	}
	printf("Count: %i\n", count);
	while (count)
	{
		tetro = yhead;
		while(*tetro)
		{
			(*tetro)--;
			tetro++;
		}
		count--;
	}	
	return (y);
}
