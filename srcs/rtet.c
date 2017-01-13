/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rtet.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssalaues <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/14 13:16:58 by ssalaues          #+#    #+#             */
/*   Updated: 2017/01/13 10:16:09 by ssalaues         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

t_piece	*createlst(char **data, char letter)
{
	t_piece 	*new;
	
	new = (t_piece *)malloc(sizeof(t_piece));
	new->data = data;
	new->abc = letter;
	new->loc = 0;
	new->used = 0;
	new->next = 0;
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
}

t_piece	*rtet(int fd)
{
	t_piece	*blst;
	t_piece	*piece;
	char	tmp[21];
	char	*alphabet;

	alphabet = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
	blst = 0;	
	read(fd, tmp, 20);
	tmp[20] = 0;
	if (!validatechars(tmp))
			return(NULL);
	piece = createlst(ft_strsplit(tmp, '\n'), *alphabet++);
	blst = piece;
	while (read(fd, tmp, 1))
	{
		read(fd, tmp, 20);
		if (!validatechars(tmp))
			return (NULL);
		piece = createlst(ft_strsplit(tmp, '\n'), *alphabet++);
		lsteadd(blst, piece);
	}
	close(fd);
	return (blst);
}
