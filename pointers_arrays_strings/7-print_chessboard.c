#include "main.h"

void
print_chessboard(char (*a)[8])
{
	int largo = 0, alto = 0;

	while (largo < 8)
	{
		alto = 0;
		while (alto < 8)
		{
			_putchar (a[largo][alto]);
			alto++;
		}
			_putchar('\n');
				largo++;
	}
}
