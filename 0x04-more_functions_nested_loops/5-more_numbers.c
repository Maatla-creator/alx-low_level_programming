#include "holberton.h"
/**
 * more_numbers - prints 10 times the numbers 0 to 14 followed by a new line
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
