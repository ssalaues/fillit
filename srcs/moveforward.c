/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   moveforward.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkok <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/02 11:24:02 by mkok              #+#    #+#             */
/*   Updated: 2017/02/02 13:49:04 by mkok             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

void	moveforward(char **map)
{
	char	**maphead;

	maphead = map;
	while (*map && **map)
	{
		(*map)++;
		map++;
	}
	map = maphead;
}