#include "main.h"

/**
 * swap_int - swap value of  a in b and b in a
 *
 * @a: integer
 * @b: integer
 *
 * Return: nothing
*/

void swap_int(int *a, int *b)
{
	int c;

	c = *a;
	*a = *b;
	*b = c;
}
