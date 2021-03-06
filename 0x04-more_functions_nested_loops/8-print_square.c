#include "holberton.h"
/*file: 8-print_square.c*/
/**
 * print_square - prints a square followed by a new line
 *
 * @size: parameter of the print_square function
 *
 * Return: void
 */
void print_square(int size)
{
	int j, n;

	n = size;
	if (size > 0)
	{
		for (j = 0; j < size; j++)
		{
			while (n > 0)
			{
				_putchar('#');
				n--;
			}
			_putchar('\n');
			n = size;
		}
	}
	else
	{
		_putchar('\n');
	}
}
