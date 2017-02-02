/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fheight.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkok <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/31 19:13:28 by mkok              #+#    #+#             */
/*   Updated: 2017/02/01 08:05:55 by mkok             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

int		fheight(char **tetro, char c)
{
	int		count;
	char	**head;

	count = 0;
	head = tetro;
	while (*head)
	{
		if (!ft_strchr(*head, c))
			return (count);
		head++;
		count++;
	}
	return (count);
}

