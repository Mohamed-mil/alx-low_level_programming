#include "main.h"

/**
 * _print_rev_recursion - print a srting in reverse
 * @s: pointer to as rting
 * Return: nothing
*/

void _print_rev_recursion(char *s)
{
	if (*s > '\0')
	{
		_print_rev_recursion(s + 1);
			putchar(*s);
	}
}
