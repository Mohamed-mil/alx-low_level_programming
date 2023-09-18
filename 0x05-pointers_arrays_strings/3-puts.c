#include "main.h"

/**
 * _puts - print a string followed by a new line
 *
 * @str: string parametr
 *
 * Return: nothng
*/

void _puts(char *str)
{

	while (*str != '\0')
	{
		putchar(*str + 0);
		str++;
	}
	putchar('\n');
}
