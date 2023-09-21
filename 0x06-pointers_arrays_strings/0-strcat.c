#include "main.h"

/**
 * *_strcat - concatenating two strings
 *
 * @dest: string
 * @src: string
 * Return: @dest
*/

char *_strcat(char *dest, char *src)
{
	int c, d;

	c = 0;

	while (dest[c])
		c++;

	for (d = 0; src[d]; d++)
		dest[c++] = src[d];

	return (dest);
}
