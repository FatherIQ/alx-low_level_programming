#include <stdio.h>

/**
 * main - basic function
 *
 * Return: back to 0
 */

int main(void)
{
	char i;

	for (i = 'z' ; i >= 'a' ; i--)
		putchar(i);
	putchar('\n');
	return (0);

}
