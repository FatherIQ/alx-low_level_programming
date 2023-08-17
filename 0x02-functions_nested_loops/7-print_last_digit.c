#include "main.h"

/**
 * print_last_digit - print last digit of a number
 * @i: function parameter
 * Return: a
 */

int print_last_digit(int i)
{
	int a;

	a = i % 10;
	if (i < 10)
		a = -a;
	_putchar(a + '0');
	_putchar('\n');

	return (a);
}
