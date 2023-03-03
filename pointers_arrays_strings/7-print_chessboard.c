#include "main.h"

/**
 * @a: given
 *
 * print_chessboard - funciona porfavor
 *
 */


void print_chessboard(char (*a)[8])
{
	int largo = 0, alto = 0;

	for (; largo < 8; alto++)
	{
		while (alto < 8)
		{
			_putchar (a[largo][alto]);
			alto++;
		}
			_putchar('\n');
				largo++;
	}
}
