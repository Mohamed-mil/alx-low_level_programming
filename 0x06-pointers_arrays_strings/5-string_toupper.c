#include "main.h"

/**
 * *string_toupper - change lowercase to uppercase
 *
 * @str: string
 * Return: string
*/

char *string_toupper(char *str)
{
	int i;

	while (str[i] != '\0')
	{
		if (str[i] >= 97 && str <= 122)
		{
			str[i] = str[i] - 32;
			i++;
		}
	}
	return (str);
}
