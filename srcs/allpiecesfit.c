/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   allpiecesfit.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkok <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/06 12:18:41 by mkok              #+#    #+#             */
/*   Updated: 2017/01/06 15:25:43 by mkok             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

int		allpiecesfit(char **map, int mapsize)
{
	int		height;
	int		width;

	height = findheight(map);
	width = findwidth(map);
	if (width <= mapsize && height <= mapsize)
		return (1);
	else
		return (0);
}
