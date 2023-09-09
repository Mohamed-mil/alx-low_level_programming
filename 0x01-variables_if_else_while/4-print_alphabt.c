#include <stdio.h>

/**
 * main - entry point
 *
 * Return: 0 (success)
*/
int main(void)
{
	char h = 'a';

	while (h <= 'z')
	{
		if (h == 'e' || h == 'q')
			h++;
		putchar(h);
		h++;
	}
	putchar('\n');
	return (0);
}
