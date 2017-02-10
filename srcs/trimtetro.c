/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   trimtetro.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssalaues <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/02 02:18:52 by ssalaues          #+#    #+#             */
/*   Updated: 2017/02/05 02:19:10 by ssalaues         ###   ########.fr       */
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
    size_t  i;
    
    y = 0;
    i = 0;
    while (tetro[x][y] != 0) //Skip empty first lines
    {
        if (!(ft_isalpha(tetro[x][y])))
            i++;
        y++;
    }
    if (i == ft_strlen(*tetro))
        tetro++;
//    if (countlines(tetro) == cntd(*tetro))
//        femptyline(tetro, (0));
    return (tetro);
}
int cntd(char *tetro)
{
    int c;
    
    c = 0;
    while (*tetro)
    {
        c++;
        tetro++;
    }
    return (c);
}

static void    ytrim(char **tetro) // Trims Y axis
{
    int x;
    int c;
    char **s;
    
    x = 0;
    c = 1;
    s = tetro;
    while (tetro[x][0] < 64 && x < countlines(tetro) - 1)
    {
        c++;
        x++;
    }
    if (c == countlines(tetro) && countlines(tetro) > 1)
    {
        x = 0;
        while (c > 0)
        {
            (s[x])++;
            c--;
            x++;
        }

    }
    
}
char	**trimtetro(char **tetro)
{
    int x;
    
    x = 0;
    while (x < 3)
    {
        tetro = femptyline(tetro, 0);
//        remptyline(tetro);
        x++;
    }
    x = 0;
    while (x < 3)
    {
        ytrim(tetro);
        x++;
    }
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
