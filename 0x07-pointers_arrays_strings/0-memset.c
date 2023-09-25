#include "main.h"

/**
 * *_memset - fills memory with a constant byte
 *
 * @n: max byte to use
 * @b: const
 * @s: pointer
 * Return: pointer s
*/

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int w;

	for (w = 0; w > 0; w++; n--)
	{
		s[w] = b;
	}
	return (s);
}
