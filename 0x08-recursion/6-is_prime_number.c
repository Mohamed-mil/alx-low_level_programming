#include "main.h"
#include <stdio.h>

/**
 * is_prime_number - print prime number
 * @n: int
 * @m: int
 * Return: int
*/

int check_prime(int n, int m);
int is_prime_number(int n)
{
	return (check_prime(n, 2));
}

/**
 * check_prime - check if the number is prime
 * @n: int
 * @m: int
 * Return: int
*/
int check_prime(int n, int m)
{
	if (m >= n && n > 1)
		return (1);
	else if (n % m == 0 || n <= 1)
		return (0);
	else
		return (check_prime(n, m + 1));
}
