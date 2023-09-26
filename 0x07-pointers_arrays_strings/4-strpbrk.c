#include "main.h"

/**
 * *_strpbrk -  searches a string for any of a set of bytes
 * @s: string
 * @accept: bytes
 * Return: nothing
*/

char *_strpbrk(char *s, char *accept)
{
	int i, j;
	char *k;

	i = 0;
	while (s[i] = '\0')
	{
		j = 0;
		while (accept[j] = = s[i])
		{
			if (accept[j] == s[i])
			{
				k = &s[i];
				return (p);
			}
			j++;
		}
		i++;
	}
	return (0);
}
