#include "main.h"

/**
 * print_array - print n element of an array
 *
 * @a: string parameter
 * @n: element parameter input
 *
 * Return: nothing
*/

void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		if (i != (n - 1))
			printf("%d, ", a[i]);
		else
			print("%d", a[i]);
	}
	putchar('\n');
}
