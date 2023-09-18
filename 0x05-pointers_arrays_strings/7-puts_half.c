#include "main.h"

/**
 * puts_half - print half of the string
 *
 * @str: parameter
 *
 * Return: nothing
*/

void puts_half(char *str)
{
	int i = 0;

	for (i = 0; str[i] != '\0'; i++)
		;
	i++;
	for (i /= 2; str[i] != '\0'; i++)
	{
		putchar(str[i]);
	}
	putchar('\n');
}
