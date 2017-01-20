/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   trimhori.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssalaues <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/18 11:54:22 by ssalaues          #+#    #+#             */
/*   Updated: 2017/01/18 16:52:42 by ssalaues         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

char	**rml(char **tetro)
{
	int		c;
	int		c2;
	char	**h;
	
	c = 0;
	c2 = 0;
	h = tetro;
	while (tetro)
	{
		if (*tetro[c2] == '.')
			c++;
		if (c == 3)
		{
			tetro++;
			h = tetro;
		}
		if (c2 == 3)
			tetro++;
		c2++;
	}
	return (h);
}

char	**trim(char **tetro)
{
	char	**h;
	int		c;

	h = tetro;	
	c = 0;
	while(*tetro)
	{
		if (c = 3)
			tetro	
		if (**tetro == '#')
			tetro++;
		else
			(*tetro)++;
	}
	return (h);
}

char	**trimt(char **tetro)
{
	int	c1;
	int	c2;

	c1 = 0;
	c2 = 0;
	while (c1 < 3)
	{
		if (tetro[c1][c2] == '.')
			c2++;
	}
}
