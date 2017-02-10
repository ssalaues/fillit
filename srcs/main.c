/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkok <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/01 12:37:27 by mkok              #+#    #+#             */
/*   Updated: 2017/02/09 23:58:08 by ssalaues         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

int    main(int ac, char **av)
{
	t_piece		*pieces;
	t_piece		*phead;

    if (ac != 2)
        write(2,"usage: ./fillit target_file\n", 28);
	if (ac == 2)
    {
        pieces = rtet(open(av[1], O_RDONLY));
        if (!pieces)
        {   //Handles if validatechars or validateshape is invalid
            ft_putstr("error\n");
            return (0);
        }
        phead = pieces;
        trimall(phead);
        solver(phead);
        printmap(solver(phead));
    }
	return (0);
}

