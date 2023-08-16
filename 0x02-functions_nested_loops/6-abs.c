#include "main.h"

/**
 * _abs - function to find absolute value of a number
 * @u: function parameter
 * Return: -u or u
 */

int _abs(int u)
{
	if (u < 0)
		return (-u);
	else if (u >= 0)
	{
		return (u);
	}
	return (0);
}
