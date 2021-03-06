/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   allpiecesfit.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkok <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/06 12:18:41 by mkok              #+#    #+#             */
/*   Updated: 2017/01/17 11:31:02 by mkok             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

int		allpiecesfit(char **map, int mapsize, char c)
{
	int		height;
	int		width;

	height = findheight(map, c);
	width = findwidth(map, c);
//	printf("ALLPIECESFIT: height is %i\n", height);
//	printf("ALLPIECESFIT: width is %i\n", width);
	if (width <= mapsize && height <= mapsize)
		return (1);
	else
		return (0);
}
