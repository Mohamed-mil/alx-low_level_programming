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
	int i, j;
	char data[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char rotdata[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; j < 52; j++)
		{
			if (s[i] == data[j])
			{
				s[i] = rotdata[j];
				break;
			}
		}

	}
	return (s);
}
