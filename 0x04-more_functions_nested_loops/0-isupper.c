#include "main.h"

/**
 * _isupper - function to check if the cha is uppercase
 *
 * @c: checks input of function
 * Return: 1 if 'x' is uppercase
 *         otherwise always 0 (success)
*/

int _isupper(int c)
{
	if (c >= 65 && c <= 90)
		return (1);
	return (0);
}
