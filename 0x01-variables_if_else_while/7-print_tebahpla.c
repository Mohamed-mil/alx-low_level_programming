#include <stdio.h>

/**
 * main - entry point
 *
 * Return: 0 (success)
*/
int main(void)
{
	char h = 'z';

	while (h >= 'a')
	{
		putchar(h);
		h--;
	}
	putchar('\n');

	return (0);
}
