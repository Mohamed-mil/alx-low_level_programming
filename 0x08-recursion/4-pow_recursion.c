#include "main.h"

/**
 * _pow_recursion - search a string for any bytes
 * @x: base
 * @y: exponant
 * Return: x
*/

int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	else if (y == 0)
		return (0);
	else if (y == 1)
		return (x);
	return (x * _pow_recursion(x, y - 1));
}
