/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   findwidth.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkok <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/28 14:46:56 by mkok              #+#    #+#             */
/*   Updated: 2017/01/01 16:17:34 by mkok             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		findwidth(char **tetro)
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
			if (**tetro == '#' && (((xpos - xhead) + 1) > x))
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
