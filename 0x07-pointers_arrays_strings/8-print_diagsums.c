#include "main.h"

/**
 * print_diagsums - print the sum
 *
 * @a: 2d array
 * @size: size of array
*/

void print_diagsums(int *a, int size)
{
	int i, s = 0, s1 = 0;

	for (i = 0; i < size; i++)
	{
		s += a[i];
		s1 += a[size - i - 1];
		a += size;
	}
	printf("%d, ", s);
	printf("%d\n", s1);
}
