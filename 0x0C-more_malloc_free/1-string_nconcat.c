#include "main.h"

/**
 * *string_nconcat - concaretaing two string
 * @s1: pointer
 * @s2: pointer
 * @n: number of bytes
 * Return: pointer to space in memory
*/

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *ptr;
	unsigned int i, j, c1, c2;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	for (c1 = 0; s1[c1] != '\0'; c1++)
		;
	for (c2 = 0; s2[c2] != '\0'; c2++)
		;

	ptr = malloc(c1 + n + 1);
	if (ptr == NULL)
	{
		return (NULL);
	}
	for (i = 0; s1[i] != '\0'; i++)
		ptr[i] = s1[i];

	for (j = 0; j < n; j++)
	{
		ptr[i] = s2[j];
		i++;
	}
	ptr[i] = '\0';
	return (ptr);
}
