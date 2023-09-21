#include "main.h"
#include <stdio.h>

/**
 * *rot13 - rotate the alphapet by 13 place
 * @n: string
 *
 * Return: s
*/

char *rot13(char *n)
{
	int i;
	char data[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char rotdata[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";
	char *ptr = s;

	while (*s)
	{
		for (i = 0; i <= 52; j++)
		{
			if (*s  == data[i])
			{
				*s  = rotdata[i];
				break;
			}
		}

	}
	return (ptr);
}
