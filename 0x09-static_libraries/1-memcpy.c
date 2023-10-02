#include "main.h"

/**
 * *_memcpy - write function that copies memory area
 *
 * @dest: memory area
 * @src: source
 * @n: length of src to be copied
 * Return: dest
*/

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int a;

	for (a = 0; a < n; a++)
	{
		dest[a] = src[a];
	}
	return (dest);
}
