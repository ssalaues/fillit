
#include "fillit.h"

int		piececount(t_piece *pieceshead)
{
	int		count;

	count = 0;
	while (pieceshead->next)
	{
		count++;
		pieceshead = pieceshead->next;
	}
	return (count + 1);
}
