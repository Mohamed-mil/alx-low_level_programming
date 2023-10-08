#include "main.h"

/**
 * *array_range - creates an array of tintegers
 * @min: starting int
 * @max: maximizing int
 * Return: array of integers
*/

int *array_range(int min, int max)
{
	int l, i;
	int *ptr;

	if (min > max)
		return (NULL);
	l = max - min + 1;
	ptr = malloc(sizeof(int) * l);
	if (!ptr)
		return (NULL);
	for (i = 0; i < l; i++)
		ptr[i] = min++;
	return (ptr);
}
