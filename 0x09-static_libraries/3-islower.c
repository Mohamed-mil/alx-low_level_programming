#include "main.h"

/**
 * _islower - function to check if the cha is lowercase
 *
 * @x: checks input of function
 * Return: 1 if 'x' is lowercase
 *         otherwise always 0 (success)
*/
int _islower(int x)

{
	if (x >= 97 && x <= 122)
		return (1);
	return (0);
}
