#include <stdio.h>
#include "holberton.h"
/**
 * print_array - prints n elements of an array of integers,
 * followed by a new line.
 *
 * @a: array pointer parameter
 * @n: second parameter of
 *
 * Return: 1 if digit, 0 otherwise
 */
void print_array(int *a, int n)
{
	int j;

	for (j = 0; j <= n - 1; j++)
	{
		printf("%d", *(a + j));

		if (j < n - 1)
			printf(", ");
	}
	printf("\n");
}
