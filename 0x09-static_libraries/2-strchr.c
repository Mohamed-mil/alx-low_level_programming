#include "main.h"

/**
 * *_strchr - write a function that ocates a chr in a string
 * @s: pointer put in a const
 * @c: constant
 * Return: pointer to s
*/

char *_strchr(char *s, char c)
{
	int i;

	for (i = 0; s[i] >= '\0' ; i++)
	{
		if (s[i] == c)
		{
			return (s + i);
		}
	}
	return ('\0');
}
