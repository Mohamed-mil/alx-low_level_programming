#include "main.h"

/**
 * _strncat - concatenating two strings
 *
 * @dest: string
 * @src: string
 * @n: number of bytes
 * Return: @dest
*/

char *_strncat(char *dest, char *src, int n);
{
	int c, d;

	c = 0;

	while (dest[c])
		c++;

	for (d = 0; d < n && src[d] != '\0'; d++)
		dest[c + d] = src[d];

	dest[c + d] = '\0';
	return (dest);
}
