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
	int j = 0;

	for (; n > 0; j++)
	{
		s[j] = b;
		n--;
	}
	return (s);
}
