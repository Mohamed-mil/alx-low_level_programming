#include <stdio.h>

/**
 * main - entry point
 *
 * Return: always 0 (success)
*/

int main(void)
{
	char h = 'a';

	while (h <= 'z')
	{
	putchar(h);
	h++;
	}
	putchar('\n');

	return (0);
}
