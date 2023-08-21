#include "main.h"

/**
 * _puts - function that print a string
 * @str: string to be printed
 * Return: void
 */

void _puts(char *str)
{
	int i;

	for (i = 0 ; str[1] != '\0' ; i++)
		_putchar(str[1]);
	_putchar('\n');
}
