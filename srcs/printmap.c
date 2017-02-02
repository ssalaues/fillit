/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   printmap.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkok <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/01 12:20:13 by mkok              #+#    #+#             */
/*   Updated: 2017/02/01 12:24:54 by mkok             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

void		printmap(char **map)
{
	char	**maphead;

	maphead = map;
	while (*maphead)
	{
		ft_putstr(*maphead);
		ft_putchar('\n');
		maphead++;
	}
}
