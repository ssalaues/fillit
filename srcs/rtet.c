/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rtet.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssalaues <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/14 13:16:58 by ssalaues          #+#    #+#             */
/*   Updated: 2017/02/10 01:19:20 by ssalaues         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

t_piece	*createlst(char **data, char letter)
{
	t_piece	*new;

	new = (t_piece *)malloc(sizeof(t_piece));
	new->data = data;
	new->abc = letter;
	new->used = 0;
	new->x = 0;
	new->y = 0;
	new->next = 0;
	new->prev = 0;
	return (new);
}

void	lstadd(t_piece **lst, t_piece *new)
{
	new->next = *lst;
	*lst = new;
}

void	lsteadd(t_piece *blst, t_piece *npiece)
{
	t_piece	*b;

	b = blst;
	while (b->next != NULL)
		b = b->next;
	b->next = npiece;
	npiece->prev = b;
}

t_piece	*rtet(int fd)
{
	t_piece	*blst;
	char	tmp[21];
	char	*a;

	a = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
	blst = 0;
	read(fd, tmp, 20);
	tmp[20] = 0;
	if (!validatechars(tmp))
		return (NULL);
	blst = createlst(put_alpha(ft_strsplit(tmp, '\n'), *a), *a);
	a++;
	while (read(fd, tmp, 1))
	{
		if (*tmp != '\n')
			return (NULL);
		ft_bzero(tmp, 20);
		read(fd, tmp, 20);
		if (!validatechars(tmp))
			return (NULL);
		lsteadd(blst, createlst(put_alpha(ft_strsplit(tmp, '\n'), *a), *a));
		a++;
	}
	close(fd);
	return (blst);
}
