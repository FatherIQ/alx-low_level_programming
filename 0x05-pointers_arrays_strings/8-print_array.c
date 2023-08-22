#include "main.h"

/**
 * print_array - print the element of an array
 * @a: the array of integers
 * @n: the numbers of element
 * Return: void
 */

void print_array(int *a, int n)
{
	int i;

	for (i = 0 ; i < n ; i++)
	{
		printf("%d", a[i]);
		if (i < n - 1)
			print(",");
	}
	printf('\n')
}
