/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   trimtetro.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkok <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/19 14:51:12 by mkok              #+#    #+#             */
/*   Updated: 2017/02/03 23:36:22 by ssalaues         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

int      countlines(char **tetro)
{
    int     c;
    char    **t;
    
    c = 0;
    t = tetro;
    while (*t)
    {
        t++;
        c++;
    }
    return (c);
}
static char **femptyline(char **tetro, int x) // If empty line then move pointer to skip
{
    int		y;
    int     i;
    
    y = 0;
    i = 0;
    while (tetro[x][y] != 0) //Skip empty first lines
    {
        if (!(ft_isalpha(tetro[x][y])))
            i++;
        y++;
    }
    if (i == 4)
        tetro++;
    if (!(ft_isalpha(**tetro)))
        femptyline(tetro, 0);
    return (tetro);
}
static void    remptyline(char **tetro)
{
    int x;
    int y;
    
    x = 0;
    y = 0;
    while (tetro[x])
    {
        while (tetro[x][y] == '.')
            y++;
        if (y == 4)
            tetro[x] = '\0';
        y = 0;
        x++;
    }
}
static void    ytrim(char **tetro) // Trims Y axis
{
    int x;
    int c;
    char **s;
    
    x = 0;
    c = 0;
    s = tetro;
    while (tetro[x][0] == '.')
    {
        c++;
        x++;
    }
    if (c == countlines(tetro))
    {
        while (c > 0)
        {
            x = 0;
//            *s++; //can't get this to iterate?!?
            c--;
        }

    }
    
}
char	**trimtetro(char **tetro)
{
    int x;
    
    x = 0;
//    while (x < countlines(tetro))
//    {
        tetro = femptyline(tetro, x);
    remptyline(tetro);
        ytrim(tetro);
        x++;
//    }
    return (tetro);
}
/*
....
##..
.#..
.#..

....
####
....
....

#...
###.
....
....

....
##..
.##.
....

....
####
....
....
*/
