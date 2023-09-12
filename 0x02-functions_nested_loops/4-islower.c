#include "main.h"

/**
 * _islower - function to check if the cha is lowercase
 *
 * Return: 1 if 'c' is lowercase
*/

int _islower(int x)
{
        if (x >= 97 && x <= 122)
                return (1);
        return (0);
}
