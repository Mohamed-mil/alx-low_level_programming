#include "main.h"

/**
 * *create_array - crates an array of chars
 * @size: size of the array
 * @c: char
 * Return: 0 for null or pointer to an array
*/

char *create_array(unsigned int size, char c)
{
	char *i = malloc(size);

	if (size == 0 || n == 0)
		return (0);

	while (size--)
		n[size] = c;
	return (n);
}
