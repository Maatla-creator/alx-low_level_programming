#include "holberton.h"
/**
 * print_triangle - prints a triangle
 *
 * @size: parameter of the print_triangle function
 *
 * Return: void
 */
void print_triangle(int size)
{
	int i, m;

	if (size > 0)
	{
		for (i = 0; i < size; i++)
		{
			for (m = size - i; m > 1; m--)
			{
				_putchar(' ');
			}

			for (m = 0; m <= i; m++)
			{
				_putchar('#');
			}
			_putchar('\n');

		}
	}
	if (size <= 0)
	{
		_putchar('\n');
	}

}
