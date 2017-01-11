/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   validateshape.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkok <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/14 14:43:09 by mkok              #+#    #+#             */
/*   Updated: 2016/12/15 12:55:03 by mkok             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

int		validateshape(char *tetro)
{
	int		contact;
	int		i;

	i = 0;
	contact = 0;
	while (tetro[i])
	{
		if (tetro[i] == '#')
		{
			if (i / 5 > 0) //if not top row
				contact = tetro[i - 5] == '#' ? contact + 1 : contact + 0;
			if (i / 5 < 4) //if not bottom row
				contact = tetro[i + 5] == '#' ? contact + 1 : contact + 0;
			if (i % 5 > 0) //if not left most column
				contact = tetro[i - 1] == '#' ? contact + 1 : contact + 0;
			if (i % 5 < 4) //if not right most column
				contact = tetro[i + 1] == '#' ? contact + 1 : contact + 0;
		}
		i++;
	}
	if (contact == 6 || contact == 8)
		return (1);
	else
		return (0);
}
