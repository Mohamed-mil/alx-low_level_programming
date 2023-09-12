#include "main.h"

/**
 * _isalpha - checks if character is a letter lowercase or uppercase
 *
 * @y: taked input from other functions
 *
 * Return: 1 is y if true else 0
*/

int _isalpha(int y)
{
	if (y >= 65 && y <= 90)
		return (1);
	if (y >= 97 && y <= 122)
		return (1);
	return (0);
}
