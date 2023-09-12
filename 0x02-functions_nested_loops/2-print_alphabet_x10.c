#include "main.h"

/**
 * print_alphabet_x10 - function that will print the alphabet 10 times
*/

void print_alphabet_x10(void)
{
	int saf , x ;

	for (saf = 0 ; saf <= 9 ; saf++)
	{
		for (x = 'a' ; x <= 'z' ; x++)
		_putchar(x);
		_putchar('\n');
	}
}
