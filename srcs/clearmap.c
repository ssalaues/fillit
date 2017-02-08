/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   clearmap.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssalaues <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/04 20:51:29 by ssalaues          #+#    #+#             */
/*   Updated: 2017/02/04 20:52:09 by ssalaues         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

char    **clearmapif(char **map, t_piece *piece)
{
    int     y;
    char    **bm;
    
    y = 0;
    bm = map;
    while (*bm)
    {
        while ((*bm)[y] != 0)
        {
            if ((*bm)[y] == piece->abc)
                (*bm)[y] = '.';
            y++;
        }
        y = 0;
        bm++;
    }
    piece->used = 0;
//    piece->x = 0;
    return (map);
}

t_piece    *clearusd(t_piece *pieces)
{
    t_piece *bl;
    int     c;
    
    bl = pieces;
    c = 0;
    while (bl)
    {
        if (c)
        {
            bl->x = 0;
            bl->y = 0;
        }
        bl->used = 0;
        bl = bl->next;
        c = 1;
    }
    return (pieces);
}

char    **clearmap(char **map, t_piece *pieces)
{
    int     y;
    char    **bm;
    
    y = 0;
    bm = map;
    while (*bm)
    {
        while ((*bm)[y] != 0)
        {
            if ((*bm)[y] > 64)
                (*bm)[y] = '.';
            y++;
        }
        y = 0;
        bm++;
    }
    clearusd(pieces);
    return (map);
}

void    shift(t_piece *piece, char **map, int x, int y)
{
    x = 0;
    clearmap(map, piece);
    if (doesitfit(piece, map, 0, y + 1))
        addtomap(map, piece->data, x, y + 1);
    addallpieces(piece->prev, piece, map);
}