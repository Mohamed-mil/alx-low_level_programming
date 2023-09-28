#include "main.h"

/**
 * _sqrt_recursion - print the sqaure of numbers
 * @n: int
 * @val: int
 * Return: int
*/

int square(int n, int val);
int _sqrt_recursion(int n)
{
	return (square(n, 1));
}


/**
 * square - check the square
 * @n: int
 * @val: int
 * Return: int
*/
int square(int n, int val)
{
	if (val * val == n)
		return (val);
	else if (val * val < n)
		return (square(n, val + 1));
	else
		return (-1);
}
