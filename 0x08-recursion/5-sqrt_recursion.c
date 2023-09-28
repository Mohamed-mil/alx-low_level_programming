#include "main.h"

/**
 * _sqrt_recursion - print the sqaure of numbers
 * @n: int
 * @val: int
 * Return: sqr
*/

int sqr(int n, int val);
int _sqrt_recursion(int n)
{
	return (sqr(n, 1));
}


/**
 * sqr - check the square
 * @n: int
 * @val: int
 * @Return: int
*/
int sqr(int n, int val)
{
	if (val * val == n)
		return (val);
	else if (val * val < n)
		return (square(n, val + 1));
	else
		return (-1);
}
