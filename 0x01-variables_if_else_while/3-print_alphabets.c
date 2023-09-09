#include <stdio.h>

/**
 * main - entry point
 *
 * Return: 0 (success)
*/

int main(void)
{
	char h = 'a';
	char H = 'A';

	/*prints a - z*/
        while (h <= 'z')
	{
		putchar(h);
		h++;
	}

	/*print A - Z*/
	while (H <= 'Z')
	{
		putchar(H);
		H++;
	}
	putchar('\n');

	return (0);
}
