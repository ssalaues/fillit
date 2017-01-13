/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   findwidth.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkok <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/28 14:46:56 by mkok              #+#    #+#             */
/*   Updated: 2017/01/13 11:17:22 by ssalaues         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		findwidth(char **tetro, char c)
{
	char	*xhead;
	char	*xperm;
	char	*xpos;
	int		x;
	
	x = 0;
	xperm = *tetro;
	while (*tetro)
	{
		xhead = *tetro;
		xpos = xhead;
		while (**tetro)
		{
			if (**tetro == c && (((xpos - xhead) + 1) > x))
				x = ((xpos - xhead) + 1);
			(*tetro)++;
			xpos++;
		}
		*tetro = xhead;
		xpos = xhead;
		tetro++;
	}
	return (x);
}
