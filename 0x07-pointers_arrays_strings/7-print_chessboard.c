#include "main.h"

/**
 * print_chessboard - print chess board
 * @a: array
 *
 * Return: nothing
*/

void print_chessboard(char (*a)[8])
{
	int i, j;

	for (i = 0; i < 9; i++)
	{
		for (j = 0; j < 9; j++)
		{
			putchar(a[i][j]);
		}
		putchar('\n');
	}
}
