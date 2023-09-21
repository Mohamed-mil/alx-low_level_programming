#include "main.h"

/**
 * rot13 - rotate the alphapet by 13 place
 * @s: string
 *
 * Return: encoded string
*/

char *rot13(char *s)
{
	int i;
	char data[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char rotdata[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";
	char *ptr = s;

	while (*s)
	{
		for (i = 0; i <= 52; i++)
		{
			if (*s  == data[i])
			{
				*s = rotdata[i];
				break;
			}
		}
		s++
	}
	return (ptr);
}
