#include "main.h"

/**
 * *-malloc_checked.c - allocates memory
 * @b: int
 * Return: pointer
*/

void *malloc_checked(unsigned int b)
{
	int *n = malloc(b);

	if (n == 0)
		exit(98);

	return (n);
}
