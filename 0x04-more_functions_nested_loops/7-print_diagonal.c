#include "holberton.h"
/**
 * print_diagonal - draws a diagonal line on the terminal
 *
 * @n: parameter of the print_diagonal function
 *
 * Return: void
 *
 */
void print_diagonal(int n)
{
	int a;
	int b;

	if (n > 0)
	{
		for (a = 0; a < n; a++)
		{
			for (b = 0; b <= a; b++)
			{
				if (b != 0)
					_putchar(' ');
			}
			_putchar('\\');
			_putchar('\n');
		}
	}
	else
	{
		_putchar('\n');
	}
}
