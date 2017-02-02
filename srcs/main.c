/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkok <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/01 12:37:27 by mkok              #+#    #+#             */
/*   Updated: 2017/02/02 09:18:28 by mkok             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

int    main(int ac, char **av)
{
	t_piece		*pieces;
	t_piece		*phead;

	if (ac != 2)
		return (0);
	pieces = rtet(open(av[1], O_RDONLY));
	if (!pieces) //Handles if validatechars or validateshape is invalid
		return (0);
	phead = pieces;
	trimall(phead);
	solver(phead);
	printmap(solver(phead));

	return (0);
}

