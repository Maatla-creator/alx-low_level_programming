#include "holberton.h"
/**
 * more_numbers - to print 10x the numbers 0-14, followed by newline
 *
 * Return : void
 */

void more_numbers(void)
{
	int i, n;

	i = 0;
	while (i <= 9)
	{

		for (n = 0; n <= 14; n++)
		{
			if (n > 9)
				_putchar((n / 10) + '0');
			_putchar((n % 10) + '0');
		}
		_putchar('\n');
		i++;
	}

}
