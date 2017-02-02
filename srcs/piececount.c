
#include "fillit.h"

int		piececount(t_piece *pieces)
{
	int			count;
	t_piece		*phead;

	phead = pieces;
	count = 0;
	while (phead)
	{
		count++;
		phead = phead->next;
	}
	return (count);
}
