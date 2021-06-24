#include "holberton.h"
/**
 * print_line - draws a straight line on the terminal
 *
 * @n: parameter of the print_line function
 *
 * Return: void
 *
 */
void print_line(int n)
{
	int a;

	if (n > 0)
	{
		for (a = 0; a < n; a++)
		{
			_putchar('_');
		}

		_putchar('\n');
	}
	if (n <= 0)
	{
		_putchar('\n');
	}
}
