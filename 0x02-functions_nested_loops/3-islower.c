#include "main.h"

/**
 * _islower - check for lowercase
 * * @c: parameter to be checked
 * Return: 1 oe 0
 */

int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
