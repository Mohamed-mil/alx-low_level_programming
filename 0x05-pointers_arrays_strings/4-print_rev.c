#include "main.h"

/**
 * print_rev - print a reverse string
 *
 * @s: pointer to the string
 *
 * Return: nothing
*/

void print_rev(char *s)
{
	int i = 0;

	while (s[i])
		i++;

	while (i--)
	{
		putchar(s[i]);
				}
				putchar('\n');
				}
